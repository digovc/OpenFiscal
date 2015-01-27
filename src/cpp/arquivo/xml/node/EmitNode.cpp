#include "EmitNode.h"

using namespace OpenFiscal_arquivo_xml_node;

EmitNode::EmitNode(Node* pNdePai) :Node(pNdePai)
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

Node* EmitNode::getPNdeCep()
{
	if (_pNdeCep != nullptr)
	{
		return _pNdeCep;
	}

	_pNdeCep = new Node(this->getPNdeEnderemit());

	_pNdeCep->setEnmElementoTipo(ELEMENTO);
	_pNdeCep->setEnmValorTipo(NUMERICO);
	_pNdeCep->setIntOcorrenciaMax(1);
	_pNdeCep->setIntOcorrenciaMin(1);
	_pNdeCep->setIntTamanhoMax(8);
	_pNdeCep->setIntTamanhoMin(8);
	_pNdeCep->setStrIdentificador("C13");
	_pNdeCep->setStrNome("CEP");

	return _pNdeCep;
}

Node* EmitNode::getPNdeCmun()
{
	if (_pNdeCmun != nullptr)
	{
		return _pNdeCmun;
	}

	_pNdeCmun = new Node(this->getPNdeEnderemit());

	_pNdeCmun->setEnmElementoTipo(ELEMENTO);
	_pNdeCmun->setEnmValorTipo(NUMERICO);
	_pNdeCmun->setIntOcorrenciaMax(1);
	_pNdeCmun->setIntOcorrenciaMin(1);
	_pNdeCmun->setIntTamanhoMax(7);
	_pNdeCmun->setIntTamanhoMin(7);
	_pNdeCmun->setStrIdentificador("C10");
	_pNdeCmun->setStrNome("cMun");

	return _pNdeCmun;
}

Node* EmitNode::getPNdeCnae()
{
	if (_pNdeCnae != nullptr)
	{
		return _pNdeCnae;
	}

	_pNdeCnae = new Node(this->getPNdeX());

	_pNdeCnae->setEnmElementoTipo(ELEMENTO);
	_pNdeCnae->setEnmValorTipo(NUMERICO);
	_pNdeCnae->setIntOcorrenciaMax(1);
	_pNdeCnae->setIntOcorrenciaMin(0);
	_pNdeCnae->setIntTamanhoMax(7);
	_pNdeCnae->setIntTamanhoMin(7);
	_pNdeCnae->setStrIdentificador("C20");
	_pNdeCnae->setStrNome("CNAE");

	return _pNdeCnae;
}

Node* EmitNode::getPNdeCnpj()
{
	if (_pNdeCnpj != nullptr)
	{
		return _pNdeCnpj;
	}

	_pNdeCnpj = new Node(this);

	_pNdeCnpj->setEnmElementoTipo(ELEMENTO);
	_pNdeCnpj->setEnmValorTipo(NUMERICO);
	_pNdeCnpj->setIntOcorrenciaMax(1);
	_pNdeCnpj->setIntOcorrenciaMin(1);
	_pNdeCnpj->setIntTamanhoMax(14);
	_pNdeCnpj->setIntTamanhoMin(14);
	_pNdeCnpj->setStrIdentificador("C02");
	_pNdeCnpj->setStrNome("CNPJ");

	return _pNdeCnpj;
}

Node* EmitNode::getPNdeCpais()
{
	if (_pNdeCpais != nullptr)
	{
		return _pNdeCpais;
	}

	_pNdeCpais = new Node(this->getPNdeEnderemit());

	_pNdeCpais->setEnmElementoTipo(ELEMENTO);
	_pNdeCpais->setEnmValorTipo(NUMERICO);
	_pNdeCpais->setIntOcorrenciaMax(1);
	_pNdeCpais->setIntOcorrenciaMin(0);
	_pNdeCpais->setIntTamanhoMax(4);
	_pNdeCpais->setIntTamanhoMin(4);
	_pNdeCpais->setStrIdentificador("C14");
	_pNdeCpais->setStrNome("cPais");

	return _pNdeCpais;
}

