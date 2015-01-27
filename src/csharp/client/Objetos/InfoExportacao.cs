namespace OpenFiscalClient.Objetos
{
    public class InfoExportacao : ObjetoMain
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private double _dblDraw;
        private double _dblQuantidadeExportado;
        private long _intRegNumero;
        private string _strChaveAcesso;

        public double dblDraw
        {
            get
            {
                return _dblDraw;
            }

            set
            {
                _dblDraw = value;
            }
        }

        public double dblQuantidadeExportado
        {
            get
            {
                return _dblQuantidadeExportado;
            }

            set
            {
                _dblQuantidadeExportado = value;
            }
        }

        public long intRegNumero
        {
            get
            {
                return _intRegNumero;
            }

            set
            {
                _intRegNumero = value;
            }
        }

        public string strChaveAcesso
        {
            get
            {
                return _strChaveAcesso;
            }

            set
            {
                _strChaveAcesso = value;
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