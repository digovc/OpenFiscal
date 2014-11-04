#include "DestNode.h"

using namespace OpenFiscal_arquivo_xml_node;

DestNode::DestNode(Node* pObjNodePai) :Node(pObjNodePai)
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

Node* DestNode::getPObjNodeCep()
{
	if (_pObjNodeCep != nullptr)
	{
		return _pObjNodeCep;
	}

	_pObjNodeCep = new Node(this->getPObjNodeEnderdest());

	_pObjNodeCep->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCep->setEnmValorTipo(NUMERICO);
	_pObjNodeCep->setIntOcorrenciaMax(1);
	_pObjNodeCep->setIntOcorrenciaMin(0);
	_pObjNodeCep->setIntTamanhoMax(8);
	_pObjNodeCep->setIntTamanhoMin(8);
	_pObjNodeCep->setStrIdentificador("E13");
	_pObjNodeCep->setStrNome("CEP");

	return _pObjNodeCep;
}

Node* DestNode::getPObjNodeCmun()
{
	if (_pObjNodeCmun != nullptr)
	{
		return _pObjNodeCmun;
	}

	_pObjNodeCmun = new Node(this->getPObjNodeEnderdest());

	_pObjNodeCmun->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCmun->setEnmValorTipo(NUMERICO);
	_pObjNodeCmun->setIntOcorrenciaMax(1);
	_pObjNodeCmun->setIntOcorrenciaMin(1);
	_pObjNodeCmun->setIntTamanhoMax(7);
	_pObjNodeCmun->setIntTamanhoMin(7);
	_pObjNodeCmun->setStrIdentificador("E10");
	_pObjNodeCmun->setStrNome("cMun");

	return _pObjNodeCmun;
}

Node* DestNode::getPObjNodeCnpj()
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
	_pObjNodeCnpj->setStrIdentificador("E02");
	_pObjNodeCnpj->setStrNome("CNPJ");

	return _pObjNodeCnpj;
}

Node* DestNode::getPObjNodeCpais()
{
	if (_pObjNodeCpais != nullptr)
	{
		return _pObjNodeCpais;
	}

	_pObjNodeCpais = new Node(this->getPObjNodeEnderdest());

	_pObjNodeCpais->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCpais->setEnmValorTipo(NUMERICO);
	_pObjNodeCpais->setIntOcorrenciaMax(1);
	_pObjNodeCpais->setIntOcorrenciaMin(0);
	_pObjNodeCpais->setIntTamanhoMax(4);
	_pObjNodeCpais->setIntTamanhoMin(2);
	_pObjNodeCpais->setStrIdentificador("E14");
	_pObjNodeCpais->setStrNome("cPais");

	return _pObjNodeCpais;
}

Node* DestNode::getPObjNodeCpf()
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
	_pObjNodeCpf->setStrIdentificador("E03");
	_pObjNodeCpf->setStrNome("CPF");

	return _pObjNodeCpf;
}

Node* DestNode::getPObjNodeEmail()
{
	if (_pObjNodeEmail != nullptr)
	{
		return _pObjNodeEmail;
	}

	_pObjNodeEmail = new Node(this);

	_pObjNodeEmail->setEnmElementoTipo(ELEMENTO);
	_pObjNodeEmail->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeEmail->setIntOcorrenciaMax(1);
	_pObjNodeEmail->setIntOcorrenciaMin(0);
	_pObjNodeEmail->setIntTamanhoMax(60);
	_pObjNodeEmail->setIntTamanhoMin(1);
	_pObjNodeEmail->setStrIdentificador("E19");
	_pObjNodeEmail->setStrNome("email");

	return _pObjNodeEmail;
}

Node* DestNode::getPObjNodeEnderdest()
{
	if (_pObjNodeEnderdest != nullptr)
	{
		return _pObjNodeEnderdest;
	}

	_pObjNodeEnderdest = new Node(this);

	_pObjNodeEnderdest->setEnmElementoTipo(GRUPO);
	_pObjNodeEnderdest->setEnmValorTipo(NENHUM);
	_pObjNodeEnderdest->setIntOcorrenciaMax(1);
	_pObjNodeEnderdest->setIntOcorrenciaMin(0);
	_pObjNodeEnderdest->setIntTamanhoMax(-1);
	_pObjNodeEnderdest->setIntTamanhoMin(-1);
	_pObjNodeEnderdest->setStrIdentificador("E05");
	_pObjNodeEnderdest->setStrNome("enderDest");

	return _pObjNodeEnderdest;
}

