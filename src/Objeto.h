#pragma once

#include <string>

using namespace std;

namespace OpenFiscal
{
	class Objeto
	{
	public:

		Objeto();
		~Objeto();

		int getIntId();
		string getStrNome();
		string getStrNomeExibicao();
		string getStrNomeSimplificado();
		void setStrNome(string strNome);
		void setStrNomeExibicao(string strNomeExibicao);

	protected:

	private:

		int _intId;
		string _strNome;
		string _strNomeExibicao;
		string _strNomeSimplificado;

		void setIntId(int intId);
		void setStrNomeSimplificado(string strNomeSimplificado);
	};
}