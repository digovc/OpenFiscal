#pragma once

#include <vector>

#include "Objeto.h"

namespace OpenFiscal{
	enum EnmAcaoPrincipal{
		/*
		 * -x ou --xml: Importa��o dos dados do objeto serializado no XML para
		 * cria��o do XML final que ser� assinado e poder� ser
		 * enviado para os Governo.
		 */
		XML,
		NONE,
	};

	class Argumento :
		public Objeto
	{
	public:

		static Argumento i;

		EnmAcaoPrincipal getEnmAcaoPrincipal();
		vector<string>* getPLstDirNfeXmlBruto();
		vector<string>* getPLstPStrArgumento();

	protected:

	private:

		Argumento();
		~Argumento();

		EnmAcaoPrincipal _enmAcaoPrincipal = NONE;
		vector<string>* _pLstDirNfeXmlBruto;
		vector<string>* _pLstPStrArgumento;
	};
}