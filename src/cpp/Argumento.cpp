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

EnmAcaoPrincipal Argumento::getEnmAcaoPrincipal()
{
	string str;

	if (_enmAcaoPrincipal != NONE)
	{
		return _enmAcaoPrincipal;
	}

	str = this->getPLstPStrArgumento()->at(1);
	str = Utils::getStrSimplificada(str);

	if (str == "_x" || str == "__xml")
	{
		_enmAcaoPrincipal = XML;
	}

	return _enmAcaoPrincipal;
}

vector<string>* Argumento::getPLstDirNfeXmlBruto()
{
	if (_pLstDirNfeXmlBruto = NULL)
	{
		return _pLstDirNfeXmlBruto;
	}

	_pLstDirNfeXmlBruto = Utils::separarString(this->getPLstPStrArgumento()->at(2), '|');

	return _pLstDirNfeXmlBruto;
}

vector<string>* Argumento::getPLstPStrArgumento()
{
	if (_pLstPStrArgumento != NULL)
	{
		return _pLstPStrArgumento;
	}

	_pLstPStrArgumento = new vector<string>();

	return _pLstPStrArgumento;
}