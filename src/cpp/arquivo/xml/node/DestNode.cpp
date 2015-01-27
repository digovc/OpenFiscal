#include "DestNode.h"

using namespace OpenFiscal_arquivo_xml_node;

DestNode::DestNode(Node* pNdePai) :Node(pNdePai)
{
	this->setEnmElementoTipo(GRUPO);
	this->setEnmValorTipo(NENHUM);
	this->setIntOcorrenciaMax(1);
	this->setIntOcorrenciaMin(0);
	this->setIntTamanhoMax(-1);
	this->setIntTamanhoMin(-1);
	this->setStrIdentificador("E01");
	this->setStrNome("dest");
}

DestNode::~DestNode()
{
}

Node* DestNode::getPNdeCep()
{
	if (_pNdeCep != nullptr)
	{
		return _pNdeCep;
	}

	_pNdeCep = new Node(this->getPNdeEnderdest());

	_pNdeCep->setEnmElementoTipo(ELEMENTO);
	_pNdeCep->setEnmValorTipo(NUMERICO);
	_pNdeCep->setIntOcorrenciaMax(1);
	_pNdeCep->setIntOcorrenciaMin(0);
	_pNdeCep->setIntTamanhoMax(8);
	_pNdeCep->setIntTamanhoMin(8);
	_pNdeCep->setStrIdentificador("E13");
	_pNdeCep->setStrNome("CEP");

	return _pNdeCep;
}

Node* DestNode::getPNdeCmun()
{
	if (_pNdeCmun != nullptr)
	{
		return _pNdeCmun;
	}

	_pNdeCmun = new Node(this->getPNdeEnderdest());

	_pNdeCmun->setEnmElementoTipo(ELEMENTO);
	_pNdeCmun->setEnmValorTipo(NUMERICO);
	_pNdeCmun->setIntOcorrenciaMax(1);
	_pNdeCmun->setIntOcorrenciaMin(1);
	_pNdeCmun->setIntTamanhoMax(7);
	_pNdeCmun->setIntTamanhoMin(7);
	_pNdeCmun->setStrIdentificador("E10");
	_pNdeCmun->setStrNome("cMun");

	return _pNdeCmun;
}

Node* DestNode::getPNdeCnpj()
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
	_pNdeCnpj->setStrIdentificador("E02");
	_pNdeCnpj->setStrNome("CNPJ");

	return _pNdeCnpj;
}

Node* DestNode::getPNdeCpais()
{
	if (_pNdeCpais != nullptr)
	{
		return _pNdeCpais;
	}

	_pNdeCpais = new Node(this->getPNdeEnderdest());

	_pNdeCpais->setEnmElementoTipo(ELEMENTO);
	_pNdeCpais->setEnmValorTipo(NUMERICO);
	_pNdeCpais->setIntOcorrenciaMax(1);
	_pNdeCpais->setIntOcorrenciaMin(0);
	_pNdeCpais->setIntTamanhoMax(4);
	_pNdeCpais->setIntTamanhoMin(2);
	_pNdeCpais->setStrIdentificador("E14");
	_pNdeCpais->setStrNome("cPais");

	return _pNdeCpais;
}

Node* DestNode::getPNdeCpf()
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
	_pNdeCpf->setStrIdentificador("E03");
	_pNdeCpf->setStrNome("CPF");

	return _pNdeCpf;
}

Node* DestNode::getPNdeEmail()
{
	if (_pNdeEmail != nullptr)
	{
		return _pNdeEmail;
	}

	_pNdeEmail = new Node(this);

	_pNdeEmail->setEnmElementoTipo(ELEMENTO);
	_pNdeEmail->setEnmValorTipo(ALFANUMERICO);
	_pNdeEmail->setIntOcorrenciaMax(1);
	_pNdeEmail->setIntOcorrenciaMin(0);
	_pNdeEmail->setIntTamanhoMax(60);
	_pNdeEmail->setIntTamanhoMin(1);
	_pNdeEmail->setStrIdentificador("E19");
	_pNdeEmail->setStrNome("email");

	return _pNdeEmail;
}

