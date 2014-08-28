#pragma once

#include <vector>

#include "../Arquivo.h"

using namespace std;
using namespace OpenFiscal_arquivo;

namespace OpenFiscal_arquivo_xml
{
	class Node;

	class ArquivoXml :
		public Arquivo
	{

	public:

		ArquivoXml();
		~ArquivoXml();

		vector<Node*> getLstPObjNode();

	protected:

		string _strNamespace;

		string getStrNamespace();
		void setStrNamespace(string strNamespace);

	private:

		vector<Node*> _lstPObjNode;
	};
}

