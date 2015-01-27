#pragma once

#include "../ArquivoXml.h"

using namespace OpenFiscal_arquivo_xml;

namespace OpenFiscal_arquivo_xml_obj
{
	class ObjetoMain :
		public ArquivoXml
	{
	public:
		ObjetoMain();
		~ObjetoMain();
	};
}