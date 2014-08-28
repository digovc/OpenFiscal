#include "NfrefNode.h"

using namespace OpenFiscal_arquivo_xml_node;

NfrefNode::NfrefNode(Node* pObjNodePai) : Node(pObjNodePai)
{
	this->setEnmElementoTipo(GRUPO);
	this->setEnmValorTipo(NENHUM);
	this->setIntOcorrenciaMax(500);
	this->setIntOcorrenciaMin(0);
	this->setIntTamanhoMax(-1);
	this->setIntTamanhoMin(-1);
	this->setStrIdentificador("BA01");
	this->setStrNome("NFref");
}

NfrefNode::~NfrefNode()
{
}

Node* NfrefNode::getPObjNodeAamm()
{
	if (_pObjNodeAamm != nullptr)
	{
		return _pObjNodeAamm;
	}

	_pObjNodeAamm = new Node(this->getPObjNodeRefnf());

	_pObjNodeAamm->setEnmElementoTipo(ELEMENTO);
	_pObjNodeAamm->setEnmValorTipo(NUMERICO);
	_pObjNodeAamm->setIntOcorrenciaMax(1);
	_pObjNodeAamm->setIntOcorrenciaMin(1);
	_pObjNodeAamm->setIntTamanhoMax(4);
	_pObjNodeAamm->setIntTamanhoMin(4);
	_pObjNodeAamm->setStrIdentificador("BA05");
	_pObjNodeAamm->setStrNome("AAMM");

	return _pObjNodeAamm;
}

Node* NfrefNode::getPObjNodeCnpj()
{
	if (_pObjNodeCnpj != nullptr)
	{
		return _pObjNodeCnpj;
	}

	_pObjNodeCnpj = new Node(this->getPObjNodeRefnf());

	_pObjNodeCnpj->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCnpj->setEnmValorTipo(NUMERICO);
	_pObjNodeCnpj->setIntOcorrenciaMax(1);
	_pObjNodeCnpj->setIntOcorrenciaMin(1);
	_pObjNodeCnpj->setIntTamanhoMax(14);
	_pObjNodeCnpj->setIntTamanhoMin(14);
	_pObjNodeCnpj->setStrIdentificador("BA06");
	_pObjNodeCnpj->setStrNome("CNPJ");

	return _pObjNodeCnpj;
}

Node* NfrefNode::getPObjNodeCpf()
{
	if (_pObjNodeCpf != nullptr)
	{
		return _pObjNodeCpf;
	}

	_pObjNodeCpf = new Node(this->getPObjNodeRefnfp());

	_pObjNodeCpf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCpf->setEnmValorTipo(NUMERICO);
	_pObjNodeCpf->setIntOcorrenciaMax(1);
	_pObjNodeCpf->setIntOcorrenciaMin(1);
	_pObjNodeCpf->setIntTamanhoMax(11);
	_pObjNodeCpf->setIntTamanhoMin(11);
	_pObjNodeCpf->setStrIdentificador("BA14");
	_pObjNodeCpf->setStrNome("CPF");

	return _pObjNodeCpf;
}

Node* NfrefNode::getPObjNodeCuf()
{
	if (_pObjNodeCuf != nullptr)
	{
		return _pObjNodeCuf;
	}

	_pObjNodeCuf = new Node(this->getPObjNodeRefnfp());

	_pObjNodeCuf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCuf->setEnmValorTipo(NUMERICO);
	_pObjNodeCuf->setIntOcorrenciaMax(1);
	_pObjNodeCuf->setIntOcorrenciaMin(1);
	_pObjNodeCuf->setIntTamanhoMax(2);
	_pObjNodeCuf->setIntTamanhoMin(2);
	_pObjNodeCuf->setStrIdentificador("BA11");
	_pObjNodeCuf->setStrNome("cUF");

	return _pObjNodeCuf;
}

Node* NfrefNode::getPObjNodeEcfMod()
{
	if (_pObjNodeEcfMod != nullptr)
	{
		return _pObjNodeEcfMod;
	}

	_pObjNodeEcfMod = new Node(this->getPObjNodeRefecf());

	_pObjNodeEcfMod->setEnmElementoTipo(ELEMENTO);
	_pObjNodeEcfMod->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeEcfMod->setIntOcorrenciaMax(1);
	_pObjNodeEcfMod->setIntOcorrenciaMin(1);
	_pObjNodeEcfMod->setIntTamanhoMax(2);
	_pObjNodeEcfMod->setIntTamanhoMin(2);
	_pObjNodeEcfMod->setStrIdentificador("BA21");
	_pObjNodeEcfMod->setStrNome("mod");

	return _pObjNodeEcfMod;
}

