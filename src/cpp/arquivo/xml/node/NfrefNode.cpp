#include "NfrefNode.h"

using namespace OpenFiscal_arquivo_xml_node;

NfrefNode::NfrefNode(Node* pNdePai) : Node(pNdePai)
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

Node* NfrefNode::getPNdeAamm()
{
	if (_pNdeAamm != nullptr)
	{
		return _pNdeAamm;
	}

	_pNdeAamm = new Node(this->getPNdeRefnf());

	_pNdeAamm->setEnmElementoTipo(ELEMENTO);
	_pNdeAamm->setEnmValorTipo(NUMERICO);
	_pNdeAamm->setIntOcorrenciaMax(1);
	_pNdeAamm->setIntOcorrenciaMin(1);
	_pNdeAamm->setIntTamanhoMax(4);
	_pNdeAamm->setIntTamanhoMin(4);
	_pNdeAamm->setStrIdentificador("BA05");
	_pNdeAamm->setStrNome("AAMM");

	return _pNdeAamm;
}

Node* NfrefNode::getPNdeCnpj()
{
	if (_pNdeCnpj != nullptr)
	{
		return _pNdeCnpj;
	}

	_pNdeCnpj = new Node(this->getPNdeRefnf());

	_pNdeCnpj->setEnmElementoTipo(ELEMENTO);
	_pNdeCnpj->setEnmValorTipo(NUMERICO);
	_pNdeCnpj->setIntOcorrenciaMax(1);
	_pNdeCnpj->setIntOcorrenciaMin(1);
	_pNdeCnpj->setIntTamanhoMax(14);
	_pNdeCnpj->setIntTamanhoMin(14);
	_pNdeCnpj->setStrIdentificador("BA06");
	_pNdeCnpj->setStrNome("CNPJ");

	return _pNdeCnpj;
}

Node* NfrefNode::getPNdeCpf()
{
	if (_pNdeCpf != nullptr)
	{
		return _pNdeCpf;
	}

	_pNdeCpf = new Node(this->getPNdeRefnfp());

	_pNdeCpf->setEnmElementoTipo(ELEMENTO);
	_pNdeCpf->setEnmValorTipo(NUMERICO);
	_pNdeCpf->setIntOcorrenciaMax(1);
	_pNdeCpf->setIntOcorrenciaMin(1);
	_pNdeCpf->setIntTamanhoMax(11);
	_pNdeCpf->setIntTamanhoMin(11);
	_pNdeCpf->setStrIdentificador("BA14");
	_pNdeCpf->setStrNome("CPF");

	return _pNdeCpf;
}

Node* NfrefNode::getPNdeCuf()
{
	if (_pNdeCuf != nullptr)
	{
		return _pNdeCuf;
	}

	_pNdeCuf = new Node(this->getPNdeRefnfp());

	_pNdeCuf->setEnmElementoTipo(ELEMENTO);
	_pNdeCuf->setEnmValorTipo(NUMERICO);
	_pNdeCuf->setIntOcorrenciaMax(1);
	_pNdeCuf->setIntOcorrenciaMin(1);
	_pNdeCuf->setIntTamanhoMax(2);
	_pNdeCuf->setIntTamanhoMin(2);
	_pNdeCuf->setStrIdentificador("BA11");
	_pNdeCuf->setStrNome("cUF");

	return _pNdeCuf;
}

Node* NfrefNode::getPNdeEcfMod()
{
	if (_pNdeEcfMod != nullptr)
	{
		return _pNdeEcfMod;
	}

	_pNdeEcfMod = new Node(this->getPNdeRefecf());

	_pNdeEcfMod->setEnmElementoTipo(ELEMENTO);
	_pNdeEcfMod->setEnmValorTipo(ALFANUMERICO);
	_pNdeEcfMod->setIntOcorrenciaMax(1);
	_pNdeEcfMod->setIntOcorrenciaMin(1);
	_pNdeEcfMod->setIntTamanhoMax(2);
	_pNdeEcfMod->setIntTamanhoMin(2);
	_pNdeEcfMod->setStrIdentificador("BA21");
	_pNdeEcfMod->setStrNome("mod");

	return _pNdeEcfMod;
}

