using System;
using OpenFiscalClient;
using OpenFiscalClient.Objetos;

namespace Test
{
    public class Program
    {
        #region CONSTANTES

        #endregion CONSTANTES

        #region ATRIBUTOS

        private static Program _i;
        private NotaFiscalEletronica _nfe;
        private Pessoa _objPessoaDestinatario;
        private Pessoa _objPessoaEmitente;

        public static Program i
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

                    _i = new Program();
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

        private NotaFiscalEletronica nfe
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (_nfe != null)
                    {
                        return _nfe;
                    }

                    _nfe = new NotaFiscalEletronica();

                    _nfe.booConsumidorFinal = true;
                    _nfe.objPessoaDestinatario = this.objPessoaDestinatario;
                    _nfe.objPessoaEmitente = this.objPessoaEmitente;
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _nfe;
            }
        }

        private Pessoa objPessoaDestinatario
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (_objPessoaDestinatario != null)
                    {
                        return _objPessoaDestinatario;
                    }

                    _objPessoaDestinatario = new Pessoa();
                    _objPessoaDestinatario.strNome = "Relatar Sistemas";
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _objPessoaDestinatario;
            }
        }

        private Pessoa objPessoaEmitente
        {
            get
            {
                #region VARIÁVEIS

                #endregion VARIÁVEIS

                #region AÇÕES

                try
                {
                    if (_objPessoaEmitente != null)
                    {
                        return _objPessoaEmitente;
                    }

                    _objPessoaEmitente = new Pessoa();
                    _objPessoaEmitente.strNome = "Rodrigo Vieira";
                }
                catch (Exception ex)
                {
                    throw ex;
                }
                finally
                {
                }

                #endregion AÇÕES

                return _objPessoaEmitente;
            }
        }

        #endregion ATRIBUTOS

        #region CONSTRUTORES

        #endregion CONSTRUTORES

        #region MÉTODOS

        private static void Main(string[] args)
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                Program.i.criarNfeXml();
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

        private void criarNfeXml()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                AppOpenFiscal.i.criarNfeXml(this.nfe);
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

        private void exportarObjetoDentroObjeto()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                Endereco objEndereco = new Endereco();
                objEndereco.intUfCodigo = 10;

                Pessoa objPessoa = new Pessoa();
                objPessoa.objEndereco = objEndereco;

                objPessoa.exportarXml();
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

        private void exportarVariosArquivosNotaFiscalEletronica()
        {
            #region VARIÁVEIS

            #endregion VARIÁVEIS

            #region AÇÕES

            try
            {
                for (int i = 0; i < 100; i++)
                {
                    Endereco objEndereco = new Endereco();
                    objEndereco.strBairro = "Centro";

                    Pessoa objPessoaEmitente = new Pessoa();
                    objPessoaEmitente.objEndereco = objEndereco;
                    objPessoaEmitente.strNome = "Rodrigo";

                    NotaFiscalEletronica nfe = new NotaFiscalEletronica();
                    nfe.objPessoaEmitente = objPessoaEmitente;
                    nfe.strId = "NFE999999999999999999999999999999";
                    nfe.exportarXml();
                }
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

        #endregion MÉTODOS

        #region EVENTOS

        #endregion EVENTOS
    }
}