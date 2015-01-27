#include "Endereco.h"

using namespace OpenFiscal_arquivo_xml_obj;

Endereco::Endereco()
{
}

Endereco::~Endereco()
{
}

Node* Endereco::getPNdeIntCep()
{
	if (_pNdeIntCep != nullptr)
	{
		return _pNdeIntCep;
	}

	_pNdeIntCep = new Node(nullptr);

	return _pNdeIntCep;
}

Node* Endereco::getPNdeIntMunicipioCodigo()
{
	if (_pNdeIntMunicipioCodigo != nullptr)
	{
		return _pNdeIntMunicipioCodigo;
	}

	_pNdeIntMunicipioCodigo = new Node(nullptr);

	return _pNdeIntMunicipioCodigo;
}

Node* Endereco::getPNdeIntUfCodigo()
{
	if (_pNdeIntUfCodigo != nullptr)
	{
		return _pNdeIntUfCodigo;
	}

	_pNdeIntUfCodigo = new Node(nullptr);

	return _pNdeIntUfCodigo;
}

Node* Endereco::getPNdeStrBairro()
{
	if (_pNdeStrBairro != nullptr)
	{
		return _pNdeStrBairro;
	}

	_pNdeStrBairro = new Node(nullptr);

	return _pNdeStrBairro;
}

Node* Endereco::getPNdeStrComplemento()
{
	if (_pNdeStrComplemento != nullptr)
	{
		return _pNdeStrComplemento;
	}

	_pNdeStrComplemento = new Node(nullptr);

	return _pNdeStrComplemento;
}

Node* Endereco::getPNdeStrLogradouro()
{
	if (_pNdeStrLogradouro != nullptr)
	{
		return _pNdeStrLogradouro;
	}

	_pNdeStrLogradouro = new Node(nullptr);

	return _pNdeStrLogradouro;
}

Node* Endereco::getPNdeStrMunicipioNome()
{
	if (_pNdeStrMunicipioNome != nullptr)
	{
		return _pNdeStrMunicipioNome;
	}

	_pNdeStrMunicipioNome = new Node(nullptr);

	return _pNdeStrMunicipioNome;
}

Node* Endereco::getPNdeStrNumero()
{
	if (_pNdeStrNumero != nullptr)
	{
		return _pNdeStrNumero;
	}

	_pNdeStrNumero = new Node(nullptr);

	return _pNdeStrNumero;
}

Node* Endereco::getPNdeStrUfSigla()
{
	if (_pNdeStrUfSigla != nullptr)
	{
		return _pNdeStrUfSigla;
	}

	_pNdeStrUfSigla = new Node(nullptr);

	return _pNdeStrUfSigla;
}