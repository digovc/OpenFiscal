#pragma once

#include <vector>

#include "../../../cpp-lib/rapidxml-1.13/rapidxml.hpp"
#include "../Arquivo.h"
#include "node/Node.h"

using namespace std;

using namespace OpenFiscal_arquivo;
using namespace OpenFiscal_arquivo_xml_node;
using namespace rapidxml;

namespace OpenFiscal_arquivo_xml
{
	class ArquivoXml :
		public Arquivo
	{
	public:

		ArquivoXml();
		~ArquivoXml();

		vector<Node*> getLstPNde();

		virtual void carregarDados();

	protected:

		string _strNamespace;

		string getStrNamespace();
		void setStrNamespace(string strNamespace);

	private:

		vector<Node*> _lstPNde;
		xml_document<>* _xmlDoc;

		xml_document<>* getXmlDoc();
	};
}
