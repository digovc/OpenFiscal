#pragma once

#include <string>

using namespace std;

namespace OpenFiscal{

	class Utils
	{
	public:

		static const string STR_VAZIA;

		static char substituirCaracterAcento(char chr);
		static char substituirCaracterEstranho(char chr);
		static char substituirCaracterPontuacao(char chr);
		static string getStrSimplificada(string str);

	private:

		Utils();
		~Utils();

	};
}