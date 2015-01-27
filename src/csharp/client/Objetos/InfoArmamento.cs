namespace OpenFiscalClient.Objetos
{
    public class InfoArmamento : ObjetoMain
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private bool _booUsoRestrito;
        private string _strArmaSerieNumero;
        private string _strCanoSerieNumero;
        private string _strDercricaoCompleta;

        public bool booUsoRestrito
        {
            get
            {
                return _booUsoRestrito;
            }

            set
            {
                _booUsoRestrito = value;
            }
        }

        public string strArmaSerieNumero
        {
            get
            {
                return _strArmaSerieNumero;
            }

            set
            {
                _strArmaSerieNumero = value;
            }
        }

        public string strCanoSerieNumero
        {
            get
            {
                return _strCanoSerieNumero;
            }

            set
            {
                _strCanoSerieNumero = value;
            }
        }

        public string strDercricaoCompleta
        {
            get
            {
                return _strDercricaoCompleta;
            }

            set
            {
                _strDercricaoCompleta = value;
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