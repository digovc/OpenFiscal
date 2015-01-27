using System;
using System.IO;
using System.Xml.Serialization;

namespace OpenFiscalClient.Objetos
{
    public abstract class ObjetoMain : Objeto
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private string _dirExportCompleto;
        private string _strArquivoExportNome;

        public string dirExportCompleto
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (!String.IsNullOrEmpty(_dirExportCompleto))
                    {
                        return _dirExportCompleto;
                    }

                    _dirExportCompleto = "_dir_export\\obj\\_arquivo_nome";
                    
                    _dirExportCompleto = _dirExportCompleto.Replace("_dir_export", AppOpenFiscal.i.dirExport);
                    _dirExportCompleto = _dirExportCompleto.Replace("_arquivo_nome", this.strArquivoExportNome);                    
                    _dirExportCompleto = _dirExportCompleto.Replace("\\\\", "\\");
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _dirExportCompleto;
            }
        }

        private string strArquivoExportNome
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (!String.IsNullOrEmpty(_strArquivoExportNome))
                    {
                        return _strArquivoExportNome;
                    }

                    _strArquivoExportNome = "_tipo_nome__instancia_id.xml";
                    _strArquivoExportNome = _strArquivoExportNome.Replace("_tipo_nome", this.GetType().Name);
                    _strArquivoExportNome = _strArquivoExportNome.Replace("_instancia_id", Convert.ToString((int) this.intIndex).PadLeft(5, '0'));
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _strArquivoExportNome;
            }
        }

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        #endregion CONSTRUTORES

        #region MÉTODOS

        /// <summary>
        /// Deleta o arquivo XMl temporário que representa esta instância.
        /// </summary>
        public void deletarXml()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                if (!File.Exists(this.dirExportCompleto))
                {
                    return;
                }

                File.Delete(this.dirExportCompleto);
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
        /// Exporta os dados da instância deste objeto para um arquivo XML para ser usado pela
        /// </summary>
        public void exportarXml()
        {
            #region VARIÁVEIS

            FileStream objFileStream;
            XmlSerializer objXmlSerializer;

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                Directory.CreateDirectory(Path.GetDirectoryName(this.dirExportCompleto));
                
                objFileStream = System.IO.File.Create(this.dirExportCompleto);

                objXmlSerializer = new XmlSerializer(this.GetType());
                objXmlSerializer.Serialize(objFileStream, this);

                objFileStream.Close();
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