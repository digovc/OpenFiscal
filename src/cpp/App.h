#pragma once

#include <string>

#include "Objeto.h"

using namespace std;

namespace OpenFiscal{

	class App :
		public Objeto
	{
	public:

		App();
		~App();

	protected:

		string _strVersao;

		string getStrVersao();
		void setStrVersao(string strVersao);

	private:

	};
}

