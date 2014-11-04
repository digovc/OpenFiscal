#pragma once

#include "Node.h"

namespace OpenFiscal_arquivo_xml_node
{
	class DestNode :
		public Node
	{

	public:

		DestNode(Node* pObjNodePai);
		~DestNode();

	protected:

	private:

		Node* _pObjNodeCep;
		Node* _pObjNodeCmun;
		Node* _pObjNodeCnpj;
		Node* _pObjNodeCpais;
		Node* _pObjNodeCpf;
		Node* _pObjNodeEmail;
		Node* _pObjNodeEnderdest;
		Node* _pObjNodeFone;
		Node* _pObjNodeIdestrangeiro;
		Node* _pObjNodeIe;
		Node* _pObjNodeIm;
		Node* _pObjNodeIndiedest;
		Node* _pObjNodeIsuf;
		Node* _pObjNodeNro;
		Node* _pObjNodeUf;
		Node* _pObjNodeXbairro;
		Node* _pObjNodeXcpl;
		Node* _pObjNodeXlgr;
		Node* _pObjNodeXmun;
		Node* _pObjNodeXnome;
		Node* _pObjNodeXpais;

		Node* getPObjNodeCep();
		Node* getPObjNodeCmun();
		Node* getPObjNodeCnpj();
		Node* getPObjNodeCpais();
		Node* getPObjNodeCpf();
		Node* getPObjNodeEmail();
		Node* getPObjNodeEnderdest();
		Node* getPObjNodeFone();
		Node* getPObjNodeIdestrangeiro();
		Node* getPObjNodeIe();
		Node* getPObjNodeIm();
		Node* getPObjNodeIndiedest();
		Node* getPObjNodeIsuf();
		Node* getPObjNodeNro();
		Node* getPObjNodeUf();
		Node* getPObjNodeXbairro();
		Node* getPObjNodeXcpl();
		Node* getPObjNodeXlgr();
		Node* getPObjNodeXmun();
		Node* getPObjNodeXnome();
		Node* getPObjNodeXpais();

	};


}