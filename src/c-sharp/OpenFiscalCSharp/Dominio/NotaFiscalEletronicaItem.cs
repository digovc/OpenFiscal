using System.Collections.Generic;

namespace OpenFiscalCSharp.Dominio
{
    public class NotaFiscalEletronicaItem : DominioMain
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private bool _booCompoeValorTotal = true;
        private double _dblQuantidade;
        private double _dblQuantidadeTributavel;
        private double _dblTributoTotalValor;
        private double _dblValorDesconto;
        private double _dblValorFrete;
        private double _dblValorOutras;
        private double _dblValorSeguro;
        private double _dblValorTotal;
        private double _dblValorUnitario;
        private double _dblValorUnitarioTributavel;
        private int _intCfop;
        private long _intCodigoBarra;
        private int _intExTipi;
        private int _intNcm;
        private int _intNumSequencial;
        private int _intPedidoItemNumero;
        private List<InfoExportacao> _lstObjInfoExportacao;
        private List<InfoImportacao> _lstObjInfoImportacao;
        private InfoArmamento _objInfoArmamento;
        private InfoCombustivel _objInfoCombustivel;
        private InfoMedicamento _objInfoMedicamento;
        private InfoVeiculo _objInfoVeiculo;
        private TributacaoIcms _objTributacaoIcms;
        private string _strCodigo;
        private string _strFci;
        private string _strNome;
        private string _strNve;
        private string _strPedidoCodigo;
        private string _strRecopi;
        private string _strUnidade;
        private string _strUnidadeTributavel;

        public bool booCompoeValorTotal
        {
            get
            {
                return _booCompoeValorTotal;
            }

            set
            {
                _booCompoeValorTotal = value;
            }
        }

        public double dblQuantidade
        {
            get
            {
                return _dblQuantidade;
            }

            set
            {
                _dblQuantidade = value;
            }
        }

        public double dblQuantidadeTributavel
        {
            get
            {
                return _dblQuantidadeTributavel;
            }

            set
            {
                _dblQuantidadeTributavel = value;
            }
        }

        public double dblTributoTotalValor
        {
            get
            {
                return _dblTributoTotalValor;
            }

            set
            {
                _dblTributoTotalValor = value;
            }
        }

        public double dblValorDesconto
        {
            get
            {
                return _dblValorDesconto;
            }

            set
            {
                _dblValorDesconto = value;
            }
        }

        public double dblValorFrete
        {
            get
            {
                return _dblValorFrete;
            }

            set
            {
                _dblValorFrete = value;
            }
        }

        public double dblValorOutras
        {
            get
            {
                return _dblValorOutras;
            }

            set
            {
                _dblValorOutras = value;
            }
        }

        public double dblValorSeguro
        {
            get
            {
                return _dblValorSeguro;
            }

            set
            {
                _dblValorSeguro = value;
            }
        }

        public double dblValorTotal
        {
            get
            {
                return _dblValorTotal;
            }

            set
            {
                _dblValorTotal = value;
            }
        }

        public double dblValorUnitario
        {
            get
            {
                return _dblValorUnitario;
            }

            set
            {
                _dblValorUnitario = value;
            }
        }

        public double dblValorUnitarioTributavel
        {
            get
            {
                return _dblValorUnitarioTributavel;
            }

            set
            {
                _dblValorUnitarioTributavel = value;
            }
        }

        public int intCfop
        {
            get
            {
                return _intCfop;
            }

            set
            {
                _intCfop = value;
            }
        }

        public long intCodigoBarra
        {
            get
            {
                return _intCodigoBarra;
            }

            set
            {
                _intCodigoBarra = value;
            }
        }

        public int intExTipi
        {
            get
            {
                return _intExTipi;
            }

            set
            {
                _intExTipi = value;
            }
        }

        public int intNcm
        {
            get
            {
                return _intNcm;
            }

            set
            {
                _intNcm = value;
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

        public int intPedidoItemNumero
        {
            get
            {
                return _intPedidoItemNumero;
            }

            set
            {
                _intPedidoItemNumero = value;
            }
        }

        public List<InfoExportacao> lstObjInfoExportacao
        {
            get
            {
                return _lstObjInfoExportacao;
            }

            set
            {
                _lstObjInfoExportacao = value;
            }
        }

        public List<InfoImportacao> lstObjInfoImportacao
        {
            get
            {
                return _lstObjInfoImportacao;
            }

            set
            {
                _lstObjInfoImportacao = value;
            }
        }

        public InfoArmamento objInfoArmamento
        {
            get
            {
                return _objInfoArmamento;
            }

            set
            {
                _objInfoArmamento = value;
            }
        }

        public InfoCombustivel objInfoCombustivel
        {
            get
            {
                return _objInfoCombustivel;
            }

            set
            {
                _objInfoCombustivel = value;
            }
        }

        public InfoMedicamento objInfoMedicamento
        {
            get
            {
                return _objInfoMedicamento;
            }

            set
            {
                _objInfoMedicamento = value;
            }
        }

        public InfoVeiculo objInfoVeiculo
        {
            get
            {
                return _objInfoVeiculo;
            }

            set
            {
                _objInfoVeiculo = value;
            }
        }

        public TributacaoIcms objTributacaoIcms
        {
            get
            {
                return _objTributacaoIcms;
            }

            set
            {
                _objTributacaoIcms = value;
            }
        }

        public string strCodigo
        {
            get
            {
                return _strCodigo;
            }

            set
            {
                _strCodigo = value;
            }
        }

        public string strFci
        {
            get
            {
                return _strFci;
            }

            set
            {
                _strFci = value;
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

        public string strNve
        {
            get
            {
                return _strNve;
            }

            set
            {
                _strNve = value;
            }
        }

        public string strPedidoCodigo
        {
            get
            {
                return _strPedidoCodigo;
            }

            set
            {
                _strPedidoCodigo = value;
            }
        }

        public string strRecopi
        {
            get
            {
                return _strRecopi;
            }

            set
            {
                _strRecopi = value;
            }
        }

        public string strUnidade
        {
            get
            {
                return _strUnidade;
            }

            set
            {
                _strUnidade = value;
            }
        }

        public string strUnidadeTributavel
        {
            get
            {
                return _strUnidadeTributavel;
            }

            set
            {
                _strUnidadeTributavel = value;
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