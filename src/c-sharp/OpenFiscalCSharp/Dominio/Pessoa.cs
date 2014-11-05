namespace OpenFiscalCSharp.Dominio
{
    public class Pessoa : DominioMain
    {
        #region CONSTANTES

        public enum EnmCrt
        {
            NORMAL = 3,
            SIMPLES_NACIONAL = 1,
            SIMPLES_NACIONAL_ESRB = 2,
        }

        #endregion CONSTANTES

        #region ATRIBUTOS

        private long _intCnae;
        private long _intCnpj;
        private long _intCpf;
        private long _intInscEstadual;
        private long _intInscMunicipal;
        private int _intSuframa;
        private long _intTelefone;
        private Endereco _objEndereco;
        private string _strDocEstrangeiro;
        private string _strEmail;
        private string _strNome;
        private string _strNomeFantasia;

        public long intCnae
        {
            get
            {
                return _intCnae;
            }

            set
            {
                _intCnae = value;
            }
        }

        public long intCnpj
        {
            get
            {
                return _intCnpj;
            }

            set
            {
                _intCnpj = value;
            }
        }

        public long intCpf
        {
            get
            {
                return _intCpf;
            }

            set
            {
                _intCpf = value;
            }
        }

        public long intInscEstadual
        {
            get
            {
                return _intInscEstadual;
            }

            set
            {
                _intInscEstadual = value;
            }
        }

        public long intInscMunicipal
        {
            get
            {
                return _intInscMunicipal;
            }

            set
            {
                _intInscMunicipal = value;
            }
        }

        public long intTelefone
        {
            get
            {
                return _intTelefone;
            }

            set
            {
                _intTelefone = value;
            }
        }

        public Endereco objEndereco
        {
            get
            {
                return _objEndereco;
            }

            set
            {
                _objEndereco = value;
            }
        }

        public string strDocEstrangeiro
        {
            get
            {
                return _strDocEstrangeiro;
            }

            set
            {
                _strDocEstrangeiro = value;
            }
        }

        public string strEmail
        {
            get
            {
                return _strEmail;
            }

            set
            {
                _strEmail = value;
            }
        }

        public string strNome
        {
            get
            {
                return _strNome;
            }

            set
            {
                _strNome = value;
            }
        }

        public string strNomeFantasia
        {
            get
            {
                return _strNomeFantasia;
            }

            set
            {
                _strNomeFantasia = value;
            }
        }

        private int intSuframa
        {
            get
            {
                return _intSuframa;
            }

            set
            {
                _intSuframa = value;
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