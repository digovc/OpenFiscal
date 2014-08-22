#include "App.h"
#include "stdio.h"
#include "../lib/rapidxml-1.13/rapidxml.hpp"
#include "../lib/rapidxml-1.13/rapidxml_print.hpp"
#include <fstream>
#include <sstream>

using namespace OpenFiscal;
using namespace rapidxml;

App::App()
{
}


App::~App()
{
}

void main(){

	App* app;

	app = new App();
	app->setStrNome("OpenFiscal");

	for each (char chr in app->getStrNomeSimplificado())
	{
		printf("%c", chr);
	}

	printf("1",app->getStrNomeSimplificado());
}