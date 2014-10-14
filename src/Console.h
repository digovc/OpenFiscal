#pragma once

#include "Objeto.h"

namespace OpenFiscal
{
	class Console :
		public Objeto
	{

	public:

		~Console();

		static Console i;

		double lerDouble(string strMsg);
		int lerInteger(string strMsg);
		string lerString(string strMsg);
		void escrever(string strMsg);				

	protected:

	private:

		Console();

	};
}