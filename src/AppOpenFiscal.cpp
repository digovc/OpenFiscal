#include <stdio.h>
#include <iostream>

#include "AppOpenFiscal.h"
#include "arquivo\xml\node\NfeNode.h"
#include "Console.h"
#include "Utils.h"

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

bool AppOpenFiscal::validarArg(char* argv[])
{
	return true;
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
	if (!AppOpenFiscal::validarArg(argv))
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

void main(int argc, char* argv[])
{
	AppOpenFiscal::i.processarArg(argv);
	AppOpenFiscal::i.testar();
}

void AppOpenFiscal::testar()
{
	Console::i.escrever(AppOpenFiscal::i.getStrNome());
	Console::i.escrever(AppOpenFiscal::i.getStrDescricao());

	do
	{
		if ("sair" == Console::i.lerString("Digite \"sair\" para abandonar o sistema."))
		{
			return;
		}
	} while (true);

	system("pause");
}