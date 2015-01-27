#pragma once

#include "ObjetoMain.h"

namespace OpenFiscal_arquivo_xml_obj
{
	class NotaFiscalEletronica :
		public ObjetoMain
	{
	public:
		NotaFiscalEletronica();
		~NotaFiscalEletronica();

	protected:

	private:

		Node* _pNdeBooConsumidorFinal;
		Node* _pNdeBooEntrada;
		Node* _pNdeBooHomologacao;
		Node* _pNdeDttContigencia;
		Node* _pNdeDttEmissao;
		Node* _pNdeDttSaida;
		Node* _pNdeEnmEmissaoFinalidade;
		Node* _pNdeEnmEmissaoProcesso;
		Node* _pNdeEnmEmissaoTipo;
		Node* _pNdeEnmFormaPagamento;
		Node* _pNdeEnmImpressaoTipo;
		Node* _pNdeEnmIndicadorClientePresenca;
		Node* _pNdeEnmLocalDestino;
		Node* _pNdeIntChaveAcessoDv;
		Node* _pNdeIntId;
		Node* _pNdeIntModelo;
		Node* _pNdeIntNumero;
		Node* _pNdeIntSerie;
		vector<NotaFiscalEletronica*> _lstPObjNotaFiscalEletronicaRef;

		Node* getPNdeBooConsumidorFinal();
		Node* getPNdeBooEntrada();
		Node* getPNdeBooHomologacao();
		Node* getPNdeDttContigencia();
		Node* getPNdeDttEmissao();
		Node* getPNdeDttSaida();
		Node* getPNdeEnmEmissaoFinalidade();
		Node* getPNdeEnmEmissaoProcesso();
		Node* getPNdeEnmEmissaoTipo();
		Node* getPNdeEnmFormaPagamento();
		Node* getPNdeEnmImpressaoTipo();
		Node* getPNdeEnmIndicadorClientePresenca();
		Node* getPNdeEnmLocalDestino();
		Node* getPNdeIntChaveAcessoDv();
		Node* getPNdeIntId();
		Node* getPNdeIntModelo();
		Node* getPNdeIntNumero();
		Node* getPNdeIntSerie();
		vector<NotaFiscalEletronica*> getLstPObjNotaFiscalEletronicaRef();
	};
}