#include "NfeNode.h"

using namespace OpenFiscal_arquivo_xml_node;

NfeNode::NfeNode(Node* pObjNodePai) :Node(pObjNodePai)
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

Node* NfeNode::getPObjNodeCdv()
{
	if (_pObjNodeCdv != nullptr)
	{
		return _pObjNodeCdv;
	}

	_pObjNodeCdv = new Node(this->getPObjNodeIde());

	_pObjNodeCdv->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCdv->setEnmValorTipo(NUMERICO);
	_pObjNodeCdv->setIntOcorrenciaMax(1);
	_pObjNodeCdv->setIntOcorrenciaMin(1);
	_pObjNodeCdv->setIntTamanhoMax(1);
	_pObjNodeCdv->setIntTamanhoMin(1);
	_pObjNodeCdv->setStrIdentificador("B23");
	_pObjNodeCdv->setStrNome("cDV");

	return _pObjNodeCdv;
}

Node* NfeNode::getPObjNodeCmunfg()
{
	if (_pObjNodeCmunfg != nullptr)
	{
		return _pObjNodeCmunfg;
	}

	_pObjNodeCmunfg = new Node(this->getPObjNodeIde());

	_pObjNodeCmunfg->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCmunfg->setEnmValorTipo(NUMERICO);
	_pObjNodeCmunfg->setIntOcorrenciaMax(1);
	_pObjNodeCmunfg->setIntOcorrenciaMin(1);
	_pObjNodeCmunfg->setIntTamanhoMax(7);
	_pObjNodeCmunfg->setIntTamanhoMin(7);
	_pObjNodeCmunfg->setStrIdentificador("B12");
	_pObjNodeCmunfg->setStrNome("cMunFG");

	return _pObjNodeCmunfg;
}

Node* NfeNode::getPObjNodeCnf()
{
	if (_pObjNodeCnf != nullptr)
	{
		return _pObjNodeCnf;
	}

	_pObjNodeCnf = new Node(this->getPObjNodeIde());

	_pObjNodeCnf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCnf->setEnmValorTipo(NUMERICO);
	_pObjNodeCnf->setIntOcorrenciaMax(1);
	_pObjNodeCnf->setIntOcorrenciaMin(1);
	_pObjNodeCnf->setIntTamanhoMax(8);
	_pObjNodeCnf->setIntTamanhoMin(8);
	_pObjNodeCnf->setStrIdentificador("B03");
	_pObjNodeCnf->setStrNome("cNF");

	return _pObjNodeCnf;
}

Node* NfeNode::getPObjNodeCuf()
{
	if (_pObjNodeCuf != nullptr)
	{
		return _pObjNodeCuf;
	}

	_pObjNodeCuf = new Node(this->getPObjNodeIde());

	_pObjNodeCuf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeCuf->setEnmValorTipo(NUMERICO);
	_pObjNodeCuf->setIntOcorrenciaMax(1);
	_pObjNodeCuf->setIntOcorrenciaMin(1);
	_pObjNodeCuf->setIntTamanhoMax(2);
	_pObjNodeCuf->setIntTamanhoMin(2);
	_pObjNodeCuf->setStrIdentificador("B02");
	_pObjNodeCuf->setStrNome("cUF");

	return _pObjNodeCuf;
}

Node* NfeNode::getPObjNodeDhcont()
{
	if (_pObjNodeDhcont != nullptr)
	{
		return _pObjNodeDhcont;
	}

	_pObjNodeDhcont = new Node(this->getPObjNodeX());

	_pObjNodeDhcont->setEnmElementoTipo(ELEMENTO);
	_pObjNodeDhcont->setEnmValorTipo(DATA_HORA);
	_pObjNodeDhcont->setIntOcorrenciaMax(1);
	_pObjNodeDhcont->setIntOcorrenciaMin(1);
	_pObjNodeDhcont->setIntTamanhoMax(-1);
	_pObjNodeDhcont->setIntTamanhoMin(-1);
	_pObjNodeDhcont->setStrIdentificador("B28");
	_pObjNodeDhcont->setStrNome("dhCont");

	return _pObjNodeDhcont;
}

Node* NfeNode::getPObjNodeDhemi()
{
	if (_pObjNodeDhemi != nullptr)
	{
		return _pObjNodeDhemi;
	}

	_pObjNodeDhemi = new Node(this->getPObjNodeIde());

	_pObjNodeDhemi->setEnmElementoTipo(ELEMENTO);
	_pObjNodeDhemi->setEnmValorTipo(DATA_HORA);
	_pObjNodeDhemi->setIntOcorrenciaMax(1);
	_pObjNodeDhemi->setIntOcorrenciaMin(1);
	_pObjNodeDhemi->setIntTamanhoMax(-1);
	_pObjNodeDhemi->setIntTamanhoMin(-1);
	_pObjNodeDhemi->setStrIdentificador("B09");
	_pObjNodeDhemi->setStrNome("dhEmi");

	return _pObjNodeDhemi;
}

