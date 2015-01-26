#pragma once

#include <string>

#include "Objeto.h"

using namespace std;

namespace OpenFiscal
{
	class App :
		public Objeto
	{
	public:

	protected:

		App();
		~App();

		string _strVersao;

		string getStrVersao();
		void setStrVersao(string strVersao);

	private:
	};
}
