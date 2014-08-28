#include "App.h"

using namespace OpenFiscal;

App::App()
{
}

App::~App()
{
}

string App::getStrVersao(){
	return _strVersao;
}

void App::setStrVersao(string strVersao){
	_strVersao = strVersao;
}