Node* NfeNode::getPObjNodeDhsaient()
{
	if (_pObjNodeDhsaient != nullptr)
	{
		return _pObjNodeDhsaient;
	}

	_pObjNodeDhsaient = new Node(this->getPObjNodeIde());

	_pObjNodeDhsaient->setEnmElementoTipo(ELEMENTO);
	_pObjNodeDhsaient->setEnmValorTipo(DATA_HORA);
	_pObjNodeDhsaient->setIntOcorrenciaMax(1);
	_pObjNodeDhsaient->setIntOcorrenciaMin(0);
	_pObjNodeDhsaient->setIntTamanhoMax(10);
	_pObjNodeDhsaient->setIntTamanhoMin(10);
	_pObjNodeDhsaient->setStrIdentificador("B10");
	_pObjNodeDhsaient->setStrNome("dhSaiEnt");

	return _pObjNodeDhsaient;
}

Node* NfeNode::getPObjNodeFinnfe()
{
	if (_pObjNodeFinnfe != nullptr)
	{
		return _pObjNodeFinnfe;
	}

	_pObjNodeFinnfe = new Node(this->getPObjNodeIde());

	_pObjNodeFinnfe->setEnmElementoTipo(ELEMENTO);
	_pObjNodeFinnfe->setEnmValorTipo(NUMERICO);
	_pObjNodeFinnfe->setIntOcorrenciaMax(1);
	_pObjNodeFinnfe->setIntOcorrenciaMin(1);
	_pObjNodeFinnfe->setIntTamanhoMax(1);
	_pObjNodeFinnfe->setIntTamanhoMin(1);
	_pObjNodeFinnfe->setStrIdentificador("B25");
	_pObjNodeFinnfe->setStrNome("finNFe");

	return _pObjNodeFinnfe;
}

Node* NfeNode::getPObjNodeId()
{
	if (_pObjNodeId != nullptr)
	{
		return _pObjNodeId;
	}

	_pObjNodeId = new Node(this->getPObjNodeInfnfe());

	_pObjNodeId->setEnmElementoTipo(ID);
	_pObjNodeId->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeId->setIntOcorrenciaMax(1);
	_pObjNodeId->setIntOcorrenciaMin(1);
	_pObjNodeId->setIntTamanhoMax(47);
	_pObjNodeId->setIntTamanhoMin(47);
	_pObjNodeId->setStrIdentificador("A03");
	_pObjNodeId->setStrNome("Id");

	return _pObjNodeId;
}

Node* NfeNode::getPObjNodeIddest()
{
	if (_pObjNodeIddest != nullptr)
	{
		return _pObjNodeIddest;
	}

	_pObjNodeIddest = new Node(this->getPObjNodeIde());

	_pObjNodeIddest->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIddest->setEnmValorTipo(NUMERICO);
	_pObjNodeIddest->setIntOcorrenciaMax(1);
	_pObjNodeIddest->setIntOcorrenciaMin(1);
	_pObjNodeIddest->setIntTamanhoMax(1);
	_pObjNodeIddest->setIntTamanhoMin(1);
	_pObjNodeIddest->setStrIdentificador("B11a");
	_pObjNodeIddest->setStrNome("idDest");

	return _pObjNodeIddest;
}

Node* NfeNode::getPObjNodeIde()
{
	if (_pObjNodeId != nullptr)
	{
		return _pObjNodeId;
	}

	_pObjNodeId = new Node(this->getPObjNodeInfnfe());

	_pObjNodeId->setEnmElementoTipo(GRUPO);
	_pObjNodeId->setEnmValorTipo(NENHUM);
	_pObjNodeId->setIntOcorrenciaMax(1);
	_pObjNodeId->setIntOcorrenciaMin(1);
	_pObjNodeId->setIntTamanhoMax(-1);
	_pObjNodeId->setIntTamanhoMin(-1);
	_pObjNodeId->setStrIdentificador("B01");
	_pObjNodeId->setStrNome("ide");

	return _pObjNodeId;
}