Node* EmitNode::getPNdeCpf()
{
	if (_pNdeCpf != nullptr)
	{
		return _pNdeCpf;
	}

	_pNdeCpf = new Node(this);

	_pNdeCpf->setEnmElementoTipo(ELEMENTO);
	_pNdeCpf->setEnmValorTipo(NUMERICO);
	_pNdeCpf->setIntOcorrenciaMax(1);
	_pNdeCpf->setIntOcorrenciaMin(1);
	_pNdeCpf->setIntTamanhoMax(11);
	_pNdeCpf->setIntTamanhoMin(11);
	_pNdeCpf->setStrIdentificador("C02a");
	_pNdeCpf->setStrNome("CPF");

	return _pNdeCpf;
}

Node* EmitNode::getPNdeCrt()
{
	if (_pNdeCrt != nullptr)
	{
		return _pNdeCrt;
	}

	_pNdeCrt = new Node(this);

	_pNdeCrt->setEnmElementoTipo(ELEMENTO);
	_pNdeCrt->setEnmValorTipo(NUMERICO);
	_pNdeCrt->setIntOcorrenciaMax(1);
	_pNdeCrt->setIntOcorrenciaMin(1);
	_pNdeCrt->setIntTamanhoMax(1);
	_pNdeCrt->setIntTamanhoMin(1);
	_pNdeCrt->setStrIdentificador("C21");
	_pNdeCrt->setStrNome("CRT");

	return _pNdeCrt;
}

Node* EmitNode::getPNdeEnderemit()
{
	if (_pNdeEnderemit != nullptr)
	{
		return _pNdeEnderemit;
	}

	_pNdeEnderemit = new Node(this);

	_pNdeEnderemit->setEnmElementoTipo(GRUPO);
	_pNdeEnderemit->setEnmValorTipo(NENHUM);
	_pNdeEnderemit->setIntOcorrenciaMax(1);
	_pNdeEnderemit->setIntOcorrenciaMin(1);
	_pNdeEnderemit->setIntTamanhoMax(-1);
	_pNdeEnderemit->setIntTamanhoMin(-1);
	_pNdeEnderemit->setStrIdentificador("C05");
	_pNdeEnderemit->setStrNome("enderEmit");

	return _pNdeEnderemit;
}

Node* EmitNode::getPNdeFone()
{
	if (_pNdeFone != nullptr)
	{
		return _pNdeFone;
	}

	_pNdeFone = new Node(this->getPNdeEnderemit());

	_pNdeFone->setEnmElementoTipo(ELEMENTO);
	_pNdeFone->setEnmValorTipo(NUMERICO);
	_pNdeFone->setIntOcorrenciaMax(1);
	_pNdeFone->setIntOcorrenciaMin(0);
	_pNdeFone->setIntTamanhoMax(14);
	_pNdeFone->setIntTamanhoMin(6);
	_pNdeFone->setStrIdentificador("C16");
	_pNdeFone->setStrNome("fone");

	return _pNdeFone;
}

Node* EmitNode::getPNdeIe()
{
	if (_pNdeIe != nullptr)
	{
		return _pNdeIe;
	}

	_pNdeIe = new Node(this);

	_pNdeIe->setEnmElementoTipo(ELEMENTO);
	_pNdeIe->setEnmValorTipo(ALFANUMERICO);
	_pNdeIe->setIntOcorrenciaMax(1);
	_pNdeIe->setIntOcorrenciaMin(1);
	_pNdeIe->setIntTamanhoMax(14);
	_pNdeIe->setIntTamanhoMin(2);
	_pNdeIe->setStrIdentificador("C17");
	_pNdeIe->setStrNome("IE");

	return _pNdeIe;
}

Node* EmitNode::getPNdeIest()
{
	if (_pNdeIest != nullptr)
	{
		return _pNdeIest;
	}

	_pNdeIest = new Node(this);

	_pNdeIest->setEnmElementoTipo(ELEMENTO);
	_pNdeIest->setEnmValorTipo(NUMERICO);
	_pNdeIest->setIntOcorrenciaMax(1);
	_pNdeIest->setIntOcorrenciaMin(0);
	_pNdeIest->setIntTamanhoMax(14);
	_pNdeIest->setIntTamanhoMin(2);
	_pNdeIest->setStrIdentificador("C18");
	_pNdeIest->setStrNome("IEST");

	return _pNdeIest;
}

