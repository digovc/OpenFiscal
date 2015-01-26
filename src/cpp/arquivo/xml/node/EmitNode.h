#pragma once

#include "Node.h"

namespace OpenFiscal_arquivo_xml_node
{
	class EmitNode :
		public Node
	{
	public:

		EmitNode(Node* pObjNodePai);
		~EmitNode();

	protected:

	private:

		Node* _pObjNodeCep;
		Node* _pObjNodeCmun;
		Node* _pObjNodeCnae;
		Node* _pObjNodeCnpj;
		Node* _pObjNodeCpais;
		Node* _pObjNodeCpf;
		Node* _pObjNodeCrt;
		Node* _pObjNodeEnderemit;
		Node* _pObjNodeFone;
		Node* _pObjNodeIe;
		Node* _pObjNodeIest;
		Node* _pObjNodeIm;
		Node* _pObjNodeNro;
		Node* _pObjNodeUf;
		Node* _pObjNodeX;
		Node* _pObjNodeXbairro;
		Node* _pObjNodeXcpl;
		Node* _pObjNodeXfant;
		Node* _pObjNodeXlgr;
		Node* _pObjNodeXmun;
		Node* _pObjNodeXnome;
		Node* _pObjNodeXpais;

		Node* getPObjNodeCep();
		Node* getPObjNodeCmun();
		Node* getPObjNodeCnae();
		Node* getPObjNodeCnpj();
		Node* getPObjNodeCpais();
		Node* getPObjNodeCpf();
		Node* getPObjNodeCrt();
		Node* getPObjNodeEnderemit();
		Node* getPObjNodeFone();
		Node* getPObjNodeIe();
		Node* getPObjNodeIest();
		Node* getPObjNodeIm();
		Node* getPObjNodeNro();
		Node* getPObjNodeUf();
		Node* getPObjNodeX();
		Node* getPObjNodeXbairro();
		Node* getPObjNodeXcpl();
		Node* getPObjNodeXfant();
		Node* getPObjNodeXlgr();
		Node* getPObjNodeXmun();
		Node* getPObjNodeXnome();
		Node* getPObjNodeXpais();
	};
}