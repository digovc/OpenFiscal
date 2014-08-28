#pragma once

#include <string>

using namespace std;

namespace OpenFiscal{

	class Utils
	{
	public:

		static const string STR_VAZIA;

		static string getStrSimplificada(string str);
		static char substituirCaracterEstranho(char chr);
		static char substituirCaracterAcento(char chr);
		static char substituirCaracterPontuacao(char chr);

	private:

		Utils();
		~Utils();

	};


}