namespace OpenFiscalClient.Objetos
{
    public class TributacaoIcmsRegNormal : TributacaoIcms
    {
        #region CONSTANTES

        public enum EnmBaseCalculoModalidade
        {
            MARGEM_VALOR_AGREGADO = 0,
            PAUTA = 1,
            PRECO_TABELADO = 2,
            VALOR_OPERACAO = 3,
        }

        public enum EnmBaseCalculoStModalidade
        {
            LISTA_NEGATIVA = 1,
            LISTA_NEUTRA = 3,
            LISTA_POSITIVA = 2,
            MARGEM_VALOR_AGREGADO = 4,
            PAUTA = 5,
            PRECO_TABELADO = 0,
        }

        #endregion CONSTANTES

        #region ATRIBUTOS

        private int _intCst;

        public int intCst
        {
            get
            {
                return _intCst;
            }

            set
            {
                _intCst = value;
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