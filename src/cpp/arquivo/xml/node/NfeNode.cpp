#include "NfeNode.h"

using namespace OpenFiscal_arquivo_xml_node;

NfeNode::NfeNode(Node* pNdePai) :Node(pNdePai)
{
	this->setEnmElementoTipo(RAIZ);
	this->setEnmValorTipo(NENHUM);
	this->setIntOcorrenciaMax(1);
	this->setIntOcorrenciaMin(1);
	this->setIntTamanhoMax(-1);
	this->setIntTamanhoMin(-1);
	this->setStrIdentificador("-");
	this->setStrNome("NFe");
}

NfeNode::~NfeNode()
{
	// TODO: Deletar objetos criados.
}

Node* NfeNode::getPNdeCdv()
{
	if (_pNdeCdv != nullptr)
	{
		return _pNdeCdv;
	}

	_pNdeCdv = new Node(this->getPNdeIde());

	_pNdeCdv->setEnmElementoTipo(ELEMENTO);
	_pNdeCdv->setEnmValorTipo(NUMERICO);
	_pNdeCdv->setIntOcorrenciaMax(1);
	_pNdeCdv->setIntOcorrenciaMin(1);
	_pNdeCdv->setIntTamanhoMax(1);
	_pNdeCdv->setIntTamanhoMin(1);
	_pNdeCdv->setStrIdentificador("B23");
	_pNdeCdv->setStrNome("cDV");

	return _pNdeCdv;
}

Node* NfeNode::getPNdeCmunfg()
{
	if (_pNdeCmunfg != nullptr)
	{
		return _pNdeCmunfg;
	}

	_pNdeCmunfg = new Node(this->getPNdeIde());

	_pNdeCmunfg->setEnmElementoTipo(ELEMENTO);
	_pNdeCmunfg->setEnmValorTipo(NUMERICO);
	_pNdeCmunfg->setIntOcorrenciaMax(1);
	_pNdeCmunfg->setIntOcorrenciaMin(1);
	_pNdeCmunfg->setIntTamanhoMax(7);
	_pNdeCmunfg->setIntTamanhoMin(7);
	_pNdeCmunfg->setStrIdentificador("B12");
	_pNdeCmunfg->setStrNome("cMunFG");

	return _pNdeCmunfg;
}

Node* NfeNode::getPNdeCnf()
{
	if (_pNdeCnf != nullptr)
	{
		return _pNdeCnf;
	}

	_pNdeCnf = new Node(this->getPNdeIde());

	_pNdeCnf->setEnmElementoTipo(ELEMENTO);
	_pNdeCnf->setEnmValorTipo(NUMERICO);
	_pNdeCnf->setIntOcorrenciaMax(1);
	_pNdeCnf->setIntOcorrenciaMin(1);
	_pNdeCnf->setIntTamanhoMax(8);
	_pNdeCnf->setIntTamanhoMin(8);
	_pNdeCnf->setStrIdentificador("B03");
	_pNdeCnf->setStrNome("cNF");

	return _pNdeCnf;
}

Node* NfeNode::getPNdeCuf()
{
	if (_pNdeCuf != nullptr)
	{
		return _pNdeCuf;
	}

	_pNdeCuf = new Node(this->getPNdeIde());

	_pNdeCuf->setEnmElementoTipo(ELEMENTO);
	_pNdeCuf->setEnmValorTipo(NUMERICO);
	_pNdeCuf->setIntOcorrenciaMax(1);
	_pNdeCuf->setIntOcorrenciaMin(1);
	_pNdeCuf->setIntTamanhoMax(2);
	_pNdeCuf->setIntTamanhoMin(2);
	_pNdeCuf->setStrIdentificador("B02");
	_pNdeCuf->setStrNome("cUF");

	return _pNdeCuf;
}

Node* NfeNode::getPNdeDhcont()
{
	if (_pNdeDhcont != nullptr)
	{
		return _pNdeDhcont;
	}

	_pNdeDhcont = new Node(this->getPNdeX());

	_pNdeDhcont->setEnmElementoTipo(ELEMENTO);
	_pNdeDhcont->setEnmValorTipo(DATA_HORA);
	_pNdeDhcont->setIntOcorrenciaMax(1);
	_pNdeDhcont->setIntOcorrenciaMin(1);
	_pNdeDhcont->setIntTamanhoMax(-1);
	_pNdeDhcont->setIntTamanhoMin(-1);
	_pNdeDhcont->setStrIdentificador("B28");
	_pNdeDhcont->setStrNome("dhCont");

	return _pNdeDhcont;
}

