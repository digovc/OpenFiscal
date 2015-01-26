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

		NfeNode(Node* pObjNodePai);
		~NfeNode();

		Node* getPObjNodeCdv();

	protected:

	private:

		Node* _pObjNodeCdv;
		Node* _pObjNodeCmunfg;
		Node* _pObjNodeCnf;
		Node* _pObjNodeCuf;
		Node* _pObjNodeDhcont;
		Node* _pObjNodeDhemi;
		Node* _pObjNodeDhsaient;
		Node* _pObjNodeFinnfe;
		Node* _pObjNodeId;
		Node* _pObjNodeIddest;
		Node* _pObjNodeIde;
		Node* _pObjNodeIndfinal;
		Node* _pObjNodeIndpag;
		Node* _pObjNodeIndpres;
		Node* _pObjNodeInfnfe;
		Node* _pObjNodeMod;
		Node* _pObjNodeNatop;
		Node* _pObjNodeNnf;
		Node* _pObjNodeProcemi;
		Node* _pObjNodeSerie;
		Node* _pObjNodeTpamb;
		Node* _pObjNodeTpemis;
		Node* _pObjNodeTpimp;
		Node* _pObjNodeTpnf;
		Node* _pObjNodeVerproc;
		Node* _pObjNodeVersao;
		Node* _pObjNodeX;
		Node* _pObjNodeXjust;
		vector<Node*> _lstPObjNodeNfref;

		//Node* getPObjNodeCdv();
		Node* getPObjNodeCmunfg();
		Node* getPObjNodeCnf();
		Node* getPObjNodeCuf();
		Node* getPObjNodeDhcont();
		Node* getPObjNodeDhemi();
		Node* getPObjNodeDhsaient();
		Node* getPObjNodeFinnfe();
		Node* getPObjNodeId();
		Node* getPObjNodeIddest();
		Node* getPObjNodeIde();
		Node* getPObjNodeIndfinal();
		Node* getPObjNodeIndpag();
		Node* getPObjNodeIndpres();
		Node* getPObjNodeInfnfe();
		Node* getPObjNodeMod();
		Node* getPObjNodeNatop();
		Node* getPObjNodeNnf();
		Node* getPObjNodeProcemi();
		Node* getPObjNodeSerie();
		Node* getPObjNodeTpamb();
		Node* getPObjNodeTpemis();
		Node* getPObjNodeTpimp();
		Node* getPObjNodeTpnf();
		Node* getPObjNodeVerproc();
		Node* getPObjNodeVersao();
		Node* getPObjNodeX();
		Node* getPObjNodeXjust();
		vector<Node*> getLstPObjNodeNfref();
	};
}
