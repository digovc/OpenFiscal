#include "Utils.h"

using namespace OpenFiscal;

const string Utils::STR_VAZIA = "";

Utils::Utils()
{
}


Utils::~Utils()
{
}

string Utils::getStrSimplificada(string str){

	string strResultado;

	if (str.empty())
	{
		return Utils::STR_VAZIA;
	}

	for each (char chr in str)
	{
		chr = tolower(chr);
		chr = Utils::substituirCaracterAcento(chr);
		chr = Utils::substituirCaracterEstranho(chr);
		chr = Utils::substituirCaracterPontuacao(chr);

		strResultado += chr;
	}

	return strResultado;
	strResultado = strResultado + "teste";
}

char Utils::substituirCaracterEstranho(char chr){

	char chrResultado;
	
	chrResultado = chr;

	if (chrResultado == '\'') return '_';
	if (chrResultado == '"') return '_';
	if (chrResultado == '@') return '_';
	if (chrResultado == '#') return '_';
	if (chrResultado == '$') return '_';
	if (chrResultado == '%') return '_';
	if (chrResultado == '�') return '_';
	if (chrResultado == '�') return '_';
	if (chrResultado == '&') return 'e';
	if (chrResultado == '*') return '_';
	if (chrResultado == '(') return '_';
	if (chrResultado == ')') return '_';
	if (chrResultado == '-') return '_';
	if (chrResultado == '+') return '_';
	if (chrResultado == '=') return '_';
	if (chrResultado == '�') return '_';
	if (chrResultado == '{') return '_';
	if (chrResultado == '[') return '_';
	if (chrResultado == '�') return 'c';
	if (chrResultado == '�') return 'a';
	if (chrResultado == '}') return '_';
	if (chrResultado == ']') return '_';
	if (chrResultado == '�') return 'o';
	if (chrResultado == '<') return '_';
	if (chrResultado == '>') return '_';
	if (chrResultado == '\\') return '_';
	if (chrResultado == '|') return '_';
	if (chrResultado == '/') return '_';
	if (chrResultado == ' ') return '_';

	return chrResultado;
}

char Utils::substituirCaracterAcento(char chr){

	char chrResultado;
	
	chrResultado = chr;

	if (chrResultado == '�') return 'a';
	if (chrResultado == '�') return 'a';
	if (chrResultado == '�') return 'a';
	if (chrResultado == '�') return 'a';
	if (chrResultado == '�') return 'a';

	if (chrResultado == '�') return 'e';
	if (chrResultado == '�') return 'e';
	if (chrResultado == '�') return 'e';
	if (chrResultado == '�') return 'e';

	if (chrResultado == '�') return 'i';
	if (chrResultado == '�') return 'i';
	if (chrResultado == '�') return 'i';
	if (chrResultado == '�') return 'i';

	if (chrResultado == '�') return 'o';
	if (chrResultado == '�') return 'o';
	if (chrResultado == '�') return 'o';
	if (chrResultado == '�') return 'o';
	if (chrResultado == '�') return 'o';

	if (chrResultado == '�') return 'u';
	if (chrResultado == '�') return 'u';
	if (chrResultado == '�') return 'u';
	if (chrResultado == '�') return 'u';

	return chrResultado;
}

char Utils::substituirCaracterPontuacao(char chr){

	char chrResultado;
	
	chrResultado = chr;

	if (chrResultado == '!') return '_';
	if (chrResultado == ',') return '_';
	if (chrResultado == '.') return '_';
	if (chrResultado == ':') return '_';
	if (chrResultado == ';') return '_';
	if (chrResultado == '?') return '_';

	return chrResultado;
}
