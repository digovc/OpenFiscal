using System;

namespace OpenFiscalCSharp.Dominio
{
    public abstract class TributacaoIcms30 : TributacaoIcmsRegNormal
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblBcStReducaoPerc;
        private double _dblBcStReducaoValor;
        private double _dblMvast;
        private EnmBaseCalculoStModalidade _enmBaseCalculoStModalidade = EnmBaseCalculoStModalidade.PRECO_TABELADO;

        public double dblBcStReducaoPerc
        {
            get
            {
                return _dblBcStReducaoPerc;
            }

            set
            {
                _dblBcStReducaoPerc = value;
            }
        }

        public double dblMvast
        {
            get
            {
                return _dblMvast;
            }

            set
            {
                _dblMvast = value;
            }
        }

        public EnmBaseCalculoStModalidade enmBaseCalculoStModalidade
        {
            get
            {
                return _enmBaseCalculoStModalidade;
            }

            set
            {
                _enmBaseCalculoStModalidade = value;
            }
        }

        private double dblBcStReducaoValor
        {
            get
            {
                return _dblBcStReducaoValor;
            }

            set
            {
                _dblBcStReducaoValor = value;
            }
        }

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        public TributacaoIcms30()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                this.intCst = 30;
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