Node* NfrefNode::getPNdeIe()
{
	if (_pNdeIe != nullptr)
	{
		return _pNdeIe;
	}

	_pNdeIe = new Node(this->getPNdeRefnfp());

	_pNdeIe->setEnmElementoTipo(ELEMENTO);
	_pNdeIe->setEnmValorTipo(NUMERICO);
	_pNdeIe->setIntOcorrenciaMax(1);
	_pNdeIe->setIntOcorrenciaMin(1);
	_pNdeIe->setIntTamanhoMax(14);
	_pNdeIe->setIntTamanhoMin(2);
	_pNdeIe->setStrIdentificador("BA15");
	_pNdeIe->setStrNome("IE");

	return _pNdeIe;
}

Node* NfrefNode::getPNdeMod()
{
	if (_pNdeMod != nullptr)
	{
		return _pNdeMod;
	}

	_pNdeMod = new Node(this->getPNdeRefnf());

	_pNdeMod->setEnmElementoTipo(ELEMENTO);
	_pNdeMod->setEnmValorTipo(NUMERICO);
	_pNdeMod->setIntOcorrenciaMax(1);
	_pNdeMod->setIntOcorrenciaMin(1);
	_pNdeMod->setIntTamanhoMax(2);
	_pNdeMod->setIntTamanhoMin(2);
	_pNdeMod->setStrIdentificador("BA07");
	_pNdeMod->setStrNome("mod");

	return _pNdeMod;
}

Node* NfrefNode::getPNdeNcoo()
{
	if (_pNdeNcoo != nullptr)
	{
		return _pNdeNcoo;
	}

	_pNdeNcoo = new Node(this->getPNdeRefecf());

	_pNdeNcoo->setEnmElementoTipo(ELEMENTO);
	_pNdeNcoo->setEnmValorTipo(NUMERICO);
	_pNdeNcoo->setIntOcorrenciaMax(1);
	_pNdeNcoo->setIntOcorrenciaMin(1);
	_pNdeNcoo->setIntTamanhoMax(6);
	_pNdeNcoo->setIntTamanhoMin(6);
	_pNdeNcoo->setStrIdentificador("BA23");
	_pNdeNcoo->setStrNome("nCOO");

	return _pNdeNcoo;
}

Node* NfrefNode::getPNdeNecf()
{
	if (_pNdeNecf != nullptr)
	{
		return _pNdeNecf;
	}

	_pNdeNecf = new Node(this->getPNdeRefecf());

	_pNdeNecf->setEnmElementoTipo(ELEMENTO);
	_pNdeNecf->setEnmValorTipo(NUMERICO);
	_pNdeNecf->setIntOcorrenciaMax(1);
	_pNdeNecf->setIntOcorrenciaMin(1);
	_pNdeNecf->setIntTamanhoMax(3);
	_pNdeNecf->setIntTamanhoMin(3);
	_pNdeNecf->setStrIdentificador("BA22");
	_pNdeNecf->setStrNome("nECF");

	return _pNdeNecf;
}

Node* NfrefNode::getPNdeNfpAamm()
{
	if (_pNdeNfpAamm != nullptr)
	{
		return _pNdeNfpAamm;
	}

	_pNdeNfpAamm = new Node(this->getPNdeRefnfp());

	_pNdeNfpAamm->setEnmElementoTipo(ELEMENTO);
	_pNdeNfpAamm->setEnmValorTipo(NUMERICO);
	_pNdeNfpAamm->setIntOcorrenciaMax(1);
	_pNdeNfpAamm->setIntOcorrenciaMin(1);
	_pNdeNfpAamm->setIntTamanhoMax(4);
	_pNdeNfpAamm->setIntTamanhoMin(4);
	_pNdeNfpAamm->setStrIdentificador("BA12");
	_pNdeNfpAamm->setStrNome("AAMM");

	return _pNdeNfpAamm;
}

