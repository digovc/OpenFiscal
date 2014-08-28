#include "Node.h"
#include "ArquivoXml.h"

using namespace OpenFiscal_arquivo_xml;

Node::Node(ArquivoXml* pArqXml)
{
	this->setPArqXml(pArqXml);
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

int Node::getIntCasasDecimais(){
	return _intCasasDecimais;
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

ArquivoXml* Node::getPArqXml(){
	return _pArqXml;
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

void Node::setIntCasasDecimais(int intCasasDecimais){
	_intCasasDecimais = intCasasDecimais;
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

void Node::setPArqXml(ArquivoXml* pArqXml){

	_pArqXml = pArqXml;

	if (_pArqXml == nullptr)
	{
		return;
	}

	_pArqXml->getLstPObjNode().push_back(this);
}

void Node::setPObjNodePai(Node* pObjNodePai){
	_pObjNodePai = pObjNodePai;
}

void Node::setStrIdentificador(string strIdentificador){
	_strIdentificador = strIdentificador;
}