#pragma once

#include <string>

#include "../Objeto.h"

using namespace std;
using namespace OpenFiscal;

namespace OpenFiscal_arquivo{

	class Arquivo :
		public Objeto
	{
	public:

		Arquivo();
		~Arquivo();

		/**
		Persiste o valor contido no arquivo em disco.
		*/
		virtual int salvar();

	protected:

	private:

	};
}