Node* DestNode::getPObjNodeFone()
{
	if (_pObjNodeFone != nullptr)
	{
		return _pObjNodeFone;
	}

	_pObjNodeFone = new Node(this->getPObjNodeEnderdest());

	_pObjNodeFone->setEnmElementoTipo(ELEMENTO);
	_pObjNodeFone->setEnmValorTipo(NUMERICO);
	_pObjNodeFone->setIntOcorrenciaMax(1);
	_pObjNodeFone->setIntOcorrenciaMin(0);
	_pObjNodeFone->setIntTamanhoMax(14);
	_pObjNodeFone->setIntTamanhoMin(6);
	_pObjNodeFone->setStrIdentificador("E16");
	_pObjNodeFone->setStrNome("fone");

	return _pObjNodeFone;
}

Node* DestNode::getPObjNodeIdestrangeiro()
{
	if (_pObjNodeIdestrangeiro != nullptr)
	{
		return _pObjNodeIdestrangeiro;
	}

	_pObjNodeIdestrangeiro = new Node(this);

	_pObjNodeIdestrangeiro->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIdestrangeiro->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeIdestrangeiro->setIntOcorrenciaMax(1);
	_pObjNodeIdestrangeiro->setIntOcorrenciaMin(1);
	_pObjNodeIdestrangeiro->setIntTamanhoMax(20);
	_pObjNodeIdestrangeiro->setIntTamanhoMin(0);
	_pObjNodeIdestrangeiro->setStrIdentificador("E03a");
	_pObjNodeIdestrangeiro->setStrNome("idEstrangeiro");

	return _pObjNodeIdestrangeiro;
}

Node* DestNode::getPObjNodeIe()
{
	if (_pObjNodeIe != nullptr)
	{
		return _pObjNodeIe;
	}

	_pObjNodeIe = new Node(this);

	_pObjNodeIe->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIe->setEnmValorTipo(NUMERICO);
	_pObjNodeIe->setIntOcorrenciaMax(1);
	_pObjNodeIe->setIntOcorrenciaMin(0);
	_pObjNodeIe->setIntTamanhoMax(14);
	_pObjNodeIe->setIntTamanhoMin(2);
	_pObjNodeIe->setStrIdentificador("E17");
	_pObjNodeIe->setStrNome("IE");

	return _pObjNodeIe;
}

Node* DestNode::getPObjNodeIm()
{
	if (_pObjNodeIm != nullptr)
	{
		return _pObjNodeIm;
	}

	_pObjNodeIm = new Node(this);

	_pObjNodeIm->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIm->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeIm->setIntOcorrenciaMax(1);
	_pObjNodeIm->setIntOcorrenciaMin(0);
	_pObjNodeIm->setIntTamanhoMax(15);
	_pObjNodeIm->setIntTamanhoMin(1);
	_pObjNodeIm->setStrIdentificador("E18a");
	_pObjNodeIm->setStrNome("IM");

	return _pObjNodeIm;
}

Node* DestNode::getPObjNodeIndiedest()
{
	if (_pObjNodeIndiedest != nullptr)
	{
		return _pObjNodeIndiedest;
	}

	_pObjNodeIndiedest = new Node(this);

	_pObjNodeIndiedest->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIndiedest->setEnmValorTipo(NUMERICO);
	_pObjNodeIndiedest->setIntOcorrenciaMax(1);
	_pObjNodeIndiedest->setIntOcorrenciaMin(1);
	_pObjNodeIndiedest->setIntTamanhoMax(1);
	_pObjNodeIndiedest->setIntTamanhoMin(1);
	_pObjNodeIndiedest->setStrIdentificador("E16a");
	_pObjNodeIndiedest->setStrNome("indIEDest");

	return _pObjNodeIndiedest;
}

Node* DestNode::getPObjNodeIsuf()
{
	if (_pObjNodeIsuf != nullptr)
	{
		return _pObjNodeIsuf;
	}

	_pObjNodeIsuf = new Node(this);

	_pObjNodeIsuf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIsuf->setEnmValorTipo(NUMERICO);
	_pObjNodeIsuf->setIntOcorrenciaMax(1);
	_pObjNodeIsuf->setIntOcorrenciaMin(0);
	_pObjNodeIsuf->setIntTamanhoMax(9);
	_pObjNodeIsuf->setIntTamanhoMin(8);
	_pObjNodeIsuf->setStrIdentificador("E18");
	_pObjNodeIsuf->setStrNome("ISUF");

	return _pObjNodeIsuf;
}

Node* DestNode::getPObjNodeNro()
{
	if (_pObjNodeNro != nullptr)
	{
		return _pObjNodeNro;
	}

	_pObjNodeNro = new Node(this->getPObjNodeEnderdest());

	_pObjNodeNro->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNro->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeNro->setIntOcorrenciaMax(1);
	_pObjNodeNro->setIntOcorrenciaMin(1);
	_pObjNodeNro->setIntTamanhoMax(60);
	_pObjNodeNro->setIntTamanhoMin(1);
	_pObjNodeNro->setStrIdentificador("E07");
	_pObjNodeNro->setStrNome("nro");

	return _pObjNodeNro;
}

