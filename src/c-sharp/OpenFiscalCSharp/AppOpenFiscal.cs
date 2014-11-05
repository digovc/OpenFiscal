using System;
using System.IO;

namespace OpenFiscalCSharp
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

        #endregion MÉTODOS

        #region EVENTOS

        #endregion EVENTOS
    }
}