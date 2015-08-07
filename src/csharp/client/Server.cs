using Newtonsoft.Json;
using OpenFiscalClient.Objetos;
using System;
using System.IO;
using System.Net;

namespace OpenFiscalClient
{
    public class Server : Objeto
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private static Server _i;

        private string _url;

        public static Server i
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (_i != null)
                    {
                        return _i;
                    }

                    _i = new Server();
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _i;
            }
        }

        private string url
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (_url != null)
                    {
                        return _url;
                    }

                    _url = "http://localhost/openfiscal/app";
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _url;
            }
        }

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        #endregion CONSTRUTORES

        #region MÉTODOS

        /// <summary>
        /// Envia o objeto "NotaFiscalEletronica" para o servidor e aguarda o retorno do XML da nota
        /// fiscal como resposta se todos os dados estiverem corretos.
        /// </summary>
        /// <param name="nfe">Nota Fiscal com os dados para geração do XML.</param>
        public void criarNfeXml(NotaFiscalEletronica nfe)
        {
            #region VARIÁVEIS

            ObjInterlocutor objInterlocutor;
            ObjInterlocutor objInterlocutorResposta;

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                objInterlocutor = new ObjInterlocutor();

                objInterlocutor.intFuncaoId = ObjInterlocutor.INT_FUNCAO_CRIAR_XML_NFE;
                objInterlocutor.strJson = JsonConvert.SerializeObject(nfe);

                objInterlocutorResposta = this.enviar(objInterlocutor);

                // TODO: Tratar retorno (objInterlocutorResposta).
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

        /// <summary>
        /// Enviar um "ObjInterlocutor" para o servidor e devolve o retorno.
        /// </summary>
        private ObjInterlocutor enviar(ObjInterlocutor objInterlocutor)
        {
            #region VARIÁVEIS

            HttpWebRequest objHttpWebRequest;
            HttpWebResponse objHttpWebResponse = null;
            StreamReader objStreamReader = null;
            StreamWriter objStreamWriter = null;

            string strJson;

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                if (objInterlocutor == null)
                {
                    throw new ArgumentNullException("objInterlocutor");
                }

                if (objInterlocutor.intFuncaoId == ObjInterlocutor.INT_FUNCAO_NONE)
                {
                    throw new ArgumentException("objInterlocutor.intFuncaoId");
                }

                if (String.IsNullOrEmpty(objInterlocutor.strJson))
                {
                    throw new ArgumentNullException("objInterlocutor.strJson");
                }

                objHttpWebRequest = (HttpWebRequest)WebRequest.Create(this.url);

                objHttpWebRequest.ContentType = "text/json";
                objHttpWebRequest.Method = "POST";

                objStreamWriter = new StreamWriter(objHttpWebRequest.GetRequestStream());

                strJson = JsonConvert.SerializeObject(objInterlocutor);

                objStreamWriter.Write(strJson);
                objStreamWriter.Flush();
                objStreamWriter.Close();

                objHttpWebResponse = (HttpWebResponse)objHttpWebRequest.GetResponse();

                objStreamReader = new StreamReader(objHttpWebResponse.GetResponseStream());

                return JsonConvert.DeserializeObject<ObjInterlocutor>(objStreamReader.ReadToEnd());
            }
            catch (Exception ex)
            {
                throw ex;
            }
            finally
            {
                objHttpWebRequest = null;
                objHttpWebResponse.Dispose();
                objStreamReader.Dispose();
                objStreamWriter.Dispose();
            }

            #endregion AÇÕES
        }

        #endregion MÉTODOS

        #region EVENTOS

        #endregion EVENTOS
    }
}