Node* NfrefNode::getPNdeNfpCnpj()
{
	if (_pNdeNfpCnpj != nullptr)
	{
		return _pNdeNfpCnpj;
	}

	_pNdeNfpCnpj = new Node(this->getPNdeRefnfp());

	_pNdeNfpCnpj->setEnmElementoTipo(ELEMENTO);
	_pNdeNfpCnpj->setEnmValorTipo(NUMERICO);
	_pNdeNfpCnpj->setIntOcorrenciaMax(1);
	_pNdeNfpCnpj->setIntOcorrenciaMin(1);
	_pNdeNfpCnpj->setIntTamanhoMax(14);
	_pNdeNfpCnpj->setIntTamanhoMin(14);
	_pNdeNfpCnpj->setStrIdentificador("BA13");
	_pNdeNfpCnpj->setStrNome("CNPJ");

	return _pNdeNfpCnpj;
}

Node* NfrefNode::getPNdeNfpCuf()
{
	if (_pNdeNfpCuf != nullptr)
	{
		return _pNdeNfpCuf;
	}

	_pNdeNfpCuf = new Node(this->getPNdeRefnfp());

	_pNdeNfpCuf->setEnmElementoTipo(ELEMENTO);
	_pNdeNfpCuf->setEnmValorTipo(NUMERICO);
	_pNdeNfpCuf->setIntOcorrenciaMax(1);
	_pNdeNfpCuf->setIntOcorrenciaMin(1);
	_pNdeNfpCuf->setIntTamanhoMax(2);
	_pNdeNfpCuf->setIntTamanhoMin(2);
	_pNdeNfpCuf->setStrIdentificador("BA11");
	_pNdeNfpCuf->setStrNome("cUF");

	return _pNdeNfpCuf;
}

Node* NfrefNode::getPNdeNfpMod()
{
	if (_pNdeNfpMod != nullptr)
	{
		return _pNdeNfpMod;
	}

	_pNdeNfpMod = new Node(this->getPNdeRefnfp());

	_pNdeNfpMod->setEnmElementoTipo(ELEMENTO);
	_pNdeNfpMod->setEnmValorTipo(NUMERICO);
	_pNdeNfpMod->setIntOcorrenciaMax(1);
	_pNdeNfpMod->setIntOcorrenciaMin(1);
	_pNdeNfpMod->setIntTamanhoMax(2);
	_pNdeNfpMod->setIntTamanhoMin(2);
	_pNdeNfpMod->setStrIdentificador("BA16");
	_pNdeNfpMod->setStrNome("mod");

	return _pNdeNfpMod;
}

Node* NfrefNode::getPNdeNfpNnf()
{
	if (_pNdeNfpNnf != nullptr)
	{
		return _pNdeNfpNnf;
	}

	_pNdeNfpNnf = new Node(this->getPNdeRefnfp());

	_pNdeNfpNnf->setEnmElementoTipo(ELEMENTO);
	_pNdeNfpNnf->setEnmValorTipo(NUMERICO);
	_pNdeNfpNnf->setIntOcorrenciaMax(1);
	_pNdeNfpNnf->setIntOcorrenciaMin(1);
	_pNdeNfpNnf->setIntTamanhoMax(6);
	_pNdeNfpNnf->setIntTamanhoMin(1);
	_pNdeNfpNnf->setStrIdentificador("BA18");
	_pNdeNfpNnf->setStrNome("nNF");

	return _pNdeNfpNnf;
}

Node* NfrefNode::getPNdeNfpSerie()
{
	if (_pNdeNfpNnf != nullptr)
	{
		return _pNdeNfpNnf;
	}

	_pNdeNfpNnf = new Node(this->getPNdeRefnfp());

	_pNdeNfpNnf->setEnmElementoTipo(ELEMENTO);
	_pNdeNfpNnf->setEnmValorTipo(NUMERICO);
	_pNdeNfpNnf->setIntOcorrenciaMax(1);
	_pNdeNfpNnf->setIntOcorrenciaMin(1);
	_pNdeNfpNnf->setIntTamanhoMax(6);
	_pNdeNfpNnf->setIntTamanhoMin(1);
	_pNdeNfpNnf->setStrIdentificador("BA18");
	_pNdeNfpNnf->setStrNome("nNF");

	return _pNdeNfpNnf;
}

Node* NfrefNode::getPNdeNnf()
{
	if (_pNdeNnf != nullptr)
	{
		return _pNdeNnf;
	}

	_pNdeNnf = new Node(this->getPNdeRefnf());

	_pNdeNnf->setEnmElementoTipo(ELEMENTO);
	_pNdeNnf->setEnmValorTipo(NUMERICO);
	_pNdeNnf->setIntOcorrenciaMax(1);
	_pNdeNnf->setIntOcorrenciaMin(1);
	_pNdeNnf->setIntTamanhoMax(9);
	_pNdeNnf->setIntTamanhoMin(1);
	_pNdeNnf->setStrIdentificador("BA09");
	_pNdeNnf->setStrNome("nNF");

	return _pNdeNnf;
}

