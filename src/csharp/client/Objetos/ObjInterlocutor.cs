using Newtonsoft.Json;

namespace OpenFiscalClient.Objetos
{
    public class ObjInterlocutor : ObjetoMain
    {
        #region CONSTANTES

        public const int INT_FUNCAO_CRIAR_XML_NFE = 1;
        public const int INT_FUNCAO_NONE = 0;

        #endregion CONSTANTES

        #region ATRIBUTOS

        private int _intFuncaoId;

        private string _strJson;

        [JsonProperty("_strJson")]
        public string strJson
        {
            get
            {
                return _strJson;
            }

            set
            {
                _strJson = value;
            }
        }

        [JsonProperty("_intFuncaoId")]
        public int intFuncaoId
        {
            get
            {
                return _intFuncaoId;
            }

            set
            {
                _intFuncaoId = value;
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