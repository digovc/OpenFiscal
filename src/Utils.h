#pragma once

#include <string>

using namespace std;

namespace OpenFiscal{

	class Utils
	{
	public:

		static const string STR_VAZIA;

		static char removerCaracterAcento(char chr);
		static char removerCaracterEstranho(char chr);
		static char removerCaracterPontuacao(char chr);
		static string getStrSimplificada(string str);

	private:

		Utils();
		~Utils();

	};
}