Node* DestNode::getPNdeEnderdest()
{
	if (_pNdeEnderdest != nullptr)
	{
		return _pNdeEnderdest;
	}

	_pNdeEnderdest = new Node(this);

	_pNdeEnderdest->setEnmElementoTipo(GRUPO);
	_pNdeEnderdest->setEnmValorTipo(NENHUM);
	_pNdeEnderdest->setIntOcorrenciaMax(1);
	_pNdeEnderdest->setIntOcorrenciaMin(0);
	_pNdeEnderdest->setIntTamanhoMax(-1);
	_pNdeEnderdest->setIntTamanhoMin(-1);
	_pNdeEnderdest->setStrIdentificador("E05");
	_pNdeEnderdest->setStrNome("enderDest");

	return _pNdeEnderdest;
}

Node* DestNode::getPNdeFone()
{
	if (_pNdeFone != nullptr)
	{
		return _pNdeFone;
	}

	_pNdeFone = new Node(this->getPNdeEnderdest());

	_pNdeFone->setEnmElementoTipo(ELEMENTO);
	_pNdeFone->setEnmValorTipo(NUMERICO);
	_pNdeFone->setIntOcorrenciaMax(1);
	_pNdeFone->setIntOcorrenciaMin(0);
	_pNdeFone->setIntTamanhoMax(14);
	_pNdeFone->setIntTamanhoMin(6);
	_pNdeFone->setStrIdentificador("E16");
	_pNdeFone->setStrNome("fone");

	return _pNdeFone;
}

Node* DestNode::getPNdeIdestrangeiro()
{
	if (_pNdeIdestrangeiro != nullptr)
	{
		return _pNdeIdestrangeiro;
	}

	_pNdeIdestrangeiro = new Node(this);

	_pNdeIdestrangeiro->setEnmElementoTipo(ELEMENTO);
	_pNdeIdestrangeiro->setEnmValorTipo(ALFANUMERICO);
	_pNdeIdestrangeiro->setIntOcorrenciaMax(1);
	_pNdeIdestrangeiro->setIntOcorrenciaMin(1);
	_pNdeIdestrangeiro->setIntTamanhoMax(20);
	_pNdeIdestrangeiro->setIntTamanhoMin(0);
	_pNdeIdestrangeiro->setStrIdentificador("E03a");
	_pNdeIdestrangeiro->setStrNome("idEstrangeiro");

	return _pNdeIdestrangeiro;
}

Node* DestNode::getPNdeIe()
{
	if (_pNdeIe != nullptr)
	{
		return _pNdeIe;
	}

	_pNdeIe = new Node(this);

	_pNdeIe->setEnmElementoTipo(ELEMENTO);
	_pNdeIe->setEnmValorTipo(NUMERICO);
	_pNdeIe->setIntOcorrenciaMax(1);
	_pNdeIe->setIntOcorrenciaMin(0);
	_pNdeIe->setIntTamanhoMax(14);
	_pNdeIe->setIntTamanhoMin(2);
	_pNdeIe->setStrIdentificador("E17");
	_pNdeIe->setStrNome("IE");

	return _pNdeIe;
}

Node* DestNode::getPNdeIm()
{
	if (_pNdeIm != nullptr)
	{
		return _pNdeIm;
	}

	_pNdeIm = new Node(this);

	_pNdeIm->setEnmElementoTipo(ELEMENTO);
	_pNdeIm->setEnmValorTipo(ALFANUMERICO);
	_pNdeIm->setIntOcorrenciaMax(1);
	_pNdeIm->setIntOcorrenciaMin(0);
	_pNdeIm->setIntTamanhoMax(15);
	_pNdeIm->setIntTamanhoMin(1);
	_pNdeIm->setStrIdentificador("E18a");
	_pNdeIm->setStrNome("IM");

	return _pNdeIm;
}

