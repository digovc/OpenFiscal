#include <stdio.h>
#include <iostream>

#include "AppOpenFiscal.h"
#include "Utils.h"
#include "arquivo\xml\node\NfeNode.h"

using namespace OpenFiscal;
using namespace OpenFiscal_arquivo_xml_node;

AppOpenFiscal AppOpenFiscal::i;

AppOpenFiscal::AppOpenFiscal()
{
	this->setStrNome("OpenFiscal");
	this->setStrDescricao("Biblioteca para gerar, autorizar e transmitir arquivos fiscais brasileiros.");
	this->setStrVersao("0.0.2");
}

AppOpenFiscal::~AppOpenFiscal()
{
}

int AppOpenFiscal::assinarNfeXml()
{
	return 0;
}

int AppOpenFiscal::cancelarNfe()
{
	return 0;
}

int AppOpenFiscal::consultarCadastro()
{
	return 0;
}

int AppOpenFiscal::consultarLote()
{
	return 0;
}

int AppOpenFiscal::consultarNfe()
{
	return 0;
}

int AppOpenFiscal::consultarStatusServer()
{
	return 0;
}

int AppOpenFiscal::gerarNfeXml()
{
	return 0;
}

int AppOpenFiscal::inutilizarNumeracao()
{
	return 0;
}

int AppOpenFiscal::processarArg(char* argv[])
{
	if (AppOpenFiscal::validarArg(argv))
	{
		return 500;
	}

	return 0;
}

int AppOpenFiscal::registrarEvento()
{
	return 0;
}

int AppOpenFiscal::transmitirLote()
{
	return 0;
}

int AppOpenFiscal::transmitirNfe()
{
	return 0;
}

int AppOpenFiscal::validarArg(char* argv[])
{
	return 0;
}


void main(int argc, char* argv[])
{
	AppOpenFiscal::i.processarArg(argv);
	AppOpenFiscal::i.testar();
}

void AppOpenFiscal::testar()
{
	AppOpenFiscal app;

	cout << app.getStrNome();
	cout << "\n";
	cout << app.getStrDescricao();
	cout << "\n";
	cout << "\n\n\n\n\n";
	cout << "\n\n\n\n\n";
	cout << "\n\n\n\n\n";
	cout << "\n\n\n\n\n";

	

	NfeNode objNfeNode(NULL);
	objNfeNode.getPObjNodeCdv();
	objNfeNode.getPObjNodeCdv();

	system("pause");
}
