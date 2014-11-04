#pragma once

#include "../../Objeto.h"
#include "../../arquivo/xml/ArquivoXml.h"

using namespace OpenFiscal;
using namespace OpenFiscal_arquivo_xml;

namespace OpenFiscal_http_web_service
{
	class WebService :
		public Objeto
	{

	public:

		WebService();
		~WebService();

		void setPArqXmlIn(ArquivoXml* pArqXmlIn);

	protected:
		
		ArquivoXml* getPArqXmlIn();
		bool getBooSincrono();
		string getStrResposta();
		string getUrl();
		void setBooSincrono(bool booSincrono);
		void setStrResposta(string strResposta);
		void setUrl(string url);

	private:

		ArquivoXml* _pArqXmlIn;
		bool _booSincrono;
		string _strResposta;
		string _url;

	};


}