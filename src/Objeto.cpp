#include "Objeto.h"
#include "Utils.h"

using namespace OpenFiscal;

Objeto::Objeto()
{
	static int intId = -1;
	intId++;
	this->setIntId(intId);
}

Objeto::~Objeto()
{
}

int Objeto::getIntId(){
	return _intId;
}

void Objeto::setIntId(int intId){
	_intId = intId;
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

void Objeto::setStrNome(string strNome){
	_strNome = strNome;
}

void Objeto::setStrNomeExibicao(string strNomeExibicao){
	_strNomeExibicao = strNomeExibicao;
}

void Objeto::setStrNomeSimplificado(string strNomeSimplificado){
	_strNomeSimplificado = strNomeSimplificado;
}