Node* NfeNode::getPNdeDhemi()
{
	if (_pNdeDhemi != nullptr)
	{
		return _pNdeDhemi;
	}

	_pNdeDhemi = new Node(this->getPNdeIde());

	_pNdeDhemi->setEnmElementoTipo(ELEMENTO);
	_pNdeDhemi->setEnmValorTipo(DATA_HORA);
	_pNdeDhemi->setIntOcorrenciaMax(1);
	_pNdeDhemi->setIntOcorrenciaMin(1);
	_pNdeDhemi->setIntTamanhoMax(-1);
	_pNdeDhemi->setIntTamanhoMin(-1);
	_pNdeDhemi->setStrIdentificador("B09");
	_pNdeDhemi->setStrNome("dhEmi");

	return _pNdeDhemi;
}

Node* NfeNode::getPNdeDhsaient()
{
	if (_pNdeDhsaient != nullptr)
	{
		return _pNdeDhsaient;
	}

	_pNdeDhsaient = new Node(this->getPNdeIde());

	_pNdeDhsaient->setEnmElementoTipo(ELEMENTO);
	_pNdeDhsaient->setEnmValorTipo(DATA_HORA);
	_pNdeDhsaient->setIntOcorrenciaMax(1);
	_pNdeDhsaient->setIntOcorrenciaMin(0);
	_pNdeDhsaient->setIntTamanhoMax(10);
	_pNdeDhsaient->setIntTamanhoMin(10);
	_pNdeDhsaient->setStrIdentificador("B10");
	_pNdeDhsaient->setStrNome("dhSaiEnt");

	return _pNdeDhsaient;
}

Node* NfeNode::getPNdeFinnfe()
{
	if (_pNdeFinnfe != nullptr)
	{
		return _pNdeFinnfe;
	}

	_pNdeFinnfe = new Node(this->getPNdeIde());

	_pNdeFinnfe->setEnmElementoTipo(ELEMENTO);
	_pNdeFinnfe->setEnmValorTipo(NUMERICO);
	_pNdeFinnfe->setIntOcorrenciaMax(1);
	_pNdeFinnfe->setIntOcorrenciaMin(1);
	_pNdeFinnfe->setIntTamanhoMax(1);
	_pNdeFinnfe->setIntTamanhoMin(1);
	_pNdeFinnfe->setStrIdentificador("B25");
	_pNdeFinnfe->setStrNome("finNFe");

	return _pNdeFinnfe;
}

Node* NfeNode::getPNdeId()
{
	if (_pNdeId != nullptr)
	{
		return _pNdeId;
	}

	_pNdeId = new Node(this->getPNdeInfnfe());

	_pNdeId->setEnmElementoTipo(ID);
	_pNdeId->setEnmValorTipo(ALFANUMERICO);
	_pNdeId->setIntOcorrenciaMax(1);
	_pNdeId->setIntOcorrenciaMin(1);
	_pNdeId->setIntTamanhoMax(47);
	_pNdeId->setIntTamanhoMin(47);
	_pNdeId->setStrIdentificador("A03");
	_pNdeId->setStrNome("Id");

	return _pNdeId;
}

Node* NfeNode::getPNdeIddest()
{
	if (_pNdeIddest != nullptr)
	{
		return _pNdeIddest;
	}

	_pNdeIddest = new Node(this->getPNdeIde());

	_pNdeIddest->setEnmElementoTipo(ELEMENTO);
	_pNdeIddest->setEnmValorTipo(NUMERICO);
	_pNdeIddest->setIntOcorrenciaMax(1);
	_pNdeIddest->setIntOcorrenciaMin(1);
	_pNdeIddest->setIntTamanhoMax(1);
	_pNdeIddest->setIntTamanhoMin(1);
	_pNdeIddest->setStrIdentificador("B11a");
	_pNdeIddest->setStrNome("idDest");

	return _pNdeIddest;
}

Node* NfeNode::getPNdeIde()
{
	if (_pNdeId != nullptr)
	{
		return _pNdeId;
	}

	_pNdeId = new Node(this->getPNdeInfnfe());

	_pNdeId->setEnmElementoTipo(GRUPO);
	_pNdeId->setEnmValorTipo(NENHUM);
	_pNdeId->setIntOcorrenciaMax(1);
	_pNdeId->setIntOcorrenciaMin(1);
	_pNdeId->setIntTamanhoMax(-1);
	_pNdeId->setIntTamanhoMin(-1);
	_pNdeId->setStrIdentificador("B01");
	_pNdeId->setStrNome("ide");

	return _pNdeId;
}

