#pragma once

#include <vector>

#include "App.h"

/**
Código de erro para indicar que os argumentos de entrada
são inválidos.
*/
#define INT_ERROR_ARG_INVALIDO 500;

namespace OpenFiscal{

	class AppOpenFiscal :
		public App
	{

	public:

		/**
		Atributo para manter a única instância do aplicativo
		durante o seu ciclo de vida.
		*/
		static AppOpenFiscal i;

		/**
		Processa os parâmetros de entrada para executar os comandos
		passados pelo usuário.
		*/
		int carregarArg(char* argv[]);

		/**
		Método para testes no decorrer do desenvolvimento.
		*/
		void testar();

	protected:

	private:

		AppOpenFiscal();
		~AppOpenFiscal();
	
		bool validarArrChrArg();
		int assinarNfeXml();
		int cancelarNfe();
		int consultarCadastro();
		int consultarLote();
		int consultarNfe();
		int consultarStatusServer();
		int criarNfeXml();
		int inutilizarNumeracao();
		int registrarEvento();
		int transmitirLote();
		int transmitirNfe();
	};
}
