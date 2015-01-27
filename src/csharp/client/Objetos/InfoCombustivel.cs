namespace OpenFiscalClient.Objetos
{
    public class InfoCombustivel : ObjetoMain
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblCideAliquota;
        private double _dblCideBaseCalculo;
        private double _dblCideValor;
        private double _dblGasPercentual;
        private double _dblQtdTempAmbiente;
        private int _intAnpCodigo;
        private string _strCodif;
        private string _strUfConsumo;

        public double dblCideAliquota
        {
            get
            {
                return _dblCideAliquota;
            }

            set
            {
                _dblCideAliquota = value;
            }
        }

        public double dblCideBaseCalculo
        {
            get
            {
                return _dblCideBaseCalculo;
            }

            set
            {
                _dblCideBaseCalculo = value;
            }
        }

        public double dblCideValor
        {
            get
            {
                return _dblCideValor;
            }

            set
            {
                _dblCideValor = value;
            }
        }

        public double dblGasPercentual
        {
            get
            {
                return _dblGasPercentual;
            }

            set
            {
                _dblGasPercentual = value;
            }
        }

        public double dblQtdTempAmbiente
        {
            get
            {
                return _dblQtdTempAmbiente;
            }

            set
            {
                _dblQtdTempAmbiente = value;
            }
        }

        public int intAnpCodigo
        {
            get
            {
                return _intAnpCodigo;
            }

            set
            {
                _intAnpCodigo = value;
            }
        }

        public string strCodif
        {
            get
            {
                return _strCodif;
            }

            set
            {
                _strCodif = value;
            }
        }

        public string strUfConsumo
        {
            get
            {
                return _strUfConsumo;
            }

            set
            {
                _strUfConsumo = value;
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