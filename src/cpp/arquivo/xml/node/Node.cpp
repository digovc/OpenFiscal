#include "Node.h"

using namespace OpenFiscal_arquivo_xml_node;

Node::Node(Node* pObjNodePai)
{
	this->setPObjNodePai(pObjNodePai);
}

Node::~Node()
{
}

EnmElementoTipo Node::getEnmElementoTipo(){
	return _enmElementoTipo;
}

EnmValorTipo Node::getEnmValorTipo(){
	return _enmValorTipo;
}

int Node::getIntOcorrenciaMax(){
	return _intOcorrenciaMax;
}

int Node::getIntOcorrenciaMin(){
	return _intOcorrenciaMin;
}

int Node::getIntTamanhoMax(){
	return _intTamanhoMax;
}

int Node::getIntTamanhoMin(){
	return _intTamanhoMin;
}

Node* Node::getPObjNodePai(){
	return _pObjNodePai;
}

string Node::getStrIdentificador(){
	return _strIdentificador;
}

void Node::setEnmElementoTipo(EnmElementoTipo enmElementoTipo){
	_enmElementoTipo = enmElementoTipo;
}

void Node::setEnmValorTipo(EnmValorTipo enmValorTipo){
	_enmValorTipo = enmValorTipo;
}

void Node::setIntOcorrenciaMax(int intOcorrenciaMax){
	_intOcorrenciaMax = intOcorrenciaMax;
}

void Node::setIntOcorrenciaMin(int intOcorrenciaMin){
	_intOcorrenciaMin = intOcorrenciaMin;
}

void Node::setIntTamanhoMax(int intTamanhoMax){
	_intTamanhoMax = intTamanhoMax;
}

void Node::setIntTamanhoMin(int intTamanhoMin){
	_intTamanhoMin = intTamanhoMin;
}

void Node::setPObjNodePai(Node* pObjNodePai){
	_pObjNodePai = pObjNodePai;
}

void Node::setStrIdentificador(string strIdentificador){
	_strIdentificador = strIdentificador;
}