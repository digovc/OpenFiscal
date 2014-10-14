#include "ArquivoXml.h"

using namespace OpenFiscal_arquivo_xml;

ArquivoXml::ArquivoXml()
{
}

ArquivoXml::~ArquivoXml()
{
}

vector<Node*> ArquivoXml::getLstPObjNode(){
	return _lstPObjNode;
}

string ArquivoXml::getStrNamespace(){
	return _strNamespace;
}

xml_document<>* ArquivoXml::getXmlDoc()
{

	// TODO: Parei aqui, na criãção do arquivo.
	if (_xmlDoc != nullptr)
	{
		return _xmlDoc;
	}

	_xmlDoc = new xml_document<>();
	xml_node<>* decl = _xmlDoc->allocate_node(node_declaration);

	decl->append_attribute(_xmlDoc->allocate_attribute("version", "1.0"));
	decl->append_attribute(_xmlDoc->allocate_attribute("encoding", "utf-8"));	
	
	_xmlDoc->append_node(decl);
	
	return _xmlDoc;
}

void ArquivoXml::setStrNamespace(string strNamespace){
	_strNamespace = strNamespace;
}