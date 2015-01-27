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

void EnviNfe2ArqXml::carregarDados()
{
	ArquivoXml::carregarDados();

	this->getPNdeVersao()->setDblValor(2.00);
	//this->getPNdeIdlote()->setIntValor(???);
}

vector<Node*> EnviNfe2ArqXml::getLstPNdeNfe()
{
	if (!_lstPNdeNfe.empty())
	{
		return _lstPNdeNfe;
	}

	_lstPNdeNfe = vector<Node*>();

	return _lstPNdeNfe;
}

Node* EnviNfe2ArqXml::getPNdeEnvinfe()
{
	if (_pNdeEnvinfe != nullptr)
	{
		return _pNdeEnvinfe;
	}

	_pNdeEnvinfe = new Node(nullptr);

	_pNdeEnvinfe->setEnmElementoTipo(RAIZ);
	_pNdeEnvinfe->setEnmValorTipo(NENHUM);
	_pNdeEnvinfe->setIntOcorrenciaMax(-1);
	_pNdeEnvinfe->setIntOcorrenciaMin(-1);
	_pNdeEnvinfe->setIntTamanhoMax(-1);
	_pNdeEnvinfe->setIntTamanhoMin(-1);
	_pNdeEnvinfe->setStrIdentificador("AP01");
	_pNdeEnvinfe->setStrNome("enviNFe");

	return _pNdeEnvinfe;
}

Node* EnviNfe2ArqXml::getPNdeIdlote()
{
	if (_pNdeIdlote != nullptr)
	{
		return _pNdeIdlote;
	}

	_pNdeIdlote = new Node(this->getPNdeEnvinfe());

	_pNdeIdlote->setEnmElementoTipo(ELEMENTO);
	_pNdeIdlote->setEnmValorTipo(NUMERICO);
	_pNdeIdlote->setIntOcorrenciaMax(1);
	_pNdeIdlote->setIntOcorrenciaMin(1);
	_pNdeIdlote->setIntTamanhoMax(15);
	_pNdeIdlote->setIntTamanhoMin(1);
	_pNdeIdlote->setStrIdentificador("AP03");
	_pNdeIdlote->setStrNome("idLote");

	return _pNdeIdlote;
}

Node* EnviNfe2ArqXml::getPNdeIndsinc()
{
	if (_pNdeIndsinc != nullptr)
	{
		return _pNdeIndsinc;
	}

	_pNdeIndsinc = new Node(this->getPNdeEnvinfe());

	_pNdeIndsinc->setEnmElementoTipo(ELEMENTO);
	_pNdeIndsinc->setEnmValorTipo(NUMERICO);
	_pNdeIndsinc->setIntOcorrenciaMax(1);
	_pNdeIndsinc->setIntOcorrenciaMin(1);
	_pNdeIndsinc->setIntTamanhoMax(1);
	_pNdeIndsinc->setIntTamanhoMin(1);
	_pNdeIndsinc->setStrIdentificador("AP03a");
	_pNdeIndsinc->setStrNome("indSinc");

	return _pNdeIndsinc;
}

Node* EnviNfe2ArqXml::getPNdeVersao()
{
	if (_pNdeVersao != nullptr)
	{
		return _pNdeVersao;
	}

	_pNdeVersao = new Node(this->getPNdeEnvinfe());

	_pNdeVersao->setEnmElementoTipo(A);
	_pNdeVersao->setEnmValorTipo(NUMERICO);
	_pNdeVersao->setIntOcorrenciaMax(1);
	_pNdeVersao->setIntOcorrenciaMin(1);
	_pNdeVersao->setIntTamanhoMax(4);
	_pNdeVersao->setIntTamanhoMin(1);
	_pNdeVersao->setStrIdentificador("AP02");
	_pNdeVersao->setStrNome("versao");

	return _pNdeVersao;
}