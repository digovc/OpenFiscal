#pragma once

#include "Node.h"

namespace OpenFiscal_arquivo_xml_node
{
	class NfrefNode :
		public Node
	{
	public:

		NfrefNode(Node* pNdePai);
		~NfrefNode();

	protected:

	private:

		Node* _pNdeAamm;
		Node* _pNdeCnpj;
		Node* _pNdeCpf;
		Node* _pNdeCuf;
		Node* _pNdeEcfMod;
		Node* _pNdeIe;
		Node* _pNdeMod;
		Node* _pNdeNcoo;
		Node* _pNdeNecf;
		Node* _pNdeNfpAamm;
		Node* _pNdeNfpCnpj;
		Node* _pNdeNfpCuf;
		Node* _pNdeNfpMod;
		Node* _pNdeNfpNnf;
		Node* _pNdeNfpSerie;
		Node* _pNdeNnf;
		Node* _pNdeRefcte;
		Node* _pNdeRefecf;
		Node* _pNdeRefnf;
		Node* _pNdeRefnfp;
		Node* _pNdeSerie;

		Node* getPNdeAamm();
		Node* getPNdeCnpj();
		Node* getPNdeCpf();
		Node* getPNdeCuf();
		Node* getPNdeEcfMod();
		Node* getPNdeIe();
		Node* getPNdeMod();
		Node* getPNdeNcoo();
		Node* getPNdeNecf();
		Node* getPNdeNfpAamm();
		Node* getPNdeNfpCnpj();
		Node* getPNdeNfpCuf();
		Node* getPNdeNfpMod();
		Node* getPNdeNfpNnf();
		Node* getPNdeNfpSerie();
		Node* getPNdeNnf();
		Node* getPNdeRefcte();
		Node* getPNdeRefecf();
		Node* getPNdeRefnf();
		Node* getPNdeRefnfp();
		Node* getPNdeSerie();
	};
}