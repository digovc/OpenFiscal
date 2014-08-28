#include "WsNfeRecepcao2.h"

using namespace OpenFiscal_http_web_service;

WsNfeRecepcao2::WsNfeRecepcao2()
{
	this->setBooSincrono(false);
}

WsNfeRecepcao2::~WsNfeRecepcao2()
{
}

Schema* WebService::getPObjSchemaEntrada(){

	if (_pObjSchemaEntrada != nullptr)
	{
		return _pObjSchemaEntrada;
	}

	_pObjSchemaEntrada = new Schema();
	_pObjSchemaEntrada->setStrNome("enviNFe_v2.00.xsd");
}

Schema* WebService::getPObjSchemaSaida(){

	if (_pObjSchemaSaida != nullptr)
	{
		return _pObjSchemaSaida;
	}

	_pObjSchemaSaida = new Schema();
	_pObjSchemaSaida->setStrNome("retEnviNFe_v2.00.xsd");
}