Node* EmitNode::getPNdeIm()
{
	if (_pNdeIm != nullptr)
	{
		return _pNdeIm;
	}

	_pNdeIm = new Node(this->getPNdeX());

	_pNdeIm->setEnmElementoTipo(ELEMENTO);
	_pNdeIm->setEnmValorTipo(ALFANUMERICO);
	_pNdeIm->setIntOcorrenciaMax(1);
	_pNdeIm->setIntOcorrenciaMin(1);
	_pNdeIm->setIntTamanhoMax(15);
	_pNdeIm->setIntTamanhoMin(1);
	_pNdeIm->setStrIdentificador("C19");
	_pNdeIm->setStrNome("IM");

	return _pNdeIm;
}

Node* EmitNode::getPNdeNro()
{
	if (_pNdeNro != nullptr)
	{
		return _pNdeNro;
	}

	_pNdeNro = new Node(this->getPNdeEnderemit());

	_pNdeNro->setEnmElementoTipo(ELEMENTO);
	_pNdeNro->setEnmValorTipo(ALFANUMERICO);
	_pNdeNro->setIntOcorrenciaMax(1);
	_pNdeNro->setIntOcorrenciaMin(1);
	_pNdeNro->setIntTamanhoMax(60);
	_pNdeNro->setIntTamanhoMin(1);
	_pNdeNro->setStrIdentificador("C07");
	_pNdeNro->setStrNome("nro");

	return _pNdeNro;
}

Node* EmitNode::getPNdeUf()
{
	if (_pNdeUf != nullptr)
	{
		return _pNdeUf;
	}

	_pNdeUf = new Node(this->getPNdeEnderemit());

	_pNdeUf->setEnmElementoTipo(ELEMENTO);
	_pNdeUf->setEnmValorTipo(ALFANUMERICO);
	_pNdeUf->setIntOcorrenciaMax(1);
	_pNdeUf->setIntOcorrenciaMin(1);
	_pNdeUf->setIntTamanhoMax(2);
	_pNdeUf->setIntTamanhoMin(2);
	_pNdeUf->setStrIdentificador("C12");
	_pNdeUf->setStrNome("UF");

	return _pNdeUf;
}

Node* EmitNode::getPNdeX()
{
	if (_pNdeX != nullptr)
	{
		return _pNdeX;
	}

	_pNdeX = new Node(this);

	_pNdeX->setEnmElementoTipo(GRUPO);
	_pNdeX->setEnmValorTipo(NENHUM);
	_pNdeX->setIntOcorrenciaMax(1);
	_pNdeX->setIntOcorrenciaMin(0);
	_pNdeX->setIntTamanhoMax(-1);
	_pNdeX->setIntTamanhoMin(-1);
	_pNdeX->setStrIdentificador("C18.1");
	_pNdeX->setStrNome("-x-");

	return _pNdeX;
}

Node* EmitNode::getPNdeXbairro()
{
	if (_pNdeXbairro != nullptr)
	{
		return _pNdeXbairro;
	}

	_pNdeXbairro = new Node(this->getPNdeEnderemit());

	_pNdeXbairro->setEnmElementoTipo(ELEMENTO);
	_pNdeXbairro->setEnmValorTipo(ALFANUMERICO);
	_pNdeXbairro->setIntOcorrenciaMax(1);
	_pNdeXbairro->setIntOcorrenciaMin(1);
	_pNdeXbairro->setIntTamanhoMax(60);
	_pNdeXbairro->setIntTamanhoMin(2);
	_pNdeXbairro->setStrIdentificador("C09");
	_pNdeXbairro->setStrNome("xBairro");

	return _pNdeXbairro;
}

Node* EmitNode::getPNdeXcpl()
{
	if (_pNdeXcpl != nullptr)
	{
		return _pNdeXcpl;
	}

	_pNdeXcpl = new Node(this->getPNdeEnderemit());

	_pNdeXcpl->setEnmElementoTipo(ELEMENTO);
	_pNdeXcpl->setEnmValorTipo(ALFANUMERICO);
	_pNdeXcpl->setIntOcorrenciaMax(1);
	_pNdeXcpl->setIntOcorrenciaMin(0);
	_pNdeXcpl->setIntTamanhoMax(60);
	_pNdeXcpl->setIntTamanhoMin(1);
	_pNdeXcpl->setStrIdentificador("C08");
	_pNdeXcpl->setStrNome("xCpl");

	return _pNdeXcpl;
}

