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

		Node(Node* pObjNodePai);
		~Node();

		void setEnmElementoTipo(EnmElementoTipo enmElementoTipo);
		void setEnmValorTipo(EnmValorTipo enmValorTipo);
		void setIntOcorrenciaMax(int intOcorrenciaMax);
		void setIntOcorrenciaMin(int intOcorrenciaMin);
		void setIntTamanhoMax(int intTamanhoMax);
		void setIntTamanhoMin(int intTamanhoMin);
		void setStrIdentificador(string strIdentificador);

	protected:


	private:

		EnmElementoTipo _enmElementoTipo = ELEMENTO;
		EnmValorTipo _enmValorTipo = ALFANUMERICO;
		int _intOcorrenciaMax;
		int _intOcorrenciaMin;
		int _intTamanhoMax;
		int _intTamanhoMin;
		Node* _pObjNodePai;
		string _strIdentificador;

		EnmElementoTipo getEnmElementoTipo();
		EnmValorTipo getEnmValorTipo();
		int getIntCasasDecimais();
		int getIntOcorrenciaMax();
		int getIntOcorrenciaMin();
		int getIntTamanhoMax();
		int getIntTamanhoMin();
		Node* getPObjNodePai();
		string getStrIdentificador();
		void setPObjNodePai(Node* pObjNodePai);
	};
}
