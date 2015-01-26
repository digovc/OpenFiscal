#pragma once

#include <vector>

#include "Objeto.h"

namespace OpenFiscal{
	enum EnmAcaoPrincipal{
		/*
		 * -x ou --xml: Importação dos dados do objeto serializado no XML para
		 * criação do XML final que será assinado e poderá ser
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