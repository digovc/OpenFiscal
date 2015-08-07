package com.digosofter.openfiscal.client.obj;

import com.digosofter.digojava.Objeto;

public class ObjInterlocutor extends Objeto {

  public enum EnmFuncao {

    CRIAR_XML_NFE,
    NONE,
  }

  private EnmFuncao _enmFuncao;
  private String _strJson;

  public EnmFuncao getEnmFuncao() {

    return _enmFuncao;
  }

  private String getStrJson() {

    return _strJson;
  }

  private void setEnmFuncao(EnmFuncao enmFuncao) {

    _enmFuncao = enmFuncao;
  }

  private void setStrJson(String strJson) {

    _strJson = strJson;
  }
}
