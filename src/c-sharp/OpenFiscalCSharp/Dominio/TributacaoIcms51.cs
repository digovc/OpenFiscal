﻿using System;

namespace OpenFiscalCSharp.Dominio
{
    public abstract class TributacaoIcms51 : TributacaoIcmsRegNormal
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblAliquota;
        private double _dblBaseCalculoValor;
        private double _dblValor;
        private EnmBaseCalculoModalidade _enmBaseCalculoModalidade = EnmBaseCalculoModalidade.MARGEM_VALOR_AGREGADO;

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

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        public TributacaoIcms51()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                this.intCst = 51;
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