namespace OpenFiscalClient.Objetos
{
    public class Endereco : ObjetoMain
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private int _intCep;
        private int _intMunicipioCodigo;
        private int _intUfCodigo;
        private string _strBairro;
        private string _strComplemento;
        private string _strLogradouro;
        private string _strMunicipioNome;
        private string _strNumero;
        private string _strUfSigla;

        public int intCep
        {
            get
            {
                return _intCep;
            }

            set
            {
                _intCep = value;
            }
        }

        public int intMunicipioCodigo
        {
            get
            {
                return _intMunicipioCodigo;
            }

            set
            {
                _intMunicipioCodigo = value;
            }
        }

        public int intUfCodigo
        {
            get
            {
                return _intUfCodigo;
            }

            set
            {
                _intUfCodigo = value;
            }
        }

        public string strBairro
        {
            get
            {
                return _strBairro;
            }

            set
            {
                _strBairro = value;
            }
        }

        public string strComplemento
        {
            get
            {
                return _strComplemento;
            }

            set
            {
                _strComplemento = value;
            }
        }

        public string strLogradouro
        {
            get
            {
                return _strLogradouro;
            }

            set
            {
                _strLogradouro = value;
            }
        }

        public string strMunicipioNome
        {
            get
            {
                return _strMunicipioNome;
            }

            set
            {
                _strMunicipioNome = value;
            }
        }

        public string strNumero
        {
            get
            {
                return _strNumero;
            }

            set
            {
                _strNumero = value;
            }
        }

        public string strUfSigla
        {
            get
            {
                return _strUfSigla;
            }

            set
            {
                _strUfSigla = value;
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