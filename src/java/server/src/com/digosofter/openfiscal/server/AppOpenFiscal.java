package com.digosofter.openfiscal.server;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.apache.commons.io.IOUtils;

import com.digosofter.digojava.MsgUsuario;
import com.digosofter.digojava.erro.Erro;
import com.digosofter.digowebapp.AppWeb;
import com.digosofter.openfiscal.client.obj.ObjInterlocutor;

public class AppOpenFiscal extends AppWeb {

  private static AppOpenFiscal i;

  public static AppOpenFiscal getI() {

    try {

      if (i != null) {

        return i;
      }

      i = new AppOpenFiscal();

    }
    catch (Exception ex) {

      new Erro("Erro inesperado.\n", ex);
    }
    finally {
    }

    return i;
  }

  public AppOpenFiscal() {

    super("OpenFiscalServer");
  }

  @Override
  public List<MsgUsuario> getLstMsgUsuario() {

    return null;
  }

  private ObjInterlocutor getObjInterlocutorRequest() {

    String strJson;

    try {

      strJson = IOUtils.toString(AppWeb.getI().getObjHttpServletRequest().getInputStream());

      return this.getObjGson().fromJson(strJson, ObjInterlocutor.class);
    }
    catch (Exception ex) {

      new Erro("Erro inesperado.\n", ex);
    }
    finally {
    }

    return null;
  }

  @Override
  public void responder(HttpServletRequest objRequest, HttpServletResponse objResponse) {

    super.responder(objRequest, objResponse);

    ObjInterlocutor objInterlocutor;
    try {

      objInterlocutor = this.getObjInterlocutorRequest();

      this.addStrHtmlResposta(this.responder(objInterlocutor));
    }
    catch (Exception ex) {

      new Erro("Erro inesperado.\n", ex);
    }
    finally {
    }
  }

  private String responder(ObjInterlocutor objInterlocutor) {

    try {

      if (objInterlocutor == null) {

        return "1";
      }

      switch (objInterlocutor.getEnmFuncao()) {

        case CRIAR_XML_NFE:
          return "0";

        default:
          break;
      }
    }
    catch (Exception ex) {

      new Erro("Erro inesperado.\n", ex);
    }
    finally {
    }

    return null;
  }
}