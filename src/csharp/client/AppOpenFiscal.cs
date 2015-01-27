using OpenFiscalClient.Objetos;
using System;
using System.Diagnostics;
using System.IO;

namespace OpenFiscalClient
{
    public class AppOpenFiscal : App
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private static AppOpenFiscal _i;
        private string _dirExport;

        public static AppOpenFiscal i
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (_i != null)
                    {
                        return _i;
                    }

                    _i = new AppOpenFiscal();
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _i;
            }
        }

        /// <summary>
        /// Diretório de exportação das informações para a integração com a biblioteca OpenFiscal.
        /// </summary>
        public string dirExport
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (!String.IsNullOrEmpty(_dirExport))
                    {
                        return _dirExport;
                    }

                    _dirExport = "_path_temp\\AppOpenFiscal";
                    _dirExport = _dirExport.Replace("_path_temp", Path.GetTempPath());

                    Directory.CreateDirectory(_dirExport);
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _dirExport;
            }
        }

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        #endregion CONSTRUTORES

        #region MÉTODOS

        /// <summary>
        /// Cria o arquivo XML da nota fiscal pronto para ser assinado e enviado para o servidor do Governo.
        /// </summary>
        /// <param name="nfe"></param>
        /// <returns>0: Arquivo gerado com sucesso.</returns>
        /// <returns>1: Falha ao gerar o arquivo.</returns>
        /// <returns>2: Nota fiscal inválido. Verificar a propriedade "lstStrCritica" para ter acesso as críticas.</returns>
        public int criarNfeXml(NotaFiscalEletronica nfe)
        {
            #region VARIÁVEIS

            int intResultado;

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                if (nfe == null)
                {
                    throw new ArgumentNullException();
                }

                if (!this.validarNfe(nfe))
                {
                    return 2;
                }

                nfe.exportarXml();
                intResultado = this.runCriarNfeXml(nfe);
                nfe.deletarXml();
            }
            catch (Exception ex)
            {
                throw ex;
            }
            finally
            {
            }

            #endregion AÇÕES

            return intResultado;
        }

        private int runCriarNfeXml(NotaFiscalEletronica nfe)
        {
            #region VARIÁVEIS

            string strArg;

            #endregion VARIÁVEIS

            #region AÇÕES
            try
            {
                if (nfe == null)
                {
                    throw new ArgumentNullException();
                }

                strArg = "-x _arquivo_diretorio";
                strArg = strArg.Replace("_arquivo_diretorio", nfe.dirExportCompleto);

                return this.run(strArg);
            }
            catch (Exception ex)
            {
                throw ex;
            }
            finally
            {
            }
            #endregion AÇÕES
        }

        private int run(string strArg)
        {
            #region VARIÁVEIS

            Process objProcess;

            #endregion VARIÁVEIS

            #region AÇÕES
            try
            {
                objProcess = new Process();
                
                objProcess.StartInfo.UseShellExecute = false;
                objProcess.StartInfo.RedirectStandardOutput = true;
                objProcess.StartInfo.FileName = "OpenFiscal.exe";
                objProcess.StartInfo.Arguments = strArg;
                objProcess.Start();
                objProcess.WaitForExit();
                
                return objProcess.ExitCode;
            }
            catch (Exception ex)
            {
                throw ex;
            }
            finally
            {
            }
            #endregion AÇÕES
        }

        private bool validarNfe(NotaFiscalEletronica nfe)
        {
            #region VARIÁVEIS
            #endregion VARIÁVEIS

            #region AÇÕES
            try
            {
                // TODO: Validar o objeto antes de ser enviado para a biblioteca principal.
                // TODO: Armazenar as possíveis críticas numa propriedade chamada "lstStrCritica".
            }
            catch (Exception ex)
            {
                throw ex;
            }
            finally
            {
            }
            #endregion AÇÕES

            return true;
        }

        #endregion MÉTODOS

        #region EVENTOS

        #endregion EVENTOS
    }
}