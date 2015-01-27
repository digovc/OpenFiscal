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

		virtual void carregarDados();

	protected:

	private:

		Node* _pNdeEnvinfe;
		Node* _pNdeIdlote;
		Node* _pNdeIndsinc;
		Node* _pNdeVersao;
		vector<Node*> _lstPNdeNfe;

		Node* getPNdeEnvinfe();
		Node* getPNdeIdlote();
		Node* getPNdeIndsinc();
		Node* getPNdeVersao();
		vector<Node*> getLstPNdeNfe();
	};
}