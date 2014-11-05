using System;
using System.Collections.Generic;

namespace OpenFiscalCSharp.Dominio
{
    public class NotaFiscalEletronica : DominioMain
    {
        #region CONSTANTES

        public enum EnmEmissaoFinalidade
        {
            AJUSTE = 3,
            COMPLEMENTAR = 2,
            DEVOLUCAO = 4,
            NORMAL = 1,
        }

        public enum EnmEmissaoProcesso
        {
            AVULSO_PELO_CONTRIBUINTE = 2,
            AVULSO_PELO_FISCO = 1,
            SOFTWARE_FISCO = 3,
            SOFTWARE_PROPRIO = 0,
        }

        public enum EnmEmissaoTipo
        {
            CONTINGENCIA_DPEC = 4,
            CONTINGENCIA_FS_DA = 5,
            CONTINGENCIA_FS_IA = 2,
            CONTINGENCIA_OFF_LINE_NFC_E = 9,
            CONTINGENCIA_SCAN = 3,
            CONTINGENCIA_SVC_AN = 6,
            CONTINGENCIA_SVC_RS = 7,
            NORMAL = 1,
        }

        public enum EnmFormaPagamento
        {
            A_VISTA = 0,
            OUTROS = 2,
            PRAZO = 1,
        }

        public enum EnmImpressaoTipo
        {
            DANFE_NFC_E = 4,
            DANFE_NFC_E_MSG_ELETRONICA = 5,
            DANFE_NORMAL_PAISAGEM = 2,
            DANFE_NORMAL_RETRATO = 1,
            DANFE_SIMPLIFICADO = 3,
            SEM_GERACAO_DANFE = 0,
        }

        public enum EnmIndicadorClientePresenca
        {
            ENTREGA_DOMICILIO = 4,
            INTERNET = 2,
            NAO_APLICAVEL = 0,
            NAO_PRESENCIAL_OUTROS = 9,
            PRESENTE = 1,
            TELEFONE = 3,
        }

        public enum EnmInscEstadualIndicador
        {
            CONTRIBUINTE_ICMS = 1,
            ISENTO_ICMS = 2,
            NAO_CONTRIBUINTE = 9,
        }

        public enum EnmLocalDestino
        {
            OPERACAO_INTERESTADUAL = 2,
            OPERACAO_INTERNA = 1,
            OPERACAO_INTERNACIONAL = 3,
        }

        #endregion CONSTANTES

        #region ATRIBUTOS

        private bool _booConsumidorFinal;
        private bool _booEntrada;
        private bool _booHomologacao;
        private DateTime _dttContigencia;
        private DateTime _dttEmissao;
        private DateTime _dttSaida;
        private EnmEmissaoFinalidade _enmEmissaoFinalidade = EnmEmissaoFinalidade.NORMAL;
        private EnmEmissaoProcesso _enmEmissaoProcesso = EnmEmissaoProcesso.SOFTWARE_PROPRIO;
        private EnmEmissaoTipo _enmEmissaoTipo = EnmEmissaoTipo.NORMAL;
        private EnmFormaPagamento _enmFormaPagamento = EnmFormaPagamento.A_VISTA;
        private EnmImpressaoTipo _enmImpressaoTipo = EnmImpressaoTipo.DANFE_NORMAL_RETRATO;
        private EnmIndicadorClientePresenca _enmIndicadorClientePresenca = EnmIndicadorClientePresenca.PRESENTE;
        private EnmLocalDestino _enmLocalDestino = EnmLocalDestino.OPERACAO_INTERNA;
        private int _intChaveAcessoDv;
        private int _intId;
        private int _intModelo;
        private int _intNumero;
        private int _intSerie;
        private List<NotaFiscalEletronicaItem> _lstObjNotaFiscalEletronicaItem;
        private List<NotaFiscalEletronica> _lstObjNotaFiscalEletronicaRef;
        private List<Pessoa> _lstObjPessoaAcessoXml;
        private Pessoa _objPessoaDestinatario;
        private Pessoa _objPessoaDestRetirada;
        private Pessoa _objPessoaEmitente;
        private string _strCfopDescricao;
        private string _strContingenciaJustificativa;
        private string _strId;
        private string _strSoftwareVersao;

        public bool booConsumidorFinal
        {
            get
            {
                return _booConsumidorFinal;
            }

            set
            {
                _booConsumidorFinal = value;
            }
        }

        public bool booEntrada
        {
            get
            {
                return _booEntrada;
            }

            set
            {
                _booEntrada = value;
            }
        }

        public bool booHomologacao
        {
            get
            {
                return _booHomologacao;
            }

            set
            {
                _booHomologacao = value;
            }
        }

