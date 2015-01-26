#pragma once

#include "Node.h"

namespace OpenFiscal_arquivo_xml_node
{
	class NfrefNode :
		public Node
	{
	public:

		NfrefNode(Node* pObjNodePai);
		~NfrefNode();

	protected:

	private:

		Node* _pObjNodeAamm;
		Node* _pObjNodeCnpj;
		Node* _pObjNodeCpf;
		Node* _pObjNodeCuf;
		Node* _pObjNodeEcfMod;
		Node* _pObjNodeIe;
		Node* _pObjNodeMod;
		Node* _pObjNodeNcoo;
		Node* _pObjNodeNecf;
		Node* _pObjNodeNfpAamm;
		Node* _pObjNodeNfpCnpj;
		Node* _pObjNodeNfpCuf;
		Node* _pObjNodeNfpMod;
		Node* _pObjNodeNfpNnf;
		Node* _pObjNodeNfpSerie;
		Node* _pObjNodeNnf;
		Node* _pObjNodeRefcte;
		Node* _pObjNodeRefecf;
		Node* _pObjNodeRefnf;
		Node* _pObjNodeRefnfp;
		Node* _pObjNodeSerie;

		Node* getPObjNodeAamm();
		Node* getPObjNodeCnpj();
		Node* getPObjNodeCpf();
		Node* getPObjNodeCuf();
		Node* getPObjNodeEcfMod();
		Node* getPObjNodeIe();
		Node* getPObjNodeMod();
		Node* getPObjNodeNcoo();
		Node* getPObjNodeNecf();
		Node* getPObjNodeNfpAamm();
		Node* getPObjNodeNfpCnpj();
		Node* getPObjNodeNfpCuf();
		Node* getPObjNodeNfpMod();
		Node* getPObjNodeNfpNnf();
		Node* getPObjNodeNfpSerie();
		Node* getPObjNodeNnf();
		Node* getPObjNodeRefcte();
		Node* getPObjNodeRefecf();
		Node* getPObjNodeRefnf();
		Node* getPObjNodeRefnfp();
		Node* getPObjNodeSerie();
	};
}