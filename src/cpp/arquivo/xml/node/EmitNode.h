#pragma once

#include "Node.h"

namespace OpenFiscal_arquivo_xml_node
{
	class EmitNode :
		public Node
	{
	public:

		EmitNode(Node* pNdePai);
		~EmitNode();

	protected:

	private:

		Node* _pNdeCep;
		Node* _pNdeCmun;
		Node* _pNdeCnae;
		Node* _pNdeCnpj;
		Node* _pNdeCpais;
		Node* _pNdeCpf;
		Node* _pNdeCrt;
		Node* _pNdeEnderemit;
		Node* _pNdeFone;
		Node* _pNdeIe;
		Node* _pNdeIest;
		Node* _pNdeIm;
		Node* _pNdeNro;
		Node* _pNdeUf;
		Node* _pNdeX;
		Node* _pNdeXbairro;
		Node* _pNdeXcpl;
		Node* _pNdeXfant;
		Node* _pNdeXlgr;
		Node* _pNdeXmun;
		Node* _pNdeXnome;
		Node* _pNdeXpais;

		Node* getPNdeCep();
		Node* getPNdeCmun();
		Node* getPNdeCnae();
		Node* getPNdeCnpj();
		Node* getPNdeCpais();
		Node* getPNdeCpf();
		Node* getPNdeCrt();
		Node* getPNdeEnderemit();
		Node* getPNdeFone();
		Node* getPNdeIe();
		Node* getPNdeIest();
		Node* getPNdeIm();
		Node* getPNdeNro();
		Node* getPNdeUf();
		Node* getPNdeX();
		Node* getPNdeXbairro();
		Node* getPNdeXcpl();
		Node* getPNdeXfant();
		Node* getPNdeXlgr();
		Node* getPNdeXmun();
		Node* getPNdeXnome();
		Node* getPNdeXpais();
	};
}