Node* NfrefNode::getPNdeRefcte()
{
	if (_pNdeRefcte != nullptr)
	{
		return _pNdeRefcte;
	}

	_pNdeRefcte = new Node(this);

	_pNdeRefcte->setEnmElementoTipo(ELEMENTO);
	_pNdeRefcte->setEnmValorTipo(NUMERICO);
	_pNdeRefcte->setIntOcorrenciaMax(1);
	_pNdeRefcte->setIntOcorrenciaMin(1);
	_pNdeRefcte->setIntTamanhoMax(44);
	_pNdeRefcte->setIntTamanhoMin(44);
	_pNdeRefcte->setStrIdentificador("BA19");
	_pNdeRefcte->setStrNome("refCTe");

	return _pNdeRefcte;
}

Node* NfrefNode::getPNdeRefecf()
{
	if (_pNdeRefecf != nullptr)
	{
		return _pNdeRefecf;
	}

	_pNdeRefecf = new Node(this);

	_pNdeRefecf->setEnmElementoTipo(ELEMENTO);
	_pNdeRefecf->setEnmValorTipo(NENHUM);
	_pNdeRefecf->setIntOcorrenciaMax(1);
	_pNdeRefecf->setIntOcorrenciaMin(1);
	_pNdeRefecf->setIntTamanhoMax(-1);
	_pNdeRefecf->setIntTamanhoMin(-1);
	_pNdeRefecf->setStrIdentificador("BA20");
	_pNdeRefecf->setStrNome("refECF");

	return _pNdeRefecf;
}

Node* NfrefNode::getPNdeRefnf()
{
	if (_pNdeRefnf != nullptr)
	{
		return _pNdeRefnf;
	}

	_pNdeRefnf = new Node(this);

	_pNdeRefnf->setEnmElementoTipo(ELEMENTO);
	_pNdeRefnf->setEnmValorTipo(NENHUM);
	_pNdeRefnf->setIntOcorrenciaMax(1);
	_pNdeRefnf->setIntOcorrenciaMin(1);
	_pNdeRefnf->setIntTamanhoMax(-1);
	_pNdeRefnf->setIntTamanhoMin(-1);
	_pNdeRefnf->setStrIdentificador("BA03");
	_pNdeRefnf->setStrNome("refNF");

	return _pNdeRefnf;
}

Node* NfrefNode::getPNdeRefnfp()
{
	if (_pNdeRefnfp != nullptr)
	{
		return _pNdeRefnfp;
	}

	_pNdeRefnfp = new Node(this);

	_pNdeRefnfp->setEnmElementoTipo(ELEMENTO);
	_pNdeRefnfp->setEnmValorTipo(NENHUM);
	_pNdeRefnfp->setIntOcorrenciaMax(1);
	_pNdeRefnfp->setIntOcorrenciaMin(1);
	_pNdeRefnfp->setIntTamanhoMax(-1);
	_pNdeRefnfp->setIntTamanhoMin(-1);
	_pNdeRefnfp->setStrIdentificador("BA10");
	_pNdeRefnfp->setStrNome("refNFP");

	return _pNdeRefnfp;
}

Node* NfrefNode::getPNdeSerie()
{
	if (_pNdeSerie != nullptr)
	{
		return _pNdeSerie;
	}

	_pNdeSerie = new Node(this->getPNdeRefnf());

	_pNdeSerie->setEnmElementoTipo(ELEMENTO);
	_pNdeSerie->setEnmValorTipo(NUMERICO);
	_pNdeSerie->setIntOcorrenciaMax(1);
	_pNdeSerie->setIntOcorrenciaMin(1);
	_pNdeSerie->setIntTamanhoMax(3);
	_pNdeSerie->setIntTamanhoMin(1);
	_pNdeSerie->setStrIdentificador("BA08");
	_pNdeSerie->setStrNome("serie");

	return _pNdeSerie;
}