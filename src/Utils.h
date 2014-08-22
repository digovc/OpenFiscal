#pragma once
#include "Objeto.h"

#include <string>

using namespace std;

namespace OpenFiscal{

	class Utils :
		public Objeto
	{
	public:

		static string getStrSimplificada(string str);

	private:

		Utils();
		~Utils();

	};


}