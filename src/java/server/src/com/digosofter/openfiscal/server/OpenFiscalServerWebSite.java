package com.digosofter.openfiscal.server;

import java.util.List;

import com.digosofter.digojava.MsgUsuario;
import com.digosofter.digowebapp.AppWeb;

public class OpenFiscalServerWebSite extends AppWeb {

  public OpenFiscalServerWebSite() {

    super("OpenFiscalServer");
  }

  @Override
  public List<MsgUsuario> getLstMsgUsuario() {

    return null;
  }
}