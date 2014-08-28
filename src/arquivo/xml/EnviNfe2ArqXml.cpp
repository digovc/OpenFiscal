#include "EnviNfe2ArqXml.h"
#include "node\Node.h"

using namespace OpenFiscal_arquivo_xml;
using namespace OpenFiscal_arquivo_xml_node;

EnviNfe2ArqXml::EnviNfe2ArqXml()
{
}

EnviNfe2ArqXml::~EnviNfe2ArqXml()
{
	// TODO: Deletar objetos criados.
}

Node* EnviNfe2ArqXml::getPObjNodeEnvinfe()
{
	if (_pObjNodeEnvinfe != nullptr)
	{
		return _pObjNodeEnvinfe;
	}

	_pObjNodeEnvinfe = new  Node(nullptr);

	_pObjNodeEnvinfe->setEnmElementoTipo(RAIZ);
	_pObjNodeEnvinfe->setEnmValorTipo(NENHUM);
	_pObjNodeEnvinfe->setIntOcorrenciaMax(-1);
	_pObjNodeEnvinfe->setIntOcorrenciaMin(-1);
	_pObjNodeEnvinfe->setIntTamanhoMax(-1);
	_pObjNodeEnvinfe->setIntTamanhoMin(-1);
	_pObjNodeEnvinfe->setStrIdentificador("AP01");
	_pObjNodeEnvinfe->setStrNome("enviNFe");

	return _pObjNodeEnvinfe;
}

Node* EnviNfe2ArqXml::getPObjNodeIdlote()
{
	if (_pObjNodeIdlote != nullptr)
	{
		return _pObjNodeIdlote;
	}

	_pObjNodeIdlote = new Node(this->getPObjNodeEnvinfe());

	_pObjNodeIdlote->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIdlote->setEnmValorTipo(NUMERICO);
	_pObjNodeIdlote->setIntOcorrenciaMax(1);
	_pObjNodeIdlote->setIntOcorrenciaMin(1);
	_pObjNodeIdlote->setIntTamanhoMax(15);
	_pObjNodeIdlote->setIntTamanhoMin(1);
	_pObjNodeIdlote->setStrIdentificador("AP03");
	_pObjNodeIdlote->setStrNome("idLote");

	return _pObjNodeIdlote;
}

Node* EnviNfe2ArqXml::getPObjNodeIndsinc()
{
	if (_pObjNodeIndsinc != nullptr)
	{
		return _pObjNodeIndsinc;
	}

	_pObjNodeIndsinc = new Node(this->getPObjNodeEnvinfe());

	_pObjNodeIndsinc->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIndsinc->setEnmValorTipo(NUMERICO);
	_pObjNodeIndsinc->setIntOcorrenciaMax(1);
	_pObjNodeIndsinc->setIntOcorrenciaMin(1);
	_pObjNodeIndsinc->setIntTamanhoMax(1);
	_pObjNodeIndsinc->setIntTamanhoMin(1);
	_pObjNodeIndsinc->setStrIdentificador("AP03a");
	_pObjNodeIndsinc->setStrNome("indSinc");

	return _pObjNodeIndsinc;
}

vector<Node*> EnviNfe2ArqXml::getLstPObjNodeNfe()
{
	return _lstPObjNodeNfe;
}

Node* EnviNfe2ArqXml::getPObjNodeVersao()
{
	if (_pObjNodeVersao != nullptr)
	{
		return _pObjNodeVersao;
	}

	_pObjNodeVersao = new Node(this->getPObjNodeEnvinfe());

	_pObjNodeVersao->setEnmElementoTipo(A);
	_pObjNodeVersao->setEnmValorTipo(NUMERICO);
	_pObjNodeVersao->setIntOcorrenciaMax(1);
	_pObjNodeVersao->setIntOcorrenciaMin(1);
	_pObjNodeVersao->setIntTamanhoMax(4);
	_pObjNodeVersao->setIntTamanhoMin(1);
	_pObjNodeVersao->setStrIdentificador("AP02");
	_pObjNodeVersao->setStrNome("versao");

	return _pObjNodeVersao;
}