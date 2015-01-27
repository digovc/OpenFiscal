#pragma once

#include "Node.h"

namespace OpenFiscal_arquivo_xml_node
{
	class DestNode :
		public Node
	{
	public:

		DestNode(Node* pNdePai);
		~DestNode();

	protected:

	private:

		Node* _pNdeCep;
		Node* _pNdeCmun;
		Node* _pNdeCnpj;
		Node* _pNdeCpais;
		Node* _pNdeCpf;
		Node* _pNdeEmail;
		Node* _pNdeEnderdest;
		Node* _pNdeFone;
		Node* _pNdeIdestrangeiro;
		Node* _pNdeIe;
		Node* _pNdeIm;
		Node* _pNdeIndiedest;
		Node* _pNdeIsuf;
		Node* _pNdeNro;
		Node* _pNdeUf;
		Node* _pNdeXbairro;
		Node* _pNdeXcpl;
		Node* _pNdeXlgr;
		Node* _pNdeXmun;
		Node* _pNdeXnome;
		Node* _pNdeXpais;

		Node* getPNdeCep();
		Node* getPNdeCmun();
		Node* getPNdeCnpj();
		Node* getPNdeCpais();
		Node* getPNdeCpf();
		Node* getPNdeEmail();
		Node* getPNdeEnderdest();
		Node* getPNdeFone();
		Node* getPNdeIdestrangeiro();
		Node* getPNdeIe();
		Node* getPNdeIm();
		Node* getPNdeIndiedest();
		Node* getPNdeIsuf();
		Node* getPNdeNro();
		Node* getPNdeUf();
		Node* getPNdeXbairro();
		Node* getPNdeXcpl();
		Node* getPNdeXlgr();
		Node* getPNdeXmun();
		Node* getPNdeXnome();
		Node* getPNdeXpais();
	};
}