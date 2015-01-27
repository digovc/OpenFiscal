using System;

namespace OpenFiscalClient.Objetos
{
    public class InfoMedicamento : ObjetoMain
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblConsumidorValorMaximo;
        private double _dblLoteQuantidade;
        private DateTime _dttFabricacao;
        private DateTime _dttValidade;
        private string _strLoteNumero;

        public double dblConsumidorValorMaximo
        {
            get
            {
                return _dblConsumidorValorMaximo;
            }

            set
            {
                _dblConsumidorValorMaximo = value;
            }
        }

        public double dblLoteQuantidade
        {
            get
            {
                return _dblLoteQuantidade;
            }

            set
            {
                _dblLoteQuantidade = value;
            }
        }

        public DateTime dttFabricacao
        {
            get
            {
                return _dttFabricacao;
            }

            set
            {
                _dttFabricacao = value;
            }
        }

        public DateTime dttValidade
        {
            get
            {
                return _dttValidade;
            }

            set
            {
                _dttValidade = value;
            }
        }

        public string strLoteNumero
        {
            get
            {
                return _strLoteNumero;
            }

            set
            {
                _strLoteNumero = value;
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