Node* NfrefNode::getPObjNodeIe()
{
	if (_pObjNodeIe != nullptr)
	{
		return _pObjNodeIe;
	}

	_pObjNodeIe = new Node(this->getPObjNodeRefnfp());

	_pObjNodeIe->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIe->setEnmValorTipo(NUMERICO);
	_pObjNodeIe->setIntOcorrenciaMax(1);
	_pObjNodeIe->setIntOcorrenciaMin(1);
	_pObjNodeIe->setIntTamanhoMax(14);
	_pObjNodeIe->setIntTamanhoMin(2);
	_pObjNodeIe->setStrIdentificador("BA15");
	_pObjNodeIe->setStrNome("IE");

	return _pObjNodeIe;
}

Node* NfrefNode::getPObjNodeMod()
{
	if (_pObjNodeMod != nullptr)
	{
		return _pObjNodeMod;
	}

	_pObjNodeMod = new Node(this->getPObjNodeRefnf());

	_pObjNodeMod->setEnmElementoTipo(ELEMENTO);
	_pObjNodeMod->setEnmValorTipo(NUMERICO);
	_pObjNodeMod->setIntOcorrenciaMax(1);
	_pObjNodeMod->setIntOcorrenciaMin(1);
	_pObjNodeMod->setIntTamanhoMax(2);
	_pObjNodeMod->setIntTamanhoMin(2);
	_pObjNodeMod->setStrIdentificador("BA07");
	_pObjNodeMod->setStrNome("mod");

	return _pObjNodeMod;
}

Node* NfrefNode::getPObjNodeNcoo()
{
	if (_pObjNodeNcoo != nullptr)
	{
		return _pObjNodeNcoo;
	}

	_pObjNodeNcoo = new Node(this->getPObjNodeRefecf());

	_pObjNodeNcoo->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNcoo->setEnmValorTipo(NUMERICO);
	_pObjNodeNcoo->setIntOcorrenciaMax(1);
	_pObjNodeNcoo->setIntOcorrenciaMin(1);
	_pObjNodeNcoo->setIntTamanhoMax(6);
	_pObjNodeNcoo->setIntTamanhoMin(6);
	_pObjNodeNcoo->setStrIdentificador("BA23");
	_pObjNodeNcoo->setStrNome("nCOO");

	return _pObjNodeNcoo;
}

Node* NfrefNode::getPObjNodeNecf()
{
	if (_pObjNodeNecf != nullptr)
	{
		return _pObjNodeNecf;
	}

	_pObjNodeNecf = new Node(this->getPObjNodeRefecf());

	_pObjNodeNecf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNecf->setEnmValorTipo(NUMERICO);
	_pObjNodeNecf->setIntOcorrenciaMax(1);
	_pObjNodeNecf->setIntOcorrenciaMin(1);
	_pObjNodeNecf->setIntTamanhoMax(3);
	_pObjNodeNecf->setIntTamanhoMin(3);
	_pObjNodeNecf->setStrIdentificador("BA22");
	_pObjNodeNecf->setStrNome("nECF");

	return _pObjNodeNecf;
}

Node* NfrefNode::getPObjNodeNfpAamm()
{
	if (_pObjNodeNfpAamm != nullptr)
	{
		return _pObjNodeNfpAamm;
	}

	_pObjNodeNfpAamm = new Node(this->getPObjNodeRefnfp());

	_pObjNodeNfpAamm->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNfpAamm->setEnmValorTipo(NUMERICO);
	_pObjNodeNfpAamm->setIntOcorrenciaMax(1);
	_pObjNodeNfpAamm->setIntOcorrenciaMin(1);
	_pObjNodeNfpAamm->setIntTamanhoMax(4);
	_pObjNodeNfpAamm->setIntTamanhoMin(4);
	_pObjNodeNfpAamm->setStrIdentificador("BA12");
	_pObjNodeNfpAamm->setStrNome("AAMM");

	return _pObjNodeNfpAamm;
}

