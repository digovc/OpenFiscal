#include "NotaFiscalEletronica.h"

using namespace OpenFiscal_arquivo_xml_obj;

NotaFiscalEletronica::NotaFiscalEletronica()
{
}

NotaFiscalEletronica::~NotaFiscalEletronica()
{
}

Node* NotaFiscalEletronica::getPNdeBooConsumidorFinal()
{
	if (_pNdeBooConsumidorFinal != nullptr)
	{
		return _pNdeBooConsumidorFinal;
	}

	_pNdeBooConsumidorFinal = new Node(nullptr);

	return _pNdeBooConsumidorFinal;
}

Node* NotaFiscalEletronica::getPNdeBooEntrada()
{
	if (_pNdeBooEntrada != nullptr)
	{
		return _pNdeBooEntrada;
	}

	_pNdeBooEntrada = new Node(nullptr);

	return _pNdeBooEntrada;
}

Node* NotaFiscalEletronica::getPNdeBooHomologacao()
{
	if (_pNdeBooHomologacao != nullptr)
	{
		return _pNdeBooHomologacao;
	}

	_pNdeBooHomologacao = new Node(nullptr);

	return _pNdeBooHomologacao;
}

Node* NotaFiscalEletronica::getPNdeDttContigencia()
{
	if (_pNdeDttContigencia != nullptr)
	{
		return _pNdeDttContigencia;
	}

	_pNdeDttContigencia = new Node(nullptr);

	return _pNdeDttContigencia;
}

Node* NotaFiscalEletronica::getPNdeDttEmissao()
{
	if (_pNdeDttEmissao != nullptr)
	{
		return _pNdeDttEmissao;
	}

	_pNdeDttEmissao = new Node(nullptr);

	return _pNdeDttEmissao;
}

Node* NotaFiscalEletronica::getPNdeDttSaida()
{
	if (_pNdeDttSaida != nullptr)
	{
		return _pNdeDttSaida;
	}

	_pNdeDttSaida = new Node(nullptr);

	return _pNdeDttSaida;
}

Node* NotaFiscalEletronica::getPNdeEnmEmissaoFinalidade()
{
	if (_pNdeEnmEmissaoFinalidade != nullptr)
	{
		return _pNdeEnmEmissaoFinalidade;
	}

	_pNdeEnmEmissaoFinalidade = new Node(nullptr);

	return _pNdeEnmEmissaoFinalidade;
}

Node* NotaFiscalEletronica::getPNdeEnmEmissaoProcesso()
{
	if (_pNdeEnmEmissaoProcesso != nullptr)
	{
		return _pNdeEnmEmissaoProcesso;
	}

	_pNdeEnmEmissaoProcesso = new Node(nullptr);

	return _pNdeEnmEmissaoProcesso;
}

Node* NotaFiscalEletronica::getPNdeEnmEmissaoTipo()
{
	if (_pNdeEnmEmissaoTipo != nullptr)
	{
		return _pNdeEnmEmissaoTipo;
	}

	_pNdeEnmEmissaoTipo = new Node(nullptr);

	return _pNdeEnmEmissaoTipo;
}

Node* NotaFiscalEletronica::getPNdeEnmFormaPagamento()
{
	if (_pNdeEnmFormaPagamento != nullptr)
	{
		return _pNdeEnmFormaPagamento;
	}

	_pNdeEnmFormaPagamento = new Node(nullptr);

	return _pNdeEnmFormaPagamento;
}

Node* NotaFiscalEletronica::getPNdeEnmImpressaoTipo()
{
	if (_pNdeEnmImpressaoTipo != nullptr)
	{
		return _pNdeEnmImpressaoTipo;
	}

	_pNdeEnmImpressaoTipo = new Node(nullptr);

	return _pNdeEnmImpressaoTipo;
}

Node* NotaFiscalEletronica::getPNdeEnmIndicadorClientePresenca()
{
	if (_pNdeEnmIndicadorClientePresenca != nullptr)
	{
		return _pNdeEnmIndicadorClientePresenca;
	}

	_pNdeEnmIndicadorClientePresenca = new Node(nullptr);

	return _pNdeEnmIndicadorClientePresenca;
}

Node* NotaFiscalEletronica::getPNdeEnmLocalDestino()
{
	if (_pNdeEnmLocalDestino != nullptr)
	{
		return _pNdeEnmLocalDestino;
	}

	_pNdeEnmLocalDestino = new Node(nullptr);

	return _pNdeEnmLocalDestino;
}

Node* NotaFiscalEletronica::getPNdeIntChaveAcessoDv()
{
	if (_pNdeIntChaveAcessoDv != nullptr)
	{
		return _pNdeIntChaveAcessoDv;
	}

	_pNdeIntChaveAcessoDv = new Node(nullptr);

	return _pNdeIntChaveAcessoDv;
}

Node* NotaFiscalEletronica::getPNdeIntId()
{
	if (_pNdeIntId != nullptr)
	{
		return _pNdeIntId;
	}

	_pNdeIntId = new Node(nullptr);

	return _pNdeIntId;
}

Node* NotaFiscalEletronica::getPNdeIntModelo()
{
	if (_pNdeIntModelo != nullptr)
	{
		return _pNdeIntModelo;
	}

	_pNdeIntModelo = new Node(nullptr);

	return _pNdeIntModelo;
}

Node* NotaFiscalEletronica::getPNdeIntNumero()
{
	if (_pNdeIntNumero != nullptr)
	{
		return _pNdeIntNumero;
	}

	_pNdeIntNumero = new Node(nullptr);

	return _pNdeIntNumero;
}

Node* NotaFiscalEletronica::getPNdeIntSerie()
{
	if (_pNdeIntSerie != nullptr)
	{
		return _pNdeIntSerie;
	}

	_pNdeIntSerie = new Node(nullptr);

	return _pNdeIntSerie;
}

vector<NotaFiscalEletronica*> NotaFiscalEletronica::getLstPObjNotaFiscalEletronicaRef()
{
	return _lstPObjNotaFiscalEletronicaRef;
}