Node* NfeNode::getPNdeIndfinal()
{
	if (_pNdeIndfinal != nullptr)
	{
		return _pNdeIndfinal;
	}

	_pNdeIndfinal = new Node(this->getPNdeIde());

	_pNdeIndfinal->setEnmElementoTipo(ELEMENTO);
	_pNdeIndfinal->setEnmValorTipo(NUMERICO);
	_pNdeIndfinal->setIntOcorrenciaMax(1);
	_pNdeIndfinal->setIntOcorrenciaMin(1);
	_pNdeIndfinal->setIntTamanhoMax(1);
	_pNdeIndfinal->setIntTamanhoMin(1);
	_pNdeIndfinal->setStrIdentificador("B25a");
	_pNdeIndfinal->setStrNome("indFinal");

	return _pNdeIndfinal;
}

Node* NfeNode::getPNdeIndpag()
{
	if (_pNdeIndpag != nullptr)
	{
		return _pNdeIndpag;
	}

	_pNdeIndpag = new Node(this->getPNdeIde());

	_pNdeIndpag->setEnmElementoTipo(ELEMENTO);
	_pNdeIndpag->setEnmValorTipo(NUMERICO);
	_pNdeIndpag->setIntOcorrenciaMax(1);
	_pNdeIndpag->setIntOcorrenciaMin(1);
	_pNdeIndpag->setIntTamanhoMax(1);
	_pNdeIndpag->setIntTamanhoMin(1);
	_pNdeIndpag->setStrIdentificador("B05");
	_pNdeIndpag->setStrNome("indPag");

	return _pNdeIndpag;
}

Node* NfeNode::getPNdeIndpres()
{
	if (_pNdeIndpres != nullptr)
	{
		return _pNdeIndpres;
	}

	_pNdeIndpres = new Node(this->getPNdeIde());

	_pNdeIndpres->setEnmElementoTipo(ELEMENTO);
	_pNdeIndpres->setEnmValorTipo(NUMERICO);
	_pNdeIndpres->setIntOcorrenciaMax(1);
	_pNdeIndpres->setIntOcorrenciaMin(1);
	_pNdeIndpres->setIntTamanhoMax(1);
	_pNdeIndpres->setIntTamanhoMin(1);
	_pNdeIndpres->setStrIdentificador("B25b");
	_pNdeIndpres->setStrNome("indPres");

	return _pNdeIndpres;
}

Node* NfeNode::getPNdeInfnfe()
{
	if (_pNdeInfnfe != nullptr)
	{
		return _pNdeInfnfe;
	}

	_pNdeInfnfe = new Node(this);

	_pNdeInfnfe->setEnmElementoTipo(GRUPO);
	_pNdeInfnfe->setEnmValorTipo(NENHUM);
	_pNdeInfnfe->setIntOcorrenciaMax(1);
	_pNdeInfnfe->setIntOcorrenciaMin(1);
	_pNdeInfnfe->setIntTamanhoMax(-1);
	_pNdeInfnfe->setIntTamanhoMin(-1);
	_pNdeInfnfe->setStrIdentificador("A01");
	_pNdeInfnfe->setStrNome("infNFe");

	return _pNdeInfnfe;
}

Node* NfeNode::getPNdeMod()
{
	if (_pNdeMod != nullptr)
	{
		return _pNdeMod;
	}

	_pNdeMod = new Node(this->getPNdeIde());

	_pNdeMod->setEnmElementoTipo(ELEMENTO);
	_pNdeMod->setEnmValorTipo(ALFANUMERICO);
	_pNdeMod->setIntOcorrenciaMax(1);
	_pNdeMod->setIntOcorrenciaMin(1);
	_pNdeMod->setIntTamanhoMax(2);
	_pNdeMod->setIntTamanhoMin(2);
	_pNdeMod->setStrIdentificador("B06");
	_pNdeMod->setStrNome("mod");

	return _pNdeMod;
}