Node* NfeNode::getPObjNodeIndfinal()
{
	if (_pObjNodeIndfinal != nullptr)
	{
		return _pObjNodeIndfinal;
	}

	_pObjNodeIndfinal = new Node(this->getPObjNodeIde());

	_pObjNodeIndfinal->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIndfinal->setEnmValorTipo(NUMERICO);
	_pObjNodeIndfinal->setIntOcorrenciaMax(1);
	_pObjNodeIndfinal->setIntOcorrenciaMin(1);
	_pObjNodeIndfinal->setIntTamanhoMax(1);
	_pObjNodeIndfinal->setIntTamanhoMin(1);
	_pObjNodeIndfinal->setStrIdentificador("B25a");
	_pObjNodeIndfinal->setStrNome("indFinal");

	return _pObjNodeIndfinal;
}

Node* NfeNode::getPObjNodeIndpag()
{
	if (_pObjNodeIndpag != nullptr)
	{
		return _pObjNodeIndpag;
	}

	_pObjNodeIndpag = new Node(this->getPObjNodeIde());

	_pObjNodeIndpag->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIndpag->setEnmValorTipo(NUMERICO);
	_pObjNodeIndpag->setIntOcorrenciaMax(1);
	_pObjNodeIndpag->setIntOcorrenciaMin(1);
	_pObjNodeIndpag->setIntTamanhoMax(1);
	_pObjNodeIndpag->setIntTamanhoMin(1);
	_pObjNodeIndpag->setStrIdentificador("B05");
	_pObjNodeIndpag->setStrNome("indPag");

	return _pObjNodeIndpag;
}

Node* NfeNode::getPObjNodeIndpres()
{
	if (_pObjNodeIndpres != nullptr)
	{
		return _pObjNodeIndpres;
	}

	_pObjNodeIndpres = new Node(this->getPObjNodeIde());

	_pObjNodeIndpres->setEnmElementoTipo(ELEMENTO);
	_pObjNodeIndpres->setEnmValorTipo(NUMERICO);
	_pObjNodeIndpres->setIntOcorrenciaMax(1);
	_pObjNodeIndpres->setIntOcorrenciaMin(1);
	_pObjNodeIndpres->setIntTamanhoMax(1);
	_pObjNodeIndpres->setIntTamanhoMin(1);
	_pObjNodeIndpres->setStrIdentificador("B25b");
	_pObjNodeIndpres->setStrNome("indPres");

	return _pObjNodeIndpres;
}

Node* NfeNode::getPObjNodeInfnfe()
{
	if (_pObjNodeInfnfe != nullptr)
	{
		return _pObjNodeInfnfe;
	}

	_pObjNodeInfnfe = new Node(this);

	_pObjNodeInfnfe->setEnmElementoTipo(GRUPO);
	_pObjNodeInfnfe->setEnmValorTipo(NENHUM);
	_pObjNodeInfnfe->setIntOcorrenciaMax(1);
	_pObjNodeInfnfe->setIntOcorrenciaMin(1);
	_pObjNodeInfnfe->setIntTamanhoMax(-1);
	_pObjNodeInfnfe->setIntTamanhoMin(-1);
	_pObjNodeInfnfe->setStrIdentificador("A01");
	_pObjNodeInfnfe->setStrNome("infNFe");

	return _pObjNodeInfnfe;
}

Node* NfeNode::getPObjNodeMod()
{
	if (_pObjNodeMod != nullptr)
	{
		return _pObjNodeMod;
	}

	_pObjNodeMod = new Node(this->getPObjNodeIde());

	_pObjNodeMod->setEnmElementoTipo(ELEMENTO);
	_pObjNodeMod->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeMod->setIntOcorrenciaMax(1);
	_pObjNodeMod->setIntOcorrenciaMin(1);
	_pObjNodeMod->setIntTamanhoMax(2);
	_pObjNodeMod->setIntTamanhoMin(2);
	_pObjNodeMod->setStrIdentificador("B06");
	_pObjNodeMod->setStrNome("mod");

	return _pObjNodeMod;
}

Node* NfeNode::getPObjNodeNatop()
{
	if (_pObjNodeNatop != nullptr)
	{
		return _pObjNodeNatop;
	}

	_pObjNodeNatop = new Node(this->getPObjNodeIde());

	_pObjNodeNatop->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNatop->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeNatop->setIntOcorrenciaMax(1);
	_pObjNodeNatop->setIntOcorrenciaMin(1);
	_pObjNodeNatop->setIntTamanhoMax(60);
	_pObjNodeNatop->setIntTamanhoMin(1);
	_pObjNodeNatop->setStrIdentificador("B04");
	_pObjNodeNatop->setStrNome("natOp");

	return _pObjNodeNatop;
}

