#include "Argumento.h"
#include "Utils.h"

using namespace OpenFiscal;

Argumento Argumento::i;

Argumento::Argumento()
{
}

Argumento::~Argumento()
{
}

EnmAcaoPrincipal Argumento::getEnmAcaoPrincipal(){
	
	string str;

	if (_enmAcaoPrincipal!=NONE)
	{
		return _enmAcaoPrincipal;
	}

	str = *this->getPLstPStrArgumento()->at(0);
	str = Utils::getStrSimplificada(str);

	if (str == "-x" || str == "--xml")
	{
		_enmAcaoPrincipal = XML;
	}

	return _enmAcaoPrincipal;
}

string Argumento::getDirNfeXmlBruto(){

	if (!_dirNfeXmlBruto.empty())
	{
		return _dirNfeXmlBruto;
	}

	_dirNfeXmlBruto = *this->getPLstPStrArgumento()->at(1);

	return _dirNfeXmlBruto;
}

vector<string*>* Argumento::getPLstPStrArgumento(){

	if (_pLstPStrArgumento != NULL)
	{
		return _pLstPStrArgumento;
	}

	_pLstPStrArgumento = new vector<string*>();

	return _pLstPStrArgumento;
}