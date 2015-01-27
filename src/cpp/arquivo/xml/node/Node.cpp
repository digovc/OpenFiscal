#include "Node.h"

using namespace std;

using namespace OpenFiscal_arquivo_xml_node;

Node::Node(Node* pNdePai)
{
	this->setPNdePai(pNdePai);
}

Node::~Node()
{
}

double Node::getDblValor()
{

	_dblValor = stod(this->getStrValor());

	return _dblValor;
}

EnmElementoTipo Node::getEnmElementoTipo()
{
	return _enmElementoTipo;
}

EnmValorTipo Node::getEnmValorTipo()
{
	return _enmValorTipo;
}

int Node::getIntOcorrenciaMax()
{
	return _intOcorrenciaMax;
}

int Node::getIntOcorrenciaMin()
{
	return _intOcorrenciaMin;
}

int Node::getIntTamanhoMax()
{
	return _intTamanhoMax;
}

int Node::getIntTamanhoMin()
{
	return _intTamanhoMin;
}

int Node::getIntValor()
{

	_intValor = stoi(this->getStrValor());

	return _intValor;
}

Node* Node::getPNdePai()
{
	return _pNdePai;
}

string Node::getStrIdentificador()
{
	return _strIdentificador;
}

string Node::getStrValor()
{
	return _strValor;
}

void Node::setDblValor(double dblValor)
{

	_dblValor = dblValor;

	this->setStrValor(to_string(_dblValor));
}

void Node::setEnmElementoTipo(EnmElementoTipo enmElementoTipo)
{
	_enmElementoTipo = enmElementoTipo;
}

void Node::setEnmValorTipo(EnmValorTipo enmValorTipo)
{
	_enmValorTipo = enmValorTipo;
}

void Node::setIntOcorrenciaMax(int intOcorrenciaMax)
{
	_intOcorrenciaMax = intOcorrenciaMax;
}

void Node::setIntOcorrenciaMin(int intOcorrenciaMin)
{
	_intOcorrenciaMin = intOcorrenciaMin;
}

void Node::setIntTamanhoMax(int intTamanhoMax)
{
	_intTamanhoMax = intTamanhoMax;
}

void Node::setIntTamanhoMin(int intTamanhoMin)
{
	_intTamanhoMin = intTamanhoMin;
}

void Node::setIntValor(int intValor)
{
	_intValor = intValor;

	this->setStrValor(to_string(_intValor));
}

void Node::setPNdePai(Node* pNdePai)
{
	_pNdePai = pNdePai;
}

void Node::setStrIdentificador(string strIdentificador)
{
	_strIdentificador = strIdentificador;
}

void Node::setStrValor(string strValor)
{
	_strValor = strValor;
}