#include <stdio.h>
#include <iostream>

#include "AppOpenFiscal.h"
#include "Utils.h"

using namespace OpenFiscal;

AppOpenFiscal AppOpenFiscal::i;

AppOpenFiscal::AppOpenFiscal()
{
	this->setStrNome("OpenFiscal");
	this->setStrDescricao("Biblioteca para gerar, altorizar e enviar arquivos fiscais brasileiros.");
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
	AppOpenFiscal* pApp2;

	app.setStrNome("App1");

	cout << app.getStrNome();
	cout << "\n";

	pApp2 = &app;

	pApp2->setStrNome("App2");

	cout << pApp2->getStrNome();
	cout << "\n";

	cout << app.getStrNome();
	cout << "\n";

	cout << "\n\n\n\n\n";
	cout << "\n\n\n\n\n";
	cout << "\n\n\n\n\n";
	cout << "\n\n\n\n\n";

	system("pause");
}