Node* NfeNode::getPObjNodeNnf()
{
	if (_pObjNodeNnf != nullptr)
	{
		return _pObjNodeNnf;
	}

	_pObjNodeNnf = new Node(this->getPObjNodeIde());

	_pObjNodeNnf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeNnf->setEnmValorTipo(NUMERICO);
	_pObjNodeNnf->setIntOcorrenciaMax(1);
	_pObjNodeNnf->setIntOcorrenciaMin(1);
	_pObjNodeNnf->setIntTamanhoMax(9);
	_pObjNodeNnf->setIntTamanhoMin(1);
	_pObjNodeNnf->setStrIdentificador("B08");
	_pObjNodeNnf->setStrNome("nNF");

	return _pObjNodeNnf;
}

Node* NfeNode::getPObjNodeProcemi()
{
	if (_pObjNodeProcemi != nullptr)
	{
		return _pObjNodeProcemi;
	}

	_pObjNodeProcemi = new Node(this->getPObjNodeIde());

	_pObjNodeProcemi->setEnmElementoTipo(ELEMENTO);
	_pObjNodeProcemi->setEnmValorTipo(NUMERICO);
	_pObjNodeProcemi->setIntOcorrenciaMax(1);
	_pObjNodeProcemi->setIntOcorrenciaMin(1);
	_pObjNodeProcemi->setIntTamanhoMax(1);
	_pObjNodeProcemi->setIntTamanhoMin(1);
	_pObjNodeProcemi->setStrIdentificador("B26");
	_pObjNodeProcemi->setStrNome("procEmi");

	return _pObjNodeProcemi;
}

Node* NfeNode::getPObjNodeSerie()
{
	if (_pObjNodeSerie != nullptr)
	{
		return _pObjNodeSerie;
	}

	_pObjNodeSerie = new Node(this->getPObjNodeIde());

	_pObjNodeSerie->setEnmElementoTipo(ELEMENTO);
	_pObjNodeSerie->setEnmValorTipo(NUMERICO);
	_pObjNodeSerie->setIntOcorrenciaMax(1);
	_pObjNodeSerie->setIntOcorrenciaMin(1);
	_pObjNodeSerie->setIntTamanhoMax(3);
	_pObjNodeSerie->setIntTamanhoMin(1);
	_pObjNodeSerie->setStrIdentificador("B07");
	_pObjNodeSerie->setStrNome("serie");

	return _pObjNodeSerie;
}

Node* NfeNode::getPObjNodeTpamb()
{
	if (_pObjNodeTpamb != nullptr)
	{
		return _pObjNodeTpamb;
	}

	_pObjNodeTpamb = new Node(this->getPObjNodeIde());

	_pObjNodeTpamb->setEnmElementoTipo(ELEMENTO);
	_pObjNodeTpamb->setEnmValorTipo(NUMERICO);
	_pObjNodeTpamb->setIntOcorrenciaMax(1);
	_pObjNodeTpamb->setIntOcorrenciaMin(1);
	_pObjNodeTpamb->setIntTamanhoMax(1);
	_pObjNodeTpamb->setIntTamanhoMin(1);
	_pObjNodeTpamb->setStrIdentificador("B24");
	_pObjNodeTpamb->setStrNome("tpAmb");

	return _pObjNodeTpamb;
}

Node* NfeNode::getPObjNodeTpemis()
{
	if (_pObjNodeTpemis != nullptr)
	{
		return _pObjNodeTpemis;
	}

	_pObjNodeTpemis = new Node(this->getPObjNodeIde());

	_pObjNodeTpemis->setEnmElementoTipo(ELEMENTO);
	_pObjNodeTpemis->setEnmValorTipo(NUMERICO);
	_pObjNodeTpemis->setIntOcorrenciaMax(1);
	_pObjNodeTpemis->setIntOcorrenciaMin(1);
	_pObjNodeTpemis->setIntTamanhoMax(1);
	_pObjNodeTpemis->setIntTamanhoMin(1);
	_pObjNodeTpemis->setStrIdentificador("B22");
	_pObjNodeTpemis->setStrNome("tpEmis");

	return _pObjNodeTpemis;
}

