#include "Objeto.h"
#include "Utils.h"

using namespace OpenFiscal;

Objeto::Objeto()
{
	intId++;
	this->setIntId(intId);
}

Objeto::~Objeto()
{
}

int Objeto::getIntId(){
	return _intId;
}

string Objeto::getStrDescricao(){
	return _strDescricao;
}

string Objeto::getStrNome(){
	return _strNome;
}

string Objeto::getStrNomeExibicao(){
	return _strNomeExibicao;
}

string Objeto::getStrNomeSimplificado(){
	_strNomeSimplificado = this->getStrNome();
	_strNomeSimplificado = Utils::getStrSimplificada(_strNomeSimplificado);

	return _strNomeSimplificado;
}

void Objeto::setIntId(int intId){
	_intId = intId;
}

void Objeto::setStrDescricao(string strDescricao){
	_strDescricao = strDescricao;
}

void Objeto::setStrNome(string strNome){
	_strNome = strNome;
}

void Objeto::setStrNomeExibicao(string strNomeExibicao){
	_strNomeExibicao = strNomeExibicao;
}

void Objeto::setStrNomeSimplificado(string strNomeSimplificado){
	_strNomeSimplificado = strNomeSimplificado;
}