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
		chr = Utils::removerCaracterAcento(chr);
		chr = Utils::removerCaracterEstranho(chr);
		chr = Utils::removerCaracterPontuacao(chr);

		strResultado += chr;
	}

	return strResultado;
}

char Utils::removerCaracterEstranho(char chr){

	char chrResultado;
	
	chrResultado = chr;

	if (chrResultado == '\'') return '_';
	if (chrResultado == '"') return '_';
	if (chrResultado == '@') return '_';
	if (chrResultado == '#') return '_';
	if (chrResultado == '$') return '_';
	if (chrResultado == '%') return '_';
	if (chrResultado == '¨') return '_';
	if (chrResultado == '¬') return '_';
	if (chrResultado == '&') return 'e';
	if (chrResultado == '*') return '_';
	if (chrResultado == '(') return '_';
	if (chrResultado == ')') return '_';
	if (chrResultado == '-') return '_';
	if (chrResultado == '+') return '_';
	if (chrResultado == '=') return '_';
	if (chrResultado == '§') return '_';
	if (chrResultado == '{') return '_';
	if (chrResultado == '[') return '_';
	if (chrResultado == 'ç') return 'c';
	if (chrResultado == 'ª') return 'a';
	if (chrResultado == '}') return '_';
	if (chrResultado == ']') return '_';
	if (chrResultado == 'º') return 'o';
	if (chrResultado == '<') return '_';
	if (chrResultado == '>') return '_';
	if (chrResultado == '\\') return '_';
	if (chrResultado == '|') return '_';
	if (chrResultado == '/') return '_';
	if (chrResultado == ' ') return '_';

	return chrResultado;
}

char Utils::removerCaracterAcento(char chr){

	char chrResultado;
	
	chrResultado = chr;

	if (chrResultado == 'ä') return 'a';
	if (chrResultado == 'à') return 'a';
	if (chrResultado == 'á') return 'a';
	if (chrResultado == 'â') return 'a';
	if (chrResultado == 'ã') return 'a';

	if (chrResultado == 'ë') return 'e';
	if (chrResultado == 'è') return 'e';
	if (chrResultado == 'é') return 'e';
	if (chrResultado == 'ê') return 'e';

	if (chrResultado == 'ï') return 'i';
	if (chrResultado == 'ì') return 'i';
	if (chrResultado == 'í') return 'i';
	if (chrResultado == 'î') return 'i';

	if (chrResultado == 'ö') return 'o';
	if (chrResultado == 'ò') return 'o';
	if (chrResultado == 'ó') return 'o';
	if (chrResultado == 'ô') return 'o';
	if (chrResultado == 'õ') return 'o';

	if (chrResultado == 'ü') return 'u';
	if (chrResultado == 'ù') return 'u';
	if (chrResultado == 'ú') return 'u';
	if (chrResultado == 'û') return 'u';

	return chrResultado;
}

char Utils::removerCaracterPontuacao(char chr){

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
