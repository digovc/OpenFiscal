#pragma once

#include "../../../Objeto.h"

using namespace OpenFiscal;

namespace OpenFiscal_arquivo_xml_node
{
	enum EnmElementoTipo{
		A,
		ELEMENTO,
		GRUPO,
		ID,
		RAIZ,
	};

	enum EnmValorTipo{
		ALFANUMERICO,
		DATA,
		DATA_HORA,
		NENHUM,
		NUMERICO,
		XML,
	};

	class Node :
		public Objeto
	{
	public:

		Node(Node* pNdePai);
		~Node();

		void setDblValor(double dblValor);
		void setEnmElementoTipo(EnmElementoTipo enmElementoTipo);
		void setEnmValorTipo(EnmValorTipo enmValorTipo);
		void setIntOcorrenciaMax(int intOcorrenciaMax);
		void setIntOcorrenciaMin(int intOcorrenciaMin);
		void setIntTamanhoMax(int intTamanhoMax);
		void setIntTamanhoMin(int intTamanhoMin);
		void setIntValor(int intValor);
		void setStrIdentificador(string strIdentificador);
		void setStrValor(string strValor);

	protected:

	private:

		double _dblValor;
		EnmElementoTipo _enmElementoTipo = ELEMENTO;
		EnmValorTipo _enmValorTipo = ALFANUMERICO;
		int _intOcorrenciaMax;
		int _intOcorrenciaMin;
		int _intTamanhoMax;
		int _intTamanhoMin;
		int _intValor;
		Node* _pNdePai;
		string _strIdentificador;
		string _strValor;

		double getDblValor();
		EnmElementoTipo getEnmElementoTipo();
		EnmValorTipo getEnmValorTipo();
		int getIntCasasDecimais();
		int getIntOcorrenciaMax();
		int getIntOcorrenciaMin();
		int getIntTamanhoMax();
		int getIntTamanhoMin();
		int getIntValor();
		Node* getPNdePai();
		string getStrIdentificador();
		string getStrValor();
		void setPNdePai(Node* pNdePai);
	};
}