Node* NfeNode::getPObjNodeTpimp()
{
	if (_pObjNodeTpimp != nullptr)
	{
		return _pObjNodeTpimp;
	}

	_pObjNodeTpimp = new Node(this->getPObjNodeIde());

	_pObjNodeTpimp->setEnmElementoTipo(ELEMENTO);
	_pObjNodeTpimp->setEnmValorTipo(NUMERICO);
	_pObjNodeTpimp->setIntOcorrenciaMax(1);
	_pObjNodeTpimp->setIntOcorrenciaMin(1);
	_pObjNodeTpimp->setIntTamanhoMax(1);
	_pObjNodeTpimp->setIntTamanhoMin(1);
	_pObjNodeTpimp->setStrIdentificador("B21");
	_pObjNodeTpimp->setStrNome("tpImp");

	return _pObjNodeTpimp;
}

Node* NfeNode::getPObjNodeTpnf()
{
	if (_pObjNodeTpnf != nullptr)
	{
		return _pObjNodeTpnf;
	}

	_pObjNodeTpnf = new Node(this->getPObjNodeIde());

	_pObjNodeTpnf->setEnmElementoTipo(ELEMENTO);
	_pObjNodeTpnf->setEnmValorTipo(NUMERICO);
	_pObjNodeTpnf->setIntOcorrenciaMax(1);
	_pObjNodeTpnf->setIntOcorrenciaMin(1);
	_pObjNodeTpnf->setIntTamanhoMax(1);
	_pObjNodeTpnf->setIntTamanhoMin(1);
	_pObjNodeTpnf->setStrIdentificador("B11");
	_pObjNodeTpnf->setStrNome("tpNF");

	return _pObjNodeSerie;
}

Node* NfeNode::getPObjNodeVerproc()
{
	if (_pObjNodeVerproc != nullptr)
	{
		return _pObjNodeVerproc;
	}

	_pObjNodeVerproc = new Node(this->getPObjNodeIde());

	_pObjNodeVerproc->setEnmElementoTipo(ELEMENTO);
	_pObjNodeVerproc->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeVerproc->setIntOcorrenciaMax(1);
	_pObjNodeVerproc->setIntOcorrenciaMin(1);
	_pObjNodeVerproc->setIntTamanhoMax(20);
	_pObjNodeVerproc->setIntTamanhoMin(1);
	_pObjNodeVerproc->setStrIdentificador("B27");
	_pObjNodeVerproc->setStrNome("verProc");

	return _pObjNodeVerproc;
}

Node* NfeNode::getPObjNodeVersao()
{
	if (_pObjNodeVersao != nullptr)
	{
		return _pObjNodeVersao;
	}

	_pObjNodeVersao = new Node(this->getPObjNodeInfnfe());

	_pObjNodeVersao->setEnmElementoTipo(A);
	_pObjNodeVersao->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeVersao->setIntOcorrenciaMax(1);
	_pObjNodeVersao->setIntOcorrenciaMin(1);
	_pObjNodeVersao->setIntTamanhoMax(4);
	_pObjNodeVersao->setIntTamanhoMin(1);
	_pObjNodeVersao->setStrIdentificador("A02");
	_pObjNodeVersao->setStrNome("versao");

	return _pObjNodeVersao;
}

Node* NfeNode::getPObjNodeX()
{
	if (_pObjNodeX != nullptr)
	{
		return _pObjNodeX;
	}

	_pObjNodeX = new Node(this->getPObjNodeIde());

	_pObjNodeX->setEnmElementoTipo(GRUPO);
	_pObjNodeX->setEnmValorTipo(NENHUM);
	_pObjNodeX->setIntOcorrenciaMax(1);
	_pObjNodeX->setIntOcorrenciaMin(0);
	_pObjNodeX->setIntTamanhoMax(-1);
	_pObjNodeX->setIntTamanhoMin(-1);
	_pObjNodeX->setStrIdentificador("B27.1");
	_pObjNodeX->setStrNome("-x-");

	return _pObjNodeX;
}

Node* NfeNode::getPObjNodeXjust()
{
	if (_pObjNodeXjust != nullptr)
	{
		return _pObjNodeXjust;
	}

	_pObjNodeXjust = new Node(this->getPObjNodeX());

	_pObjNodeXjust->setEnmElementoTipo(ELEMENTO);
	_pObjNodeXjust->setEnmValorTipo(ALFANUMERICO);
	_pObjNodeXjust->setIntOcorrenciaMax(1);
	_pObjNodeXjust->setIntOcorrenciaMin(1);
	_pObjNodeXjust->setIntTamanhoMax(256);
	_pObjNodeXjust->setIntTamanhoMin(15);
	_pObjNodeXjust->setStrIdentificador("B29");
	_pObjNodeXjust->setStrNome("xJust");

	return _pObjNodeXjust;
}

vector<Node*> NfeNode::getLstPObjNodeNfref()
{
	return _lstPObjNodeNfref;
}

