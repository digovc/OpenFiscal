namespace OpenFiscalCSharp.Dominio
{
    public class InfoImportacaoAdicao : DominioMain
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblDescontoValor;
        private int _intDraw;
        private int _intNumero;
        private int _intNumSequencial;
        private string _strFabricanteCodigo;

        public double dblDescontoValor
        {
            get
            {
                return _dblDescontoValor;
            }

            set
            {
                _dblDescontoValor = value;
            }
        }

        public int intDraw
        {
            get
            {
                return _intDraw;
            }

            set
            {
                _intDraw = value;
            }
        }

        public int intNumero
        {
            get
            {
                return _intNumero;
            }

            set
            {
                _intNumero = value;
            }
        }

        public int intNumSequencial
        {
            get
            {
                return _intNumSequencial;
            }

            set
            {
                _intNumSequencial = value;
            }
        }

        public string strFabricanteCodigo
        {
            get
            {
                return _strFabricanteCodigo;
            }

            set
            {
                _strFabricanteCodigo = value;
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