Node* NfeNode::getPNdeNatop()
{
	if (_pNdeNatop != nullptr)
	{
		return _pNdeNatop;
	}

	_pNdeNatop = new Node(this->getPNdeIde());

	_pNdeNatop->setEnmElementoTipo(ELEMENTO);
	_pNdeNatop->setEnmValorTipo(ALFANUMERICO);
	_pNdeNatop->setIntOcorrenciaMax(1);
	_pNdeNatop->setIntOcorrenciaMin(1);
	_pNdeNatop->setIntTamanhoMax(60);
	_pNdeNatop->setIntTamanhoMin(1);
	_pNdeNatop->setStrIdentificador("B04");
	_pNdeNatop->setStrNome("natOp");

	return _pNdeNatop;
}

Node* NfeNode::getPNdeNnf()
{
	if (_pNdeNnf != nullptr)
	{
		return _pNdeNnf;
	}

	_pNdeNnf = new Node(this->getPNdeIde());

	_pNdeNnf->setEnmElementoTipo(ELEMENTO);
	_pNdeNnf->setEnmValorTipo(NUMERICO);
	_pNdeNnf->setIntOcorrenciaMax(1);
	_pNdeNnf->setIntOcorrenciaMin(1);
	_pNdeNnf->setIntTamanhoMax(9);
	_pNdeNnf->setIntTamanhoMin(1);
	_pNdeNnf->setStrIdentificador("B08");
	_pNdeNnf->setStrNome("nNF");

	return _pNdeNnf;
}

Node* NfeNode::getPNdeProcemi()
{
	if (_pNdeProcemi != nullptr)
	{
		return _pNdeProcemi;
	}

	_pNdeProcemi = new Node(this->getPNdeIde());

	_pNdeProcemi->setEnmElementoTipo(ELEMENTO);
	_pNdeProcemi->setEnmValorTipo(NUMERICO);
	_pNdeProcemi->setIntOcorrenciaMax(1);
	_pNdeProcemi->setIntOcorrenciaMin(1);
	_pNdeProcemi->setIntTamanhoMax(1);
	_pNdeProcemi->setIntTamanhoMin(1);
	_pNdeProcemi->setStrIdentificador("B26");
	_pNdeProcemi->setStrNome("procEmi");

	return _pNdeProcemi;
}

Node* NfeNode::getPNdeSerie()
{
	if (_pNdeSerie != nullptr)
	{
		return _pNdeSerie;
	}

	_pNdeSerie = new Node(this->getPNdeIde());

	_pNdeSerie->setEnmElementoTipo(ELEMENTO);
	_pNdeSerie->setEnmValorTipo(NUMERICO);
	_pNdeSerie->setIntOcorrenciaMax(1);
	_pNdeSerie->setIntOcorrenciaMin(1);
	_pNdeSerie->setIntTamanhoMax(3);
	_pNdeSerie->setIntTamanhoMin(1);
	_pNdeSerie->setStrIdentificador("B07");
	_pNdeSerie->setStrNome("serie");

	return _pNdeSerie;
}

Node* NfeNode::getPNdeTpamb()
{
	if (_pNdeTpamb != nullptr)
	{
		return _pNdeTpamb;
	}

	_pNdeTpamb = new Node(this->getPNdeIde());

	_pNdeTpamb->setEnmElementoTipo(ELEMENTO);
	_pNdeTpamb->setEnmValorTipo(NUMERICO);
	_pNdeTpamb->setIntOcorrenciaMax(1);
	_pNdeTpamb->setIntOcorrenciaMin(1);
	_pNdeTpamb->setIntTamanhoMax(1);
	_pNdeTpamb->setIntTamanhoMin(1);
	_pNdeTpamb->setStrIdentificador("B24");
	_pNdeTpamb->setStrNome("tpAmb");

	return _pNdeTpamb;
}

Node* NfeNode::getPNdeTpemis()
{
	if (_pNdeTpemis != nullptr)
	{
		return _pNdeTpemis;
	}

	_pNdeTpemis = new Node(this->getPNdeIde());

	_pNdeTpemis->setEnmElementoTipo(ELEMENTO);
	_pNdeTpemis->setEnmValorTipo(NUMERICO);
	_pNdeTpemis->setIntOcorrenciaMax(1);
	_pNdeTpemis->setIntOcorrenciaMin(1);
	_pNdeTpemis->setIntTamanhoMax(1);
	_pNdeTpemis->setIntTamanhoMin(1);
	_pNdeTpemis->setStrIdentificador("B22");
	_pNdeTpemis->setStrNome("tpEmis");

	return _pNdeTpemis;
}

