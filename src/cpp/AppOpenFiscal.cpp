#include <iostream>
#include <stdio.h>

#include "AppOpenFiscal.h"
#include "Argumento.h"
#include "arquivo\xml\EnviNfe2ArqXml.h"
#include "arquivo\xml\node\NfeNode.h"
#include "Console.h"
#include "Utils.h"

using namespace OpenFiscal;
using namespace OpenFiscal_arquivo_xml;
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

int AppOpenFiscal::criarNfeXml()
{
	EnviNfe2ArqXml objEnviNfe2ArqXml;

	objEnviNfe2ArqXml.carregarDados();

	return 0;
}

int AppOpenFiscal::inutilizarNumeracao()
{
	return 0;
}

int AppOpenFiscal::carregarArg(char* argV[])
{
	if (!AppOpenFiscal::validarArrChrArg())
	{
		return 500;
	}

	for (size_t i = 0; i < sizeof(argV) - 1; i++)
	{
		Argumento::i.getPLstPStrArgumento()->push_back(argV[i]);
	}

	if (Argumento::i.getEnmAcaoPrincipal() == XML)
	{
		this->criarNfeXml();
	}

	return 0;
}

int AppOpenFiscal::registrarEvento()
{
	return 0;
}

void AppOpenFiscal::testar()
{
	for (string str : *Argumento::i.getPLstDirNfeXmlBruto())
	{
		Console::i.escrever(str);
	}

	system("pause");
}

int AppOpenFiscal::transmitirLote()
{
	return 0;
}

int AppOpenFiscal::transmitirNfe()
{
	return 0;
}

bool AppOpenFiscal::validarArrChrArg()
{
	// TODO: Validar argumentos de entrada.
	return true;
}

void main(int argC, char* argV[])
{
	AppOpenFiscal::i.carregarArg(argV);
	AppOpenFiscal::i.testar();
	return;
}