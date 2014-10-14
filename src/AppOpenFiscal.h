#pragma once

#include "App.h"

/**
C�digo de erro para indicar que os argumentos de entrada
s�o inv�lidos.
*/
#define INT_ERROR_ARG_INVALIDO 500;

namespace OpenFiscal{

	class AppOpenFiscal :
		public App
	{

	public:

		/**
		Atributo para manter a �nica inst�ncia do aplicativo
		durante o seu ciclo de vida.
		*/
		static AppOpenFiscal i;

		/**
		M�todo para testes no decorrer do desenvolvimento.
		*/
		void testar();

		/**
		Processa os par�metros de entrada para executar os comandos
		passados pelo usu�rio.
		*/
		int processarArg(char* argv[]);

		bool validarArg(char* argv[]);
		int assinarNfeXml();
		int cancelarNfe();
		int consultarCadastro();
		int consultarLote();
		int consultarNfe();
		int consultarStatusServer();
		int gerarNfeXml();
		int inutilizarNumeracao();
		int registrarEvento();
		int transmitirLote();
		int transmitirNfe();

	protected:

	private:

		AppOpenFiscal();
		~AppOpenFiscal();

	};

}
