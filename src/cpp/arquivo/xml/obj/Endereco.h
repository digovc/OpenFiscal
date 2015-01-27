#pragma once

#include "ObjetoMain.h"

namespace OpenFiscal_arquivo_xml_obj
{
	class Endereco :
		public ObjetoMain
	{
	public:
		Endereco();
		~Endereco();

	protected:

	private:

		Node* _pNdeIntCep;
		Node* _pNdeIntMunicipioCodigo;
		Node* _pNdeIntUfCodigo;
		Node* _pNdeStrBairro;
		Node* _pNdeStrComplemento;
		Node* _pNdeStrLogradouro;
		Node* _pNdeStrMunicipioNome;
		Node* _pNdeStrNumero;
		Node* _pNdeStrUfSigla;

		Node* getPNdeIntCep();
		Node* getPNdeIntMunicipioCodigo();
		Node* getPNdeIntUfCodigo();
		Node* getPNdeStrBairro();
		Node* getPNdeStrComplemento();
		Node* getPNdeStrLogradouro();
		Node* getPNdeStrMunicipioNome();
		Node* getPNdeStrNumero();
		Node* getPNdeStrUfSigla();
	};
}