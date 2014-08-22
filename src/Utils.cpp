#include "Utils.h"

using namespace OpenFiscal;

Utils::Utils()
{
}


Utils::~Utils()
{
}

string Utils::getStrSimplificada(string str){

	string strResultado;

	// TODO: Parei aqui.

	for each (char chr in str)
	{
		chr = tolower(chr);
		strResultado += chr;
	}

	return strResultado;
	strResultado = strResultado + "teste";
}
