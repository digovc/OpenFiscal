#include "ArquivoXml.h"
#include "Node.h"

using namespace OpenFiscal_arquivo_xml;

ArquivoXml::ArquivoXml()
{
}

ArquivoXml::~ArquivoXml()
{
}

string ArquivoXml::getStrNamespace(){
	return _strNamespace;
}

void ArquivoXml::setStrNamespace(string strNamespace){
	_strNamespace = strNamespace;
}

vector<Node*> ArquivoXml::getLstPObjNode(){
	return _lstPObjNode;
}