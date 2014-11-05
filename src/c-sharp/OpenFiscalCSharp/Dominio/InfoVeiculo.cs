namespace OpenFiscalCSharp.Dominio
{
    public class InfoVeiculo : DominioMain
    {
        #region CONSTANTES

        public enum EnmCondicao
        {
            ACABADO = 1,
            INACABADO = 2,
            SEMIACABADO = 3,
        }

        public enum EnmDenatranCor
        {
            AMARELO = 1,
            AZUL = 2,
            BEGE = 3,
            BRANCA = 4,
            CINZA = 5,
            DOURADA = 6,
            FANTASIA = 16,
            GRENA = 7,
            LARANJA = 8,
            MARROM = 9,
            PRATA = 10,
            PRETA = 11,
            ROSA = 12,
            ROXA = 13,
            VERDE = 14,
            VERMELHA = 15,
        }

        public enum EnmEspecie
        {
            CARGA = 2,
            CORRIDA = 4,
            ESPECIAL = 6,
            MISTO = 3,
            PASSAGEIRO = 1,
            TRACAO = 5,
        }

        public enum EnmOpercaoTipo
        {
            FATURAMENTO_DIRETO = 2,
            OUTROS = 0,
            VENDA_CONCESSIONARIA = 1,
            VENDA_DIRETA_ATACADO = 3,
        }

        public enum EnmRestricao
        {
            ALIENACAO_FIDUCIARIA = 1,
            ARRENDAMENTO_MERCANTIL = 2,
            NENHUMA = 0,
            OUTRO = 9,
            PENHOR = 4,
            RESERVA_DOMINIO = 3,
        }

        #endregion CONSTANTES

        #region ATRIBUTOS

        private bool _booChassiRemarcado;
        private double _dblPesoBrutoTonelada;
        private double _dblPesoLiqTonelada;
        private EnmCondicao _enmCondicao = EnmCondicao.ACABADO;
        private EnmEspecie _enmEspecie = EnmEspecie.PASSAGEIRO;
        private EnmOpercaoTipo _enmOpercaoTipo = EnmOpercaoTipo.OUTROS;
        private int _intCombustivelTipo = 16;
        private int _intFabricacaoAno;
        private int _intLotacao;
        private int _intMarcaModeloCodigo;
        private int _intModeloAno;
        private int _intVeiculoTipo = 6;
        private string _strChassi;
        private string _strCilindrada;
        private string _strCmt;
        private string _strCorCodigo;
        private string _strCorDescricao;
        private string _strDistanciaEixo;
        private string _strMotorNumero;
        private string _strPinturaTipo;
        private string _strPotencia;
        private string _strSerie;

        public bool booChassiRemarcado
        {
            get
            {
                return _booChassiRemarcado;
            }

            set
            {
                _booChassiRemarcado = value;
            }
        }

        public double dblPesoBrutoTonelada
        {
            get
            {
                return _dblPesoBrutoTonelada;
            }

            set
            {
                _dblPesoBrutoTonelada = value;
            }
        }

        public double dblPesoLiqTonelada
        {
            get
            {
                return _dblPesoLiqTonelada;
            }

            set
            {
                _dblPesoLiqTonelada = value;
            }
        }

        public EnmEspecie enmEspecie
        {
            get
            {
                return _enmEspecie;
            }

            set
            {
                _enmEspecie = value;
            }
        }

        public EnmOpercaoTipo enmOpercaoTipo
        {
            get
            {
                return _enmOpercaoTipo;
            }

            set
            {
                _enmOpercaoTipo = value;
            }
        }

        public int intCombustivelTipo
        {
            get
            {
                return _intCombustivelTipo;
            }

            set
            {
                _intCombustivelTipo = value;
            }
        }

        public int intFabricacaoAno
        {
            get
            {
                return _intFabricacaoAno;
            }

            set
            {
                _intFabricacaoAno = value;
            }
        }

        public int intLotacao
        {
            get
            {
                return _intLotacao;
            }

            set
            {
                _intLotacao = value;
            }
        }

        public int intMarcaModeloCodigo
        {
            get
            {
                return _intMarcaModeloCodigo;
            }

            set
            {
                _intMarcaModeloCodigo = value;
            }
        }

        public int intModeloAno
        {
            get
            {
                return _intModeloAno;
            }

            set
            {
                _intModeloAno = value;
            }
        }

        public int intVeiculoTipo
        {
            get
            {
                return _intVeiculoTipo;
            }

            set
            {
                _intVeiculoTipo = value;
            }
        }

        public string strChassi
        {
            get
            {
                return _strChassi;
            }

            set
            {
                _strChassi = value;
            }
        }

        public string strCilindrada
        {
            get
            {
                return _strCilindrada;
            }

            set
            {
                _strCilindrada = value;
            }
        }

        public string strCmt
        {
            get
            {
                return _strCmt;
            }

            set
            {
                _strCmt = value;
            }
        }

        public string strCorDescricao
        {
            get
            {
                return _strCorDescricao;
            }

            set
            {
                _strCorDescricao = value;
            }
        }

        public string strDistanciaEixo
        {
            get
            {
                return _strDistanciaEixo;
            }

            set
            {
                _strDistanciaEixo = value;
            }
        }

        public string strMotorNumero
        {
            get
            {
                return _strMotorNumero;
            }

            set
            {
                _strMotorNumero = value;
            }
        }

        public string strPinturaTipo
        {
            get
            {
                return _strPinturaTipo;
            }

            set
            {
                _strPinturaTipo = value;
            }
        }

        public string strPotencia
        {
            get
            {
                return _strPotencia;
            }

            set
            {
                _strPotencia = value;
            }
        }

        public string strSerie
        {
            get
            {
                return _strSerie;
            }

            set
            {
                _strSerie = value;
            }
        }

        private EnmCondicao enmCondicao
        {
            get
            {
                return _enmCondicao;
            }

            set
            {
                _enmCondicao = value;
            }
        }

        private string strCorCodigo
        {
            get
            {
                return _strCorCodigo;
            }

            set
            {
                _strCorCodigo = value;
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