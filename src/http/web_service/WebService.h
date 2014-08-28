#pragma once

#include "..\..\Objeto.h"
#include "..\..\arquivo\xml\schema\Schema.h"

using namespace OpenFiscal;
using namespace OpenFiscal_arquivo_xml_schema;

namespace OpenFiscal_http_web_service
{
	class WebService :
		public Objeto
	{

	public:

		WebService();
		~WebService();

	protected:

		bool _booSincrono;
		string _strResposta;
		string _url;
		
		bool getBooSincrono();
		virtual Schema* getPObjSchemaEntrada();
		virtual Schema* getPObjSchemaSaida();
		string getStrResposta();
		string getUrl();
		void setBooSincrono(bool booSincrono);
		void setStrResposta(string strResposta);
		void setUrl(string url);

	private:

		Schema* _pObjSchemaEntrada;
		Schema* _pObjSchemaSaida;
	};


}