Node* NfeNode::getPNdeTpimp()
{
	if (_pNdeTpimp != nullptr)
	{
		return _pNdeTpimp;
	}

	_pNdeTpimp = new Node(this->getPNdeIde());

	_pNdeTpimp->setEnmElementoTipo(ELEMENTO);
	_pNdeTpimp->setEnmValorTipo(NUMERICO);
	_pNdeTpimp->setIntOcorrenciaMax(1);
	_pNdeTpimp->setIntOcorrenciaMin(1);
	_pNdeTpimp->setIntTamanhoMax(1);
	_pNdeTpimp->setIntTamanhoMin(1);
	_pNdeTpimp->setStrIdentificador("B21");
	_pNdeTpimp->setStrNome("tpImp");

	return _pNdeTpimp;
}

Node* NfeNode::getPNdeTpnf()
{
	if (_pNdeTpnf != nullptr)
	{
		return _pNdeTpnf;
	}

	_pNdeTpnf = new Node(this->getPNdeIde());

	_pNdeTpnf->setEnmElementoTipo(ELEMENTO);
	_pNdeTpnf->setEnmValorTipo(NUMERICO);
	_pNdeTpnf->setIntOcorrenciaMax(1);
	_pNdeTpnf->setIntOcorrenciaMin(1);
	_pNdeTpnf->setIntTamanhoMax(1);
	_pNdeTpnf->setIntTamanhoMin(1);
	_pNdeTpnf->setStrIdentificador("B11");
	_pNdeTpnf->setStrNome("tpNF");

	return _pNdeSerie;
}

Node* NfeNode::getPNdeVerproc()
{
	if (_pNdeVerproc != nullptr)
	{
		return _pNdeVerproc;
	}

	_pNdeVerproc = new Node(this->getPNdeIde());

	_pNdeVerproc->setEnmElementoTipo(ELEMENTO);
	_pNdeVerproc->setEnmValorTipo(ALFANUMERICO);
	_pNdeVerproc->setIntOcorrenciaMax(1);
	_pNdeVerproc->setIntOcorrenciaMin(1);
	_pNdeVerproc->setIntTamanhoMax(20);
	_pNdeVerproc->setIntTamanhoMin(1);
	_pNdeVerproc->setStrIdentificador("B27");
	_pNdeVerproc->setStrNome("verProc");

	return _pNdeVerproc;
}

Node* NfeNode::getPNdeVersao()
{
	if (_pNdeVersao != nullptr)
	{
		return _pNdeVersao;
	}

	_pNdeVersao = new Node(this->getPNdeInfnfe());

	_pNdeVersao->setEnmElementoTipo(A);
	_pNdeVersao->setEnmValorTipo(ALFANUMERICO);
	_pNdeVersao->setIntOcorrenciaMax(1);
	_pNdeVersao->setIntOcorrenciaMin(1);
	_pNdeVersao->setIntTamanhoMax(4);
	_pNdeVersao->setIntTamanhoMin(1);
	_pNdeVersao->setStrIdentificador("A02");
	_pNdeVersao->setStrNome("versao");

	return _pNdeVersao;
}

Node* NfeNode::getPNdeX()
{
	if (_pNdeX != nullptr)
	{
		return _pNdeX;
	}

	_pNdeX = new Node(this->getPNdeIde());

	_pNdeX->setEnmElementoTipo(GRUPO);
	_pNdeX->setEnmValorTipo(NENHUM);
	_pNdeX->setIntOcorrenciaMax(1);
	_pNdeX->setIntOcorrenciaMin(0);
	_pNdeX->setIntTamanhoMax(-1);
	_pNdeX->setIntTamanhoMin(-1);
	_pNdeX->setStrIdentificador("B27.1");
	_pNdeX->setStrNome("-x-");

	return _pNdeX;
}

Node* NfeNode::getPNdeXjust()
{
	if (_pNdeXjust != nullptr)
	{
		return _pNdeXjust;
	}

	_pNdeXjust = new Node(this->getPNdeX());

	_pNdeXjust->setEnmElementoTipo(ELEMENTO);
	_pNdeXjust->setEnmValorTipo(ALFANUMERICO);
	_pNdeXjust->setIntOcorrenciaMax(1);
	_pNdeXjust->setIntOcorrenciaMin(1);
	_pNdeXjust->setIntTamanhoMax(256);
	_pNdeXjust->setIntTamanhoMin(15);
	_pNdeXjust->setStrIdentificador("B29");
	_pNdeXjust->setStrNome("xJust");

	return _pNdeXjust;
}

vector<Node*> NfeNode::getLstPNdeNfref()
{
	return _lstPNdeNfref;
}