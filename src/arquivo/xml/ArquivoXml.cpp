#include "ArquivoXml.h"

using namespace OpenFiscal_arquivo_xml;
using namespace OpenFiscal_arquivo_xml_node;

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