#include <iostream>

#include "Console.h"

using namespace OpenFiscal;

Console Console::i;

Console::Console()
{
}

Console::~Console()
{
}

double Console::lerDouble(string strMsg = nullptr)
{
	return stod(this->lerString(strMsg));
}

int Console::lerInteger(string strMsg = nullptr)
{
	return stoi(this->lerString(strMsg));
}

string Console::lerString(string strMsg = nullptr)
{
	string strResultado;

	this->escrever(strMsg);

	cin >> strResultado;

	return strResultado;
}

void Console::escrever(string strMsg)
{
	if (strMsg.empty())
	{
		return;
	}

	strMsg = "echo " + strMsg;
	system(strMsg.c_str());
}