        public DateTime dttContigencia
        {
            get
            {
                return _dttContigencia;
            }

            set
            {
                _dttContigencia = value;
            }
        }

        public DateTime dttEmissao
        {
            get
            {
                return _dttEmissao;
            }

            set
            {
                _dttEmissao = value;
            }
        }

        public DateTime dttSaida
        {
            get
            {
                return _dttSaida;
            }

            set
            {
                _dttSaida = value;
            }
        }

        public EnmEmissaoFinalidade enmEmissaoFinalidade
        {
            get
            {
                return _enmEmissaoFinalidade;
            }

            set
            {
                _enmEmissaoFinalidade = value;
            }
        }

        public EnmEmissaoProcesso enmEmissaoProcesso
        {
            get
            {
                return _enmEmissaoProcesso;
            }

            set
            {
                _enmEmissaoProcesso = value;
            }
        }

        public EnmEmissaoTipo enmEmissaoTipo
        {
            get
            {
                return _enmEmissaoTipo;
            }

            set
            {
                _enmEmissaoTipo = value;
            }
        }

        public EnmFormaPagamento enmFormaPagamento
        {
            get
            {
                return _enmFormaPagamento;
            }

            set
            {
                _enmFormaPagamento = value;
            }
        }

        public EnmImpressaoTipo enmImpressaoTipo
        {
            get
            {
                return _enmImpressaoTipo;
            }

            set
            {
                _enmImpressaoTipo = value;
            }
        }

        public EnmIndicadorClientePresenca enmIndicadorClientePresenca
        {
            get
            {
                return _enmIndicadorClientePresenca;
            }

            set
            {
                _enmIndicadorClientePresenca = value;
            }
        }

        public EnmLocalDestino enmLocalDestino
        {
            get
            {
                return _enmLocalDestino;
            }

            set
            {
                _enmLocalDestino = value;
            }
        }

        public int intChaveAcessoDv
        {
            get
            {
                return _intChaveAcessoDv;
            }

            set
            {
                _intChaveAcessoDv = value;
            }
        }

        public int intId
        {
            get
            {
                return _intId;
            }

            set
            {
                _intId = value;
            }
        }

        public int intModelo
        {
            get
            {
                return _intModelo;
            }

            set
            {
                _intModelo = value;
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

        public int intSerie
        {
            get
            {
                return _intSerie;
            }

            set
            {
                _intSerie = value;
            }
        }

        public List<NotaFiscalEletronicaItem> lstObjNotaFiscalEletronicaItem
        {
            get
            {
                return _lstObjNotaFiscalEletronicaItem;
            }

            set
            {
                _lstObjNotaFiscalEletronicaItem = value;
            }
        }

        public List<NotaFiscalEletronica> lstObjNotaFiscalEletronicaRef
        {
            get
            {
                return _lstObjNotaFiscalEletronicaRef;
            }

            set
            {
                _lstObjNotaFiscalEletronicaRef = value;
            }
        }

        public List<Pessoa> lstObjPessoaAcessoXml
        {
            get
            {
                return _lstObjPessoaAcessoXml;
            }

            set
            {
                _lstObjPessoaAcessoXml = value;
            }
        }

        public Pessoa objPessoaDestinatario
        {
            get
            {
                return _objPessoaDestinatario;
            }

            set
            {
                _objPessoaDestinatario = value;
            }
        }

        public Pessoa objPessoaEmitente
        {
            get
            {
                return _objPessoaEmitente;
            }

            set
            {
                _objPessoaEmitente = value;
            }
        }

        /// <summary>
        /// Informar a natureza da operação de que decorrer a saída ou a entrada, tais como: venda,
        /// compra, transferência, devolução, importação, consignação, remessa (para fins de
        /// demonstração, de industrialização ou outra), conforme previsto na alínea 'i', inciso I,
        /// art. 19 do CONVÊNIO S/Nº, de 15 de dezembro de 1970.
        /// </summary>
        public string strCfopDescricao
        {
            get
            {
                return _strCfopDescricao;
            }

            set
            {
                _strCfopDescricao = value;
            }
        }

        public string strContingenciaJustificativa
        {
            get
            {
                return _strContingenciaJustificativa;
            }

            set
            {
                _strContingenciaJustificativa = value;
            }
        }

        /// <summary>
        /// Informar a chave de acesso precedida do literal "NFe".
        /// </summary>
        public string strId
        {
            get
            {
                return _strId;
            }

            set
            {
                _strId = value;
            }
        }

        public string strSoftwareVersao
        {
            get
            {
                return _strSoftwareVersao;
            }

            set
            {
                _strSoftwareVersao = value;
            }
        }

        private Pessoa objPessoaDestRetirada
        {
            get
            {
                return _objPessoaDestRetirada;
            }

            set
            {
                _objPessoaDestRetirada = value;
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