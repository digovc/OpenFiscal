#pragma once

#include <vector>

#include "../Arquivo.h"
#include "node/Node.h"

using namespace std;

using namespace OpenFiscal_arquivo;
using namespace OpenFiscal_arquivo_xml_node;

namespace OpenFiscal_arquivo_xml
{
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

