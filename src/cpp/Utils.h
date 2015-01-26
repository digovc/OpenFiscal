#pragma once

#include <string>
#include <vector>

using namespace std;

namespace OpenFiscal
{
	class Utils
	{
	public:

		static const string STR_VAZIA;

		static char removerCaracterAcento(char chr);
		static char removerCaracterEstranho(char chr);
		static char removerCaracterPontuacao(char chr);
		static string getStrSimplificada(string str);
		static vector<string>* separarString(string str, char chrDelimitador);

	private:

		Utils();
		~Utils();
	};
}