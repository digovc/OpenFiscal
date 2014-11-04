#pragma once

#include "ArquivoXml.h"

namespace OpenFiscal_arquivo_xml
{
	class EnviNfe2ArqXml :
		public ArquivoXml
	{

	public:

		EnviNfe2ArqXml();
		~EnviNfe2ArqXml();

	protected:

	private:

		Node* _pObjNodeEnvinfe;		
		Node* _pObjNodeIdlote;
		Node* _pObjNodeIndsinc;
		Node* _pObjNodeVersao;
		vector<Node*> _lstPObjNodeNfe;

		Node* getPObjNodeEnvinfe();
		Node* getPObjNodeIdlote();
		Node* getPObjNodeIndsinc();
		Node* getPObjNodeVersao();
		vector<Node*> getLstPObjNodeNfe();

	};
}