Node* EmitNode::getPNdeXfant()
{
	if (_pNdeXfant != nullptr)
	{
		return _pNdeXfant;
	}

	_pNdeXfant = new Node(this);

	_pNdeXfant->setEnmElementoTipo(ELEMENTO);
	_pNdeXfant->setEnmValorTipo(ALFANUMERICO);
	_pNdeXfant->setIntOcorrenciaMax(1);
	_pNdeXfant->setIntOcorrenciaMin(0);
	_pNdeXfant->setIntTamanhoMax(60);
	_pNdeXfant->setIntTamanhoMin(1);
	_pNdeXfant->setStrIdentificador("C04");
	_pNdeXfant->setStrNome("xFant");

	return _pNdeXfant;
}

Node* EmitNode::getPNdeXlgr()
{
	if (_pNdeXlgr != nullptr)
	{
		return _pNdeXlgr;
	}

	_pNdeXlgr = new Node(this->getPNdeEnderemit());

	_pNdeXlgr->setEnmElementoTipo(ELEMENTO);
	_pNdeXlgr->setEnmValorTipo(ALFANUMERICO);
	_pNdeXlgr->setIntOcorrenciaMax(1);
	_pNdeXlgr->setIntOcorrenciaMin(1);
	_pNdeXlgr->setIntTamanhoMax(60);
	_pNdeXlgr->setIntTamanhoMin(2);
	_pNdeXlgr->setStrIdentificador("C06");
	_pNdeXlgr->setStrNome("xLgr");

	return _pNdeXlgr;
}

Node* EmitNode::getPNdeXmun()
{
	if (_pNdeXmun != nullptr)
	{
		return _pNdeXmun;
	}

	_pNdeXmun = new Node(this->getPNdeEnderemit());

	_pNdeXmun->setEnmElementoTipo(ELEMENTO);
	_pNdeXmun->setEnmValorTipo(ALFANUMERICO);
	_pNdeXmun->setIntOcorrenciaMax(1);
	_pNdeXmun->setIntOcorrenciaMin(1);
	_pNdeXmun->setIntTamanhoMax(60);
	_pNdeXmun->setIntTamanhoMin(2);
	_pNdeXmun->setStrIdentificador("C11");
	_pNdeXmun->setStrNome("xMun");

	return _pNdeXmun;
}

Node* EmitNode::getPNdeXnome()
{
	if (_pNdeXnome != nullptr)
	{
		return _pNdeXnome;
	}

	_pNdeXnome = new Node(this);

	_pNdeXnome->setEnmElementoTipo(ELEMENTO);
	_pNdeXnome->setEnmValorTipo(ALFANUMERICO);
	_pNdeXnome->setIntOcorrenciaMax(1);
	_pNdeXnome->setIntOcorrenciaMin(1);
	_pNdeXnome->setIntTamanhoMax(60);
	_pNdeXnome->setIntTamanhoMin(2);
	_pNdeXnome->setStrIdentificador("C03");
	_pNdeXnome->setStrNome("xNome");

	return _pNdeXnome;
}

Node* EmitNode::getPNdeXpais()
{
	if (_pNdeXpais != nullptr)
	{
		return _pNdeXpais;
	}

	_pNdeXpais = new Node(this->getPNdeEnderemit());

	_pNdeXpais->setEnmElementoTipo(ELEMENTO);
	_pNdeXpais->setEnmValorTipo(ALFANUMERICO);
	_pNdeXpais->setIntOcorrenciaMax(1);
	_pNdeXpais->setIntOcorrenciaMin(0);
	_pNdeXpais->setIntTamanhoMax(60);
	_pNdeXpais->setIntTamanhoMin(1);
	_pNdeXpais->setStrIdentificador("C15");
	_pNdeXpais->setStrNome("xPais");

	return _pNdeXpais;
}