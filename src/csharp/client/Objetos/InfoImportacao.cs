using System;
using System.Collections.Generic;

namespace OpenFiscalClient.Objetos
{
    public class InfoImportacao : ObjetoMain
    {
        #region CONSTANTES

        public enum EnmImportacaoForma
        {
            ENCOMENDA = 3,
            ORDEM = 2,
            PROPRIA = 1,
        }

        public enum EnmViaTransInternacional
        {
            AERIA = 4,
            CONDUTO = 8,
            ENTRADA_SAIDA = 10,
            FERROVIARIA = 6,
            FLUVIAL = 2,
            LACUSTRE = 3,
            MARITIMA = 1,
            MEIOS_PROPRIOS = 9,
            POSTAL = 5,
            RODOVIARIA = 7,
        }

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblAfrmm;
        private DateTime _dttDesembaraco;
        private DateTime _dttRegistro;
        private EnmImportacaoForma _enmImportacaoForma = EnmImportacaoForma.PROPRIA;
        private EnmViaTransInternacional _enmViaTransInternacional = EnmViaTransInternacional.MEIOS_PROPRIOS;
        private long _intAdquirenteCnpj;
        private List<InfoImportacaoAdicao> _lstObjInfoImportacaoAdicao;
        private string _strAdquirenteUf;

        private string _strDocumentoImportacao;

        private string _strExportadorCodigo;

        private string _strLocalDesembaraco;

        private string _strUfDesembaraco;

        public double dblAfrmm
        {
            get
            {
                return _dblAfrmm;
            }

            set
            {
                _dblAfrmm = value;
            }
        }

        public DateTime dttRegistro
        {
            get
            {
                return _dttRegistro;
            }

            set
            {
                _dttRegistro = value;
            }
        }

        public EnmImportacaoForma enmImportacaoForma
        {
            get
            {
                return _enmImportacaoForma;
            }

            set
            {
                _enmImportacaoForma = value;
            }
        }

        public EnmViaTransInternacional enmViaTransInternacional
        {
            get
            {
                return _enmViaTransInternacional;
            }

            set
            {
                _enmViaTransInternacional = value;
            }
        }

        public long intAdquirenteCnpj
        {
            get
            {
                return _intAdquirenteCnpj;
            }

            set
            {
                _intAdquirenteCnpj = value;
            }
        }

        public List<InfoImportacaoAdicao> lstObjInfoImportacaoAdicao
        {
            get
            {
                return _lstObjInfoImportacaoAdicao;
            }

            set
            {
                _lstObjInfoImportacaoAdicao = value;
            }
        }

        public string strDocumentoImportacao
        {
            get
            {
                return _strDocumentoImportacao;
            }

            set
            {
                _strDocumentoImportacao = value;
            }
        }

        public string strExportadorCodigo
        {
            get
            {
                return _strExportadorCodigo;
            }

            set
            {
                _strExportadorCodigo = value;
            }
        }

        public string strLocalDesembaraco
        {
            get
            {
                return _strLocalDesembaraco;
            }

            set
            {
                _strLocalDesembaraco = value;
            }
        }

        public string strUfDesembaraco
        {
            get
            {
                return _strUfDesembaraco;
            }

            set
            {
                _strUfDesembaraco = value;
            }
        }

        private DateTime dttDesembaraco
        {
            get
            {
                return _dttDesembaraco;
            }

            set
            {
                _dttDesembaraco = value;
            }
        }

        private string strAdquirenteUf
        {
            get
            {
                return _strAdquirenteUf;
            }

            set
            {
                _strAdquirenteUf = value;
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