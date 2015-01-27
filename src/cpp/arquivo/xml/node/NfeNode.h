#pragma once

#include <vector>

#include "Node.h"

using namespace std;

namespace OpenFiscal_arquivo_xml_node
{
	class NfeNode :
		public Node
	{
	public:

		NfeNode(Node* pNdePai);
		~NfeNode();

		Node* getPNdeCdv();

	protected:

	private:

		Node* _pNdeCdv;
		Node* _pNdeCmunfg;
		Node* _pNdeCnf;
		Node* _pNdeCuf;
		Node* _pNdeDhcont;
		Node* _pNdeDhemi;
		Node* _pNdeDhsaient;
		Node* _pNdeFinnfe;
		Node* _pNdeId;
		Node* _pNdeIddest;
		Node* _pNdeIde;
		Node* _pNdeIndfinal;
		Node* _pNdeIndpag;
		Node* _pNdeIndpres;
		Node* _pNdeInfnfe;
		Node* _pNdeMod;
		Node* _pNdeNatop;
		Node* _pNdeNnf;
		Node* _pNdeProcemi;
		Node* _pNdeSerie;
		Node* _pNdeTpamb;
		Node* _pNdeTpemis;
		Node* _pNdeTpimp;
		Node* _pNdeTpnf;
		Node* _pNdeVerproc;
		Node* _pNdeVersao;
		Node* _pNdeX;
		Node* _pNdeXjust;
		vector<Node*> _lstPNdeNfref;

		//Node* getPNdeCdv();
		Node* getPNdeCmunfg();
		Node* getPNdeCnf();
		Node* getPNdeCuf();
		Node* getPNdeDhcont();
		Node* getPNdeDhemi();
		Node* getPNdeDhsaient();
		Node* getPNdeFinnfe();
		Node* getPNdeId();
		Node* getPNdeIddest();
		Node* getPNdeIde();
		Node* getPNdeIndfinal();
		Node* getPNdeIndpag();
		Node* getPNdeIndpres();
		Node* getPNdeInfnfe();
		Node* getPNdeMod();
		Node* getPNdeNatop();
		Node* getPNdeNnf();
		Node* getPNdeProcemi();
		Node* getPNdeSerie();
		Node* getPNdeTpamb();
		Node* getPNdeTpemis();
		Node* getPNdeTpimp();
		Node* getPNdeTpnf();
		Node* getPNdeVerproc();
		Node* getPNdeVersao();
		Node* getPNdeX();
		Node* getPNdeXjust();
		vector<Node*> getLstPNdeNfref();
	};
}
