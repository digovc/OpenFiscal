#include "WebService.h"

using namespace OpenFiscal_http_web_service;

WebService::WebService()
{
	this->setBooSincrono(true);
}

WebService::~WebService()
{
}

bool WebService::getBooSincrono(){
	return _booSincrono;
}

Schema* WebService::getPObjSchemaEntrada(){
	return _pObjSchemaEntrada;
}

string WebService::getStrResposta(){
	return _strResposta;
}

string WebService::getUrl(){
	return _url;
}

void WebService::setBooSincrono(bool booSincrono){
	_booSincrono = booSincrono;
}

void WebService::setStrResposta(string strResposta){
	_strResposta = strResposta;
}

void WebService::setUrl(string url){
	_url = url;
}