Node* DestNode::getPNdeIndiedest()
{
	if (_pNdeIndiedest != nullptr)
	{
		return _pNdeIndiedest;
	}

	_pNdeIndiedest = new Node(this);

	_pNdeIndiedest->setEnmElementoTipo(ELEMENTO);
	_pNdeIndiedest->setEnmValorTipo(NUMERICO);
	_pNdeIndiedest->setIntOcorrenciaMax(1);
	_pNdeIndiedest->setIntOcorrenciaMin(1);
	_pNdeIndiedest->setIntTamanhoMax(1);
	_pNdeIndiedest->setIntTamanhoMin(1);
	_pNdeIndiedest->setStrIdentificador("E16a");
	_pNdeIndiedest->setStrNome("indIEDest");

	return _pNdeIndiedest;
}

Node* DestNode::getPNdeIsuf()
{
	if (_pNdeIsuf != nullptr)
	{
		return _pNdeIsuf;
	}

	_pNdeIsuf = new Node(this);

	_pNdeIsuf->setEnmElementoTipo(ELEMENTO);
	_pNdeIsuf->setEnmValorTipo(NUMERICO);
	_pNdeIsuf->setIntOcorrenciaMax(1);
	_pNdeIsuf->setIntOcorrenciaMin(0);
	_pNdeIsuf->setIntTamanhoMax(9);
	_pNdeIsuf->setIntTamanhoMin(8);
	_pNdeIsuf->setStrIdentificador("E18");
	_pNdeIsuf->setStrNome("ISUF");

	return _pNdeIsuf;
}

Node* DestNode::getPNdeNro()
{
	if (_pNdeNro != nullptr)
	{
		return _pNdeNro;
	}

	_pNdeNro = new Node(this->getPNdeEnderdest());

	_pNdeNro->setEnmElementoTipo(ELEMENTO);
	_pNdeNro->setEnmValorTipo(ALFANUMERICO);
	_pNdeNro->setIntOcorrenciaMax(1);
	_pNdeNro->setIntOcorrenciaMin(1);
	_pNdeNro->setIntTamanhoMax(60);
	_pNdeNro->setIntTamanhoMin(1);
	_pNdeNro->setStrIdentificador("E07");
	_pNdeNro->setStrNome("nro");

	return _pNdeNro;
}

Node* DestNode::getPNdeUf()
{
	if (_pNdeUf != nullptr)
	{
		return _pNdeUf;
	}

	_pNdeUf = new Node(this->getPNdeEnderdest());

	_pNdeUf->setEnmElementoTipo(ELEMENTO);
	_pNdeUf->setEnmValorTipo(ALFANUMERICO);
	_pNdeUf->setIntOcorrenciaMax(1);
	_pNdeUf->setIntOcorrenciaMin(1);
	_pNdeUf->setIntTamanhoMax(2);
	_pNdeUf->setIntTamanhoMin(2);
	_pNdeUf->setStrIdentificador("E12");
	_pNdeUf->setStrNome("UF");

	return _pNdeUf;
}

Node* DestNode::getPNdeXbairro()
{
	if (_pNdeXbairro != nullptr)
	{
		return _pNdeXbairro;
	}

	_pNdeXbairro = new Node(this->getPNdeEnderdest());

	_pNdeXbairro->setEnmElementoTipo(ELEMENTO);
	_pNdeXbairro->setEnmValorTipo(ALFANUMERICO);
	_pNdeXbairro->setIntOcorrenciaMax(1);
	_pNdeXbairro->setIntOcorrenciaMin(1);
	_pNdeXbairro->setIntTamanhoMax(60);
	_pNdeXbairro->setIntTamanhoMin(2);
	_pNdeXbairro->setStrIdentificador("E09");
	_pNdeXbairro->setStrNome("xBairro");

	return _pNdeXbairro;
}

