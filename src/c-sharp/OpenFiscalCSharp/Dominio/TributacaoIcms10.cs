using System;

namespace OpenFiscalCSharp.Dominio
{
    public abstract class TributacaoIcms10 : TributacaoIcmsRegNormal
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblAliquota;
        private double _dblBaseCalculoValor;
        private double _dblBcStReducaoPerc;
        private double _dblBcStReducaoValor;
        private double _dblMvast;
        private double _dblValor;
        private EnmBaseCalculoModalidade _enmBaseCalculoModalidade = EnmBaseCalculoModalidade.MARGEM_VALOR_AGREGADO;
        private EnmBaseCalculoStModalidade _enmBaseCalculoStModalidade = EnmBaseCalculoStModalidade.PRECO_TABELADO;

        public double dblAliquota
        {
            get
            {
                return _dblAliquota;
            }

            set
            {
                _dblAliquota = value;
            }
        }

        public double dblBaseCalculoValor
        {
            get
            {
                return _dblBaseCalculoValor;
            }

            set
            {
                _dblBaseCalculoValor = value;
            }
        }

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

        public double dblValor
        {
            get
            {
                return _dblValor;
            }

            set
            {
                _dblValor = value;
            }
        }

        public EnmBaseCalculoModalidade enmBaseCalculoModalidade
        {
            get
            {
                return _enmBaseCalculoModalidade;
            }

            set
            {
                _enmBaseCalculoModalidade = value;
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

        private double _dblBcStAliquota;
        public double dblBcStAliquota // TODO: Parei aqui
        {
            get
            {
                return _dblBcStAliquota;
            }
            set
            {
                _dblBcStAliquota = value;
            }
        }

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        public TributacaoIcms10()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                this.intCst = 10;
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