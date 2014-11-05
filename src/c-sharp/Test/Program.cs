using OpenFiscalCSharp.Dominio;
using System;

namespace Test
{
    public class Program
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private static Program _i;

        public static Program i
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

                    _i = new Program();
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

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        #endregion CONSTRUTORES

        #region MÉTODOS

        private static void Main(string[] args)
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                Program.i.exportarVariosArquivosNotaFiscalEletronica();
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

        /// <summary>
        ///
        /// </summary>
        private void exportarObjetoDentroObjeto()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                Endereco objEndereco = new Endereco();
                objEndereco.intUfCodigo = 10;

                Pessoa objPessoa = new Pessoa();
                objPessoa.objEndereco = objEndereco;

                objPessoa.exportar();
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

        private void exportarVariosArquivosNotaFiscalEletronica()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                for (int i = 0; i < 100; i++)
                {
                    Endereco objEndereco = new Endereco();
                    objEndereco.strBairro = "Centro";
                    
                    Pessoa objPessoaEmitente = new Pessoa();
                    objPessoaEmitente.objEndereco = objEndereco;
                    objPessoaEmitente.strNome = "Rodrigo";

                    NotaFiscalEletronica nfe = new NotaFiscalEletronica();
                    nfe.objPessoaEmitente = objPessoaEmitente;
                    nfe.strId = "NFE999999999999999999999999999999";
                    nfe.exportar();
                }
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

        #endregion MÉTODOS

        #region EVENTOS

        #endregion EVENTOS
    }
}