Node* DestNode::getPNdeXcpl()
{
	if (_pNdeXcpl != nullptr)
	{
		return _pNdeXcpl;
	}

	_pNdeXcpl = new Node(this->getPNdeEnderdest());

	_pNdeXcpl->setEnmElementoTipo(ELEMENTO);
	_pNdeXcpl->setEnmValorTipo(ALFANUMERICO);
	_pNdeXcpl->setIntOcorrenciaMax(1);
	_pNdeXcpl->setIntOcorrenciaMin(0);
	_pNdeXcpl->setIntTamanhoMax(60);
	_pNdeXcpl->setIntTamanhoMin(1);
	_pNdeXcpl->setStrIdentificador("E08");
	_pNdeXcpl->setStrNome("xCpl");

	return _pNdeXcpl;
}

Node* DestNode::getPNdeXlgr()
{
	if (_pNdeXlgr != nullptr)
	{
		return _pNdeXlgr;
	}

	_pNdeXlgr = new Node(this->getPNdeEnderdest());

	_pNdeXlgr->setEnmElementoTipo(ELEMENTO);
	_pNdeXlgr->setEnmValorTipo(ALFANUMERICO);
	_pNdeXlgr->setIntOcorrenciaMax(1);
	_pNdeXlgr->setIntOcorrenciaMin(1);
	_pNdeXlgr->setIntTamanhoMax(60);
	_pNdeXlgr->setIntTamanhoMin(2);
	_pNdeXlgr->setStrIdentificador("E06");
	_pNdeXlgr->setStrNome("xLgr");

	return _pNdeXlgr;
}

Node* DestNode::getPNdeXmun()
{
	if (_pNdeXmun != nullptr)
	{
		return _pNdeXmun;
	}

	_pNdeXmun = new Node(this->getPNdeEnderdest());

	_pNdeXmun->setEnmElementoTipo(ELEMENTO);
	_pNdeXmun->setEnmValorTipo(ALFANUMERICO);
	_pNdeXmun->setIntOcorrenciaMax(1);
	_pNdeXmun->setIntOcorrenciaMin(1);
	_pNdeXmun->setIntTamanhoMax(60);
	_pNdeXmun->setIntTamanhoMin(2);
	_pNdeXmun->setStrIdentificador("E11");
	_pNdeXmun->setStrNome("xMun");

	return _pNdeXmun;
}

Node* DestNode::getPNdeXnome()
{
	if (_pNdeXnome != nullptr)
	{
		return _pNdeXnome;
	}

	_pNdeXnome = new Node(this);

	_pNdeXnome->setEnmElementoTipo(ELEMENTO);
	_pNdeXnome->setEnmValorTipo(ALFANUMERICO);
	_pNdeXnome->setIntOcorrenciaMax(1);
	_pNdeXnome->setIntOcorrenciaMin(0);
	_pNdeXnome->setIntTamanhoMax(60);
	_pNdeXnome->setIntTamanhoMin(2);
	_pNdeXnome->setStrIdentificador("E04");
	_pNdeXnome->setStrNome("xNome");

	return _pNdeXnome;
}

Node* DestNode::getPNdeXpais()
{
	if (_pNdeXpais != nullptr)
	{
		return _pNdeXpais;
	}

	_pNdeXpais = new Node(this->getPNdeEnderdest());

	_pNdeXpais->setEnmElementoTipo(ELEMENTO);
	_pNdeXpais->setEnmValorTipo(ALFANUMERICO);
	_pNdeXpais->setIntOcorrenciaMax(1);
	_pNdeXpais->setIntOcorrenciaMin(0);
	_pNdeXpais->setIntTamanhoMax(60);
	_pNdeXpais->setIntTamanhoMin(2);
	_pNdeXpais->setStrIdentificador("E15");
	_pNdeXpais->setStrNome("xPais");

	return _pNdeXpais;
}