Node* DestNode::getPObjNodeUf()
{
	if (_pObjNodeUf != nullptr)
	{
		return _pObjNodeUf;
	}

	_pObjNodeUf = new Node(this->getPObjNodeEnderdest());

	_pObjNodeUf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeUf->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeUf->setIntOcorrenciaMax(1);
	_pObjNodeUf->setIntOcorrenciaMin(1);
	_pObjNodeUf->setIntTamanhoMax(2);
	_pObjNodeUf->setIntTamanhoMin(2);
	_pObjNodeUf->setStrIdentificador("E12");
	_pObjNodeUf->setStrNome("UF");

	return _pObjNodeUf;
}

Node* DestNode::getPObjNodeXbairro()
{
	if (_pObjNodeXbairro != nullptr)
	{
		return _pObjNodeXbairro;
	}

	_pObjNodeXbairro = new Node(this->getPObjNodeEnderdest());

	_pObjNodeXbairro->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXbairro->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXbairro->setIntOcorrenciaMax(1);
	_pObjNodeXbairro->setIntOcorrenciaMin(1);
	_pObjNodeXbairro->setIntTamanhoMax(60);
	_pObjNodeXbairro->setIntTamanhoMin(2);
	_pObjNodeXbairro->setStrIdentificador("E09");
	_pObjNodeXbairro->setStrNome("xBairro");

	return _pObjNodeXbairro;
}

Node* DestNode::getPObjNodeXcpl()
{
	if (_pObjNodeXcpl != nullptr)
	{
		return _pObjNodeXcpl;
	}

	_pObjNodeXcpl = new Node(this->getPObjNodeEnderdest());

	_pObjNodeXcpl->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXcpl->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXcpl->setIntOcorrenciaMax(1);
	_pObjNodeXcpl->setIntOcorrenciaMin(0);
	_pObjNodeXcpl->setIntTamanhoMax(60);
	_pObjNodeXcpl->setIntTamanhoMin(1);
	_pObjNodeXcpl->setStrIdentificador("E08");
	_pObjNodeXcpl->setStrNome("xCpl");

	return _pObjNodeXcpl;
}

Node* DestNode::getPObjNodeXlgr()
{
	if (_pObjNodeXlgr != nullptr)
	{
		return _pObjNodeXlgr;
	}

	_pObjNodeXlgr = new Node(this->getPObjNodeEnderdest());

	_pObjNodeXlgr->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXlgr->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXlgr->setIntOcorrenciaMax(1);
	_pObjNodeXlgr->setIntOcorrenciaMin(1);
	_pObjNodeXlgr->setIntTamanhoMax(60);
	_pObjNodeXlgr->setIntTamanhoMin(2);
	_pObjNodeXlgr->setStrIdentificador("E06");
	_pObjNodeXlgr->setStrNome("xLgr");

	return _pObjNodeXlgr;
}

Node* DestNode::getPObjNodeXmun()
{
	if (_pObjNodeXmun != nullptr)
	{
		return _pObjNodeXmun;
	}

	_pObjNodeXmun = new Node(this->getPObjNodeEnderdest());

	_pObjNodeXmun->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXmun->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXmun->setIntOcorrenciaMax(1);
	_pObjNodeXmun->setIntOcorrenciaMin(1);
	_pObjNodeXmun->setIntTamanhoMax(60);
	_pObjNodeXmun->setIntTamanhoMin(2);
	_pObjNodeXmun->setStrIdentificador("E11");
	_pObjNodeXmun->setStrNome("xMun");

	return _pObjNodeXmun;
}

Node* DestNode::getPObjNodeXnome()
{
	if (_pObjNodeXnome != nullptr)
	{
		return _pObjNodeXnome;
	}

	_pObjNodeXnome = new Node(this);

	_pObjNodeXnome->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXnome->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXnome->setIntOcorrenciaMax(1);
	_pObjNodeXnome->setIntOcorrenciaMin(0);
	_pObjNodeXnome->setIntTamanhoMax(60);
	_pObjNodeXnome->setIntTamanhoMin(2);
	_pObjNodeXnome->setStrIdentificador("E04");
	_pObjNodeXnome->setStrNome("xNome");

	return _pObjNodeXnome;
}

Node* DestNode::getPObjNodeXpais()
{
	if (_pObjNodeXpais != nullptr)
	{
		return _pObjNodeXpais;
	}

	_pObjNodeXpais = new Node(this->getPObjNodeEnderdest());

	_pObjNodeXpais->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXpais->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXpais->setIntOcorrenciaMax(1);
	_pObjNodeXpais->setIntOcorrenciaMin(0);
	_pObjNodeXpais->setIntTamanhoMax(60);
	_pObjNodeXpais->setIntTamanhoMin(2);
	_pObjNodeXpais->setStrIdentificador("E15");
	_pObjNodeXpais->setStrNome("xPais");

	return _pObjNodeXpais;
}