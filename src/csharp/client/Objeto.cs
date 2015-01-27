using System;
using System.Xml.Serialization;

namespace OpenFiscalClient
{
    public abstract class Objeto
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private static int _intIndexStatic = -1;
        private int _intIndex;

        private static int intIndexStatic
        {
            get
            {
                return _intIndexStatic;
            }

            set
            {
                _intIndexStatic = value;
            }
        }

        [XmlIgnore]
        public int intIndex
        {
            get
            {
                return _intIndex;
            }

            private set
            {
                _intIndex = value;
            }
        }

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        public Objeto()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                this.intIndex = ++intIndexStatic;
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

        #endregion CONSTRUTORES

        #region MÉTODOS

        #endregion MÉTODOS

        #region EVENTOS

        #endregion EVENTOS
    }
}