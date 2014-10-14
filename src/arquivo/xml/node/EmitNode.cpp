#include "EmitNode.h"

using namespace OpenFiscal_arquivo_xml_node;

EmitNode::EmitNode(Node* pObjNodePai) :Node(pObjNodePai)
{
	this->setEnmElementoTipo(GRUPO);
	this->setEnmValorTipo(NENHUM);
	this->setIntOcorrenciaMax(1);
	this->setIntOcorrenciaMin(1);
	this->setIntTamanhoMax(-1);
	this->setIntTamanhoMin(-1);
	this->setStrIdentificador("C01");
	this->setStrNome("emit");
}

EmitNode::~EmitNode()
{
}

Node* EmitNode::getPObjNodeCep()
{
	if (_pObjNodeCep != nullptr)
	{
		return _pObjNodeCep;
	}

	_pObjNodeCep = new Node(this->getPObjNodeEnderemit());

	_pObjNodeCep->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCep->setEnmValorTipo(NUMERICO);
	_pObjNodeCep->setIntOcorrenciaMax(1);
	_pObjNodeCep->setIntOcorrenciaMin(1);
	_pObjNodeCep->setIntTamanhoMax(8);
	_pObjNodeCep->setIntTamanhoMin(8);
	_pObjNodeCep->setStrIdentificador("C13");
	_pObjNodeCep->setStrNome("CEP");

	return _pObjNodeCep;
}

Node* EmitNode::getPObjNodeCmun()
{
	if (_pObjNodeCmun != nullptr)
	{
		return _pObjNodeCmun;
	}

	_pObjNodeCmun = new Node(this->getPObjNodeEnderemit());

	_pObjNodeCmun->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCmun->setEnmValorTipo(NUMERICO);
	_pObjNodeCmun->setIntOcorrenciaMax(1);
	_pObjNodeCmun->setIntOcorrenciaMin(1);
	_pObjNodeCmun->setIntTamanhoMax(7);
	_pObjNodeCmun->setIntTamanhoMin(7);
	_pObjNodeCmun->setStrIdentificador("C10");
	_pObjNodeCmun->setStrNome("cMun");

	return _pObjNodeCmun;
}

Node* EmitNode::getPObjNodeCnae()
{
	if (_pObjNodeCnae != nullptr)
	{
		return _pObjNodeCnae;
	}

	_pObjNodeCnae = new Node(this->getPObjNodeX());

	_pObjNodeCnae->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCnae->setEnmValorTipo(NUMERICO);
	_pObjNodeCnae->setIntOcorrenciaMax(1);
	_pObjNodeCnae->setIntOcorrenciaMin(0);
	_pObjNodeCnae->setIntTamanhoMax(7);
	_pObjNodeCnae->setIntTamanhoMin(7);
	_pObjNodeCnae->setStrIdentificador("C20");
	_pObjNodeCnae->setStrNome("CNAE");

	return _pObjNodeCnae;
}

Node* EmitNode::getPObjNodeCnpj()
{
	if (_pObjNodeCnpj != nullptr)
	{
		return _pObjNodeCnpj;
	}

	_pObjNodeCnpj = new Node(this);

	_pObjNodeCnpj->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCnpj->setEnmValorTipo(NUMERICO);
	_pObjNodeCnpj->setIntOcorrenciaMax(1);
	_pObjNodeCnpj->setIntOcorrenciaMin(1);
	_pObjNodeCnpj->setIntTamanhoMax(14);
	_pObjNodeCnpj->setIntTamanhoMin(14);
	_pObjNodeCnpj->setStrIdentificador("C02");
	_pObjNodeCnpj->setStrNome("CNPJ");

	return _pObjNodeCnpj;
}

Node* EmitNode::getPObjNodeCpais()
{
	if (_pObjNodeCpais != nullptr)
	{
		return _pObjNodeCpais;
	}

	_pObjNodeCpais = new Node(this->getPObjNodeEnderemit());

	_pObjNodeCpais->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCpais->setEnmValorTipo(NUMERICO);
	_pObjNodeCpais->setIntOcorrenciaMax(1);
	_pObjNodeCpais->setIntOcorrenciaMin(0);
	_pObjNodeCpais->setIntTamanhoMax(4);
	_pObjNodeCpais->setIntTamanhoMin(4);
	_pObjNodeCpais->setStrIdentificador("C14");
	_pObjNodeCpais->setStrNome("cPais");

	return _pObjNodeCpais;
}