Node* NfrefNode::getPObjNodeNfpCnpj()
{
	if (_pObjNodeNfpCnpj != nullptr)
	{
		return _pObjNodeNfpCnpj;
	}

	_pObjNodeNfpCnpj = new Node(this->getPObjNodeRefnfp());

	_pObjNodeNfpCnpj->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNfpCnpj->setEnmValorTipo(NUMERICO);
	_pObjNodeNfpCnpj->setIntOcorrenciaMax(1);
	_pObjNodeNfpCnpj->setIntOcorrenciaMin(1);
	_pObjNodeNfpCnpj->setIntTamanhoMax(14);
	_pObjNodeNfpCnpj->setIntTamanhoMin(14);
	_pObjNodeNfpCnpj->setStrIdentificador("BA13");
	_pObjNodeNfpCnpj->setStrNome("CNPJ");

	return _pObjNodeNfpCnpj;
}

Node* NfrefNode::getPObjNodeNfpCuf()
{
	if (_pObjNodeNfpCuf != nullptr)
	{
		return _pObjNodeNfpCuf;
	}

	_pObjNodeNfpCuf = new Node(this->getPObjNodeRefnfp());

	_pObjNodeNfpCuf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNfpCuf->setEnmValorTipo(NUMERICO);
	_pObjNodeNfpCuf->setIntOcorrenciaMax(1);
	_pObjNodeNfpCuf->setIntOcorrenciaMin(1);
	_pObjNodeNfpCuf->setIntTamanhoMax(2);
	_pObjNodeNfpCuf->setIntTamanhoMin(2);
	_pObjNodeNfpCuf->setStrIdentificador("BA11");
	_pObjNodeNfpCuf->setStrNome("cUF");

	return _pObjNodeNfpCuf;
}

Node* NfrefNode::getPObjNodeNfpMod()
{
	if (_pObjNodeNfpMod != nullptr)
	{
		return _pObjNodeNfpMod;
	}

	_pObjNodeNfpMod = new Node(this->getPObjNodeRefnfp());

	_pObjNodeNfpMod->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNfpMod->setEnmValorTipo(NUMERICO);
	_pObjNodeNfpMod->setIntOcorrenciaMax(1);
	_pObjNodeNfpMod->setIntOcorrenciaMin(1);
	_pObjNodeNfpMod->setIntTamanhoMax(2);
	_pObjNodeNfpMod->setIntTamanhoMin(2);
	_pObjNodeNfpMod->setStrIdentificador("BA16");
	_pObjNodeNfpMod->setStrNome("mod");

	return _pObjNodeNfpMod;
}

Node* NfrefNode::getPObjNodeNfpNnf()
{
	if (_pObjNodeNfpNnf != nullptr)
	{
		return _pObjNodeNfpNnf;
	}

	_pObjNodeNfpNnf = new Node(this->getPObjNodeRefnfp());

	_pObjNodeNfpNnf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNfpNnf->setEnmValorTipo(NUMERICO);
	_pObjNodeNfpNnf->setIntOcorrenciaMax(1);
	_pObjNodeNfpNnf->setIntOcorrenciaMin(1);
	_pObjNodeNfpNnf->setIntTamanhoMax(6);
	_pObjNodeNfpNnf->setIntTamanhoMin(1);
	_pObjNodeNfpNnf->setStrIdentificador("BA18");
	_pObjNodeNfpNnf->setStrNome("nNF");

	return _pObjNodeNfpNnf;
}

Node* NfrefNode::getPObjNodeNfpSerie()
{
	if (_pObjNodeNfpNnf != nullptr)
	{
		return _pObjNodeNfpNnf;
	}

	_pObjNodeNfpNnf = new Node(this->getPObjNodeRefnfp());

	_pObjNodeNfpNnf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNfpNnf->setEnmValorTipo(NUMERICO);
	_pObjNodeNfpNnf->setIntOcorrenciaMax(1);
	_pObjNodeNfpNnf->setIntOcorrenciaMin(1);
	_pObjNodeNfpNnf->setIntTamanhoMax(6);
	_pObjNodeNfpNnf->setIntTamanhoMin(1);
	_pObjNodeNfpNnf->setStrIdentificador("BA18");
	_pObjNodeNfpNnf->setStrNome("nNF");

	return _pObjNodeNfpNnf;
}

Node* NfrefNode::getPObjNodeNnf()
{
	if (_pObjNodeNnf != nullptr)
	{
		return _pObjNodeNnf;
	}

	_pObjNodeNnf = new Node(this->getPObjNodeRefnf());

	_pObjNodeNnf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNnf->setEnmValorTipo(NUMERICO);
	_pObjNodeNnf->setIntOcorrenciaMax(1);
	_pObjNodeNnf->setIntOcorrenciaMin(1);
	_pObjNodeNnf->setIntTamanhoMax(9);
	_pObjNodeNnf->setIntTamanhoMin(1);
	_pObjNodeNnf->setStrIdentificador("BA09");
	_pObjNodeNnf->setStrNome("nNF");

	return _pObjNodeNnf;
}

Node* NfrefNode::getPObjNodeRefcte()
{
	if (_pObjNodeRefcte != nullptr)
	{
		return _pObjNodeRefcte;
	}

	_pObjNodeRefcte = new Node(this);

	_pObjNodeRefcte->setEnmElementoTipo(ELEMENTO);
	_pObjNodeRefcte->setEnmValorTipo(NUMERICO);
	_pObjNodeRefcte->setIntOcorrenciaMax(1);
	_pObjNodeRefcte->setIntOcorrenciaMin(1);
	_pObjNodeRefcte->setIntTamanhoMax(44);
	_pObjNodeRefcte->setIntTamanhoMin(44);
	_pObjNodeRefcte->setStrIdentificador("BA19");
	_pObjNodeRefcte->setStrNome("refCTe");

	return _pObjNodeRefcte;
}

Node* NfrefNode::getPObjNodeRefecf()
{
	if (_pObjNodeRefecf != nullptr)
	{
		return _pObjNodeRefecf;
	}

	_pObjNodeRefecf = new Node(this);

	_pObjNodeRefecf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeRefecf->setEnmValorTipo(NENHUM);
	_pObjNodeRefecf->setIntOcorrenciaMax(1);
	_pObjNodeRefecf->setIntOcorrenciaMin(1);
	_pObjNodeRefecf->setIntTamanhoMax(-1);
	_pObjNodeRefecf->setIntTamanhoMin(-1);
	_pObjNodeRefecf->setStrIdentificador("BA20");
	_pObjNodeRefecf->setStrNome("refECF");

	return _pObjNodeRefecf;
}

Node* NfrefNode::getPObjNodeRefnf()
{
	if (_pObjNodeRefnf != nullptr)
	{
		return _pObjNodeRefnf;
	}

	_pObjNodeRefnf = new Node(this);

	_pObjNodeRefnf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeRefnf->setEnmValorTipo(NENHUM);
	_pObjNodeRefnf->setIntOcorrenciaMax(1);
	_pObjNodeRefnf->setIntOcorrenciaMin(1);
	_pObjNodeRefnf->setIntTamanhoMax(-1);
	_pObjNodeRefnf->setIntTamanhoMin(-1);
	_pObjNodeRefnf->setStrIdentificador("BA03");
	_pObjNodeRefnf->setStrNome("refNF");

	return _pObjNodeRefnf;
}

Node* NfrefNode::getPObjNodeRefnfp()
{
	if (_pObjNodeRefnfp != nullptr)
	{
		return _pObjNodeRefnfp;
	}

	_pObjNodeRefnfp = new Node(this);

	_pObjNodeRefnfp->setEnmElementoTipo(ELEMENTO);
	_pObjNodeRefnfp->setEnmValorTipo(NENHUM);
	_pObjNodeRefnfp->setIntOcorrenciaMax(1);
	_pObjNodeRefnfp->setIntOcorrenciaMin(1);
	_pObjNodeRefnfp->setIntTamanhoMax(-1);
	_pObjNodeRefnfp->setIntTamanhoMin(-1);
	_pObjNodeRefnfp->setStrIdentificador("BA10");
	_pObjNodeRefnfp->setStrNome("refNFP");

	return _pObjNodeRefnfp;
}

Node* NfrefNode::getPObjNodeSerie()
{
	if (_pObjNodeSerie != nullptr)
	{
		return _pObjNodeSerie;
	}

	_pObjNodeSerie = new Node(this->getPObjNodeRefnf());

	_pObjNodeSerie->setEnmElementoTipo(ELEMENTO);
	_pObjNodeSerie->setEnmValorTipo(NUMERICO);
	_pObjNodeSerie->setIntOcorrenciaMax(1);
	_pObjNodeSerie->setIntOcorrenciaMin(1);
	_pObjNodeSerie->setIntTamanhoMax(3);
	_pObjNodeSerie->setIntTamanhoMin(1);
	_pObjNodeSerie->setStrIdentificador("BA08");
	_pObjNodeSerie->setStrNome("serie");

	return _pObjNodeSerie;
}