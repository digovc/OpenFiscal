namespace OpenFiscalCSharp.Dominio
{
    public abstract class TributacaoIcms : DominioMain
    {
        #region CONSTANTES

        public enum EnmOrigem
        {
            /// <summary>
            /// Estrangeira: Importação direta, exceto a indicada no código 6.
            /// </summary>
            ESTRANGEIRA_1,

            /// <summary>
            /// Estrangeira: Adquirida no mercado interno, exceto a indicada no código 7.
            /// </summary>
            ESTRANGEIRA_2,

            /// <summary>
            /// Estrangeira: Importação direta, sem similar nacional, constante em lista da CAMEX e
            ///              gás natural.
            /// </summary>
            ESTRANGEIRA_6,

            /// <summary>
            /// Estrangeira: Adquirida no mercado interno, sem similar nacional, constante lista
            ///              CAMEX e gás natural.
            /// </summary>
            ESTRANGEIRA_7,

            /// <summary>
            /// Nacional: Exceto as indicadas nos códigos 3, 4, 5 e 8.
            /// </summary>
            NACIONAL_0,

            /// <summary>
            /// Nacional: Mercadoria ou bem com conteúdo de importação superior a 40% e inferior ou
            ///           igual a 70%.
            /// </summary>
            NACIONAL_3,

            /// <summary>
            /// Nacional: Cuja produção tenha sido feita em conformidade com os processos produtivos
            ///           básicos de que tratam as legislações citadas nos ajustes.
            /// </summary>
            NACIONAL_4,

            /// <summary>
            /// Nacional: Mercadoria ou bem com conteúdo de importação inferior ou igual a 40%.
            /// </summary>
            NACIONAL_5,

            /// <summary>
            /// Nacional: mercadoria ou bem com conteúdo de importação superior a 70%.
            /// </summary>
            NACIONAL_8,
        }

        #endregion CONSTANTES

        #region ATRIBUTOS

        private EnmOrigem _enmOrigem = EnmOrigem.NACIONAL_0;

        private EnmOrigem enmOrigem
        {
            get
            {
                return _enmOrigem;
            }

            set
            {
                _enmOrigem = value;
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