Node* EmitNode::getPObjNodeCpf()
{
	if (_pObjNodeCpf != nullptr)
	{
		return _pObjNodeCpf;
	}

	_pObjNodeCpf = new Node(this);

	_pObjNodeCpf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCpf->setEnmValorTipo(NUMERICO);
	_pObjNodeCpf->setIntOcorrenciaMax(1);
	_pObjNodeCpf->setIntOcorrenciaMin(1);
	_pObjNodeCpf->setIntTamanhoMax(11);
	_pObjNodeCpf->setIntTamanhoMin(11);
	_pObjNodeCpf->setStrIdentificador("C02a");
	_pObjNodeCpf->setStrNome("CPF");

	return _pObjNodeCpf;
}

Node* EmitNode::getPObjNodeCrt()
{
	if (_pObjNodeCrt != nullptr)
	{
		return _pObjNodeCrt;
	}

	_pObjNodeCrt = new Node(this);

	_pObjNodeCrt->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCrt->setEnmValorTipo(NUMERICO);
	_pObjNodeCrt->setIntOcorrenciaMax(1);
	_pObjNodeCrt->setIntOcorrenciaMin(1);
	_pObjNodeCrt->setIntTamanhoMax(1);
	_pObjNodeCrt->setIntTamanhoMin(1);
	_pObjNodeCrt->setStrIdentificador("C21");
	_pObjNodeCrt->setStrNome("CRT");

	return _pObjNodeCrt;
}

Node* EmitNode::getPObjNodeEnderemit()
{
	if (_pObjNodeEnderemit != nullptr)
	{
		return _pObjNodeEnderemit;
	}

	_pObjNodeEnderemit = new Node(this);

	_pObjNodeEnderemit->setEnmElementoTipo(GRUPO);
	_pObjNodeEnderemit->setEnmValorTipo(NENHUM);
	_pObjNodeEnderemit->setIntOcorrenciaMax(1);
	_pObjNodeEnderemit->setIntOcorrenciaMin(1);
	_pObjNodeEnderemit->setIntTamanhoMax(-1);
	_pObjNodeEnderemit->setIntTamanhoMin(-1);
	_pObjNodeEnderemit->setStrIdentificador("C05");
	_pObjNodeEnderemit->setStrNome("enderEmit");

	return _pObjNodeEnderemit;
}

Node* EmitNode::getPObjNodeFone()
{
	if (_pObjNodeFone != nullptr)
	{
		return _pObjNodeFone;
	}

	_pObjNodeFone = new Node(this->getPObjNodeEnderemit());

	_pObjNodeFone->setEnmElementoTipo(ELEMENTO);
	_pObjNodeFone->setEnmValorTipo(NUMERICO);
	_pObjNodeFone->setIntOcorrenciaMax(1);
	_pObjNodeFone->setIntOcorrenciaMin(0);
	_pObjNodeFone->setIntTamanhoMax(14);
	_pObjNodeFone->setIntTamanhoMin(6);
	_pObjNodeFone->setStrIdentificador("C16");
	_pObjNodeFone->setStrNome("fone");

	return _pObjNodeFone;
}

Node* EmitNode::getPObjNodeIe()
{
	if (_pObjNodeIe != nullptr)
	{
		return _pObjNodeIe;
	}

	_pObjNodeIe = new Node(this);

	_pObjNodeIe->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIe->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeIe->setIntOcorrenciaMax(1);
	_pObjNodeIe->setIntOcorrenciaMin(1);
	_pObjNodeIe->setIntTamanhoMax(14);
	_pObjNodeIe->setIntTamanhoMin(2);
	_pObjNodeIe->setStrIdentificador("C17");
	_pObjNodeIe->setStrNome("IE");

	return _pObjNodeIe;
}

Node* EmitNode::getPObjNodeIest()
{
	if (_pObjNodeIest != nullptr)
	{
		return _pObjNodeIest;
	}

	_pObjNodeIest = new Node(this);

	_pObjNodeIest->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIest->setEnmValorTipo(NUMERICO);
	_pObjNodeIest->setIntOcorrenciaMax(1);
	_pObjNodeIest->setIntOcorrenciaMin(0);
	_pObjNodeIest->setIntTamanhoMax(14);
	_pObjNodeIest->setIntTamanhoMin(2);
	_pObjNodeIest->setStrIdentificador("C18");
	_pObjNodeIest->setStrNome("IEST");

	return _pObjNodeIest;
}

Node* EmitNode::getPObjNodeIm()
{
	if (_pObjNodeIm != nullptr)
	{
		return _pObjNodeIm;
	}

	_pObjNodeIm = new Node(this->getPObjNodeX());

	_pObjNodeIm->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIm->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeIm->setIntOcorrenciaMax(1);
	_pObjNodeIm->setIntOcorrenciaMin(1);
	_pObjNodeIm->setIntTamanhoMax(15);
	_pObjNodeIm->setIntTamanhoMin(1);
	_pObjNodeIm->setStrIdentificador("C19");
	_pObjNodeIm->setStrNome("IM");

	return _pObjNodeIm;
}

Node* EmitNode::getPObjNodeNro()
{
	if (_pObjNodeNro != nullptr)
	{
		return _pObjNodeNro;
	}

	_pObjNodeNro = new Node(this->getPObjNodeEnderemit());

	_pObjNodeNro->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNro->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeNro->setIntOcorrenciaMax(1);
	_pObjNodeNro->setIntOcorrenciaMin(1);
	_pObjNodeNro->setIntTamanhoMax(60);
	_pObjNodeNro->setIntTamanhoMin(1);
	_pObjNodeNro->setStrIdentificador("C07");
	_pObjNodeNro->setStrNome("nro");

	return _pObjNodeNro;
}

Node* EmitNode::getPObjNodeUf()
{
	if (_pObjNodeUf != nullptr)
	{
		return _pObjNodeUf;
	}

	_pObjNodeUf = new Node(this->getPObjNodeEnderemit());

	_pObjNodeUf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeUf->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeUf->setIntOcorrenciaMax(1);
	_pObjNodeUf->setIntOcorrenciaMin(1);
	_pObjNodeUf->setIntTamanhoMax(2);
	_pObjNodeUf->setIntTamanhoMin(2);
	_pObjNodeUf->setStrIdentificador("C12");
	_pObjNodeUf->setStrNome("UF");

	return _pObjNodeUf;
}

Node* EmitNode::getPObjNodeX()
{
	if (_pObjNodeX != nullptr)
	{
		return _pObjNodeX;
	}

	_pObjNodeX = new Node(this);

	_pObjNodeX->setEnmElementoTipo(GRUPO);
	_pObjNodeX->setEnmValorTipo(NENHUM);
	_pObjNodeX->setIntOcorrenciaMax(1);
	_pObjNodeX->setIntOcorrenciaMin(0);
	_pObjNodeX->setIntTamanhoMax(-1);
	_pObjNodeX->setIntTamanhoMin(-1);
	_pObjNodeX->setStrIdentificador("C18.1");
	_pObjNodeX->setStrNome("-x-");

	return _pObjNodeX;
}

Node* EmitNode::getPObjNodeXbairro()
{
	if (_pObjNodeXbairro != nullptr)
	{
		return _pObjNodeXbairro;
	}

	_pObjNodeXbairro = new Node(this->getPObjNodeEnderemit());

	_pObjNodeXbairro->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXbairro->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXbairro->setIntOcorrenciaMax(1);
	_pObjNodeXbairro->setIntOcorrenciaMin(1);
	_pObjNodeXbairro->setIntTamanhoMax(60);
	_pObjNodeXbairro->setIntTamanhoMin(2);
	_pObjNodeXbairro->setStrIdentificador("C09");
	_pObjNodeXbairro->setStrNome("xBairro");

	return _pObjNodeXbairro;
}

Node* EmitNode::getPObjNodeXcpl()
{
	if (_pObjNodeXcpl != nullptr)
	{
		return _pObjNodeXcpl;
	}

	_pObjNodeXcpl = new Node(this->getPObjNodeEnderemit());

	_pObjNodeXcpl->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXcpl->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXcpl->setIntOcorrenciaMax(1);
	_pObjNodeXcpl->setIntOcorrenciaMin(0);
	_pObjNodeXcpl->setIntTamanhoMax(60);
	_pObjNodeXcpl->setIntTamanhoMin(1);
	_pObjNodeXcpl->setStrIdentificador("C08");
	_pObjNodeXcpl->setStrNome("xCpl");

	return _pObjNodeXcpl;
}

Node* EmitNode::getPObjNodeXfant()
{
	if (_pObjNodeXfant != nullptr)
	{
		return _pObjNodeXfant;
	}

	_pObjNodeXfant = new Node(this);

	_pObjNodeXfant->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXfant->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXfant->setIntOcorrenciaMax(1);
	_pObjNodeXfant->setIntOcorrenciaMin(0);
	_pObjNodeXfant->setIntTamanhoMax(60);
	_pObjNodeXfant->setIntTamanhoMin(1);
	_pObjNodeXfant->setStrIdentificador("C04");
	_pObjNodeXfant->setStrNome("xFant");

	return _pObjNodeXfant;
}

Node* EmitNode::getPObjNodeXlgr()
{
	if (_pObjNodeXlgr != nullptr)
	{
		return _pObjNodeXlgr;
	}

	_pObjNodeXlgr = new Node(this->getPObjNodeEnderemit());

	_pObjNodeXlgr->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXlgr->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXlgr->setIntOcorrenciaMax(1);
	_pObjNodeXlgr->setIntOcorrenciaMin(1);
	_pObjNodeXlgr->setIntTamanhoMax(60);
	_pObjNodeXlgr->setIntTamanhoMin(2);
	_pObjNodeXlgr->setStrIdentificador("C06");
	_pObjNodeXlgr->setStrNome("xLgr");

	return _pObjNodeXlgr;
}

Node* EmitNode::getPObjNodeXmun()
{
	if (_pObjNodeXmun != nullptr)
	{
		return _pObjNodeXmun;
	}

	_pObjNodeXmun = new Node(this->getPObjNodeEnderemit());

	_pObjNodeXmun->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXmun->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXmun->setIntOcorrenciaMax(1);
	_pObjNodeXmun->setIntOcorrenciaMin(1);
	_pObjNodeXmun->setIntTamanhoMax(60);
	_pObjNodeXmun->setIntTamanhoMin(2);
	_pObjNodeXmun->setStrIdentificador("C11");
	_pObjNodeXmun->setStrNome("xMun");

	return _pObjNodeXmun;
}

Node* EmitNode::getPObjNodeXnome()
{
	if (_pObjNodeXnome != nullptr)
	{
		return _pObjNodeXnome;
	}

	_pObjNodeXnome = new Node(this);

	_pObjNodeXnome->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXnome->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXnome->setIntOcorrenciaMax(1);
	_pObjNodeXnome->setIntOcorrenciaMin(1);
	_pObjNodeXnome->setIntTamanhoMax(60);
	_pObjNodeXnome->setIntTamanhoMin(2);
	_pObjNodeXnome->setStrIdentificador("C03");
	_pObjNodeXnome->setStrNome("xNome");

	return _pObjNodeXnome;
}

Node* EmitNode::getPObjNodeXpais()
{
	if (_pObjNodeXpais != nullptr)
	{
		return _pObjNodeXpais;
	}

	_pObjNodeXpais = new Node(this->getPObjNodeEnderemit());

	_pObjNodeXpais->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXpais->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXpais->setIntOcorrenciaMax(1);
	_pObjNodeXpais->setIntOcorrenciaMin(0);
	_pObjNodeXpais->setIntTamanhoMax(60);
	_pObjNodeXpais->setIntTamanhoMin(1);
	_pObjNodeXpais->setStrIdentificador("C15");
	_pObjNodeXpais->setStrNome("xPais");

	return _pObjNodeXpais;
}