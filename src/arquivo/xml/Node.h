#pragma once

#include "..\..\Objeto.h"

using namespace OpenFiscal;

namespace OpenFiscal_arquivo_xml
{

	enum EnmElementoTipo{
		A,
		ELEMENTO,
		GRUPO,
		RAIZ,
	};

	enum EnmValorTipo{
		ALFANUMERICO,
		NUMERICO,
		XML,
	};

	class ArquivoXml; // Classe vazia para eviatar redundância ao compilar

	class Node :
		public Objeto
	{

	public:

		Node(ArquivoXml* pArqXml);
		~Node();

		void setEnmElementoTipo(EnmElementoTipo enmElementoTipo);
		void setEnmValorTipo(EnmValorTipo enmValorTipo);
		void setIntCasasDecimais(int intCasasDecimais);
		void setIntOcorrenciaMax(int intOcorrenciaMax);
		void setIntOcorrenciaMin(int intOcorrenciaMin);
		void setIntTamanhoMax(int intTamanhoMax);
		void setIntTamanhoMin(int intTamanhoMin);
		void setPObjNodePai(Node* pObjNodePai);

	protected:


	private:

		ArquivoXml* _pArqXml;
		EnmElementoTipo _enmElementoTipo = ELEMENTO;
		EnmValorTipo _enmValorTipo = ALFANUMERICO;
		int _intCasasDecimais;
		int _intOcorrenciaMax;
		int _intOcorrenciaMin;
		int _intTamanhoMax;
		int _intTamanhoMin;
		Node* _pObjNodePai;
		string _strIdentificador;

		ArquivoXml* getPArqXml();
		EnmElementoTipo getEnmElementoTipo();
		EnmValorTipo getEnmValorTipo();
		int getIntCasasDecimais();
		int getIntOcorrenciaMax();
		int getIntOcorrenciaMin();
		int getIntTamanhoMax();
		int getIntTamanhoMin();
		Node* getPObjNodePai();
		string getStrIdentificador();
		void setPArqXml(ArquivoXml* pArqXml);
		void setStrIdentificador(string strIdentificador);
	};
}
