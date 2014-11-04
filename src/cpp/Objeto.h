#pragma once

#include <string>

using namespace std;

namespace OpenFiscal
{
	static int intId = -1;

	class Objeto
	{
	public:

		Objeto();
		~Objeto();

		int getIntId();
		string getStrDescricao();
		string getStrNome();
		string getStrNomeExibicao();
		string getStrNomeSimplificado();
		void setStrDescricao(string strDescricao);
		void setStrNome(string strNome);
		void setStrNomeExibicao(string strNomeExibicao);

	protected:

	private:

		int _intId;
		string _strDescricao;
		string _strNome;
		string _strNomeExibicao;
		string _strNomeSimplificado;

		void setIntId(int intId);
		void setStrNomeSimplificado(string strNomeSimplificado);

	};
}