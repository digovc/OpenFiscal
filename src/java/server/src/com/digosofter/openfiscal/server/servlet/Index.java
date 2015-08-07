package com.digosofter.openfiscal.server.servlet;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.digosofter.digojava.erro.Erro;
import com.digosofter.openfiscal.server.AppOpenFiscal;

@WebServlet("/Index")
public class Index extends HttpServlet {

  private static final long serialVersionUID = 1L;

  public Index() {

    super();
  }

  @Override
  protected void doGet(HttpServletRequest objHttpServletRequest, HttpServletResponse objHttpServletResponse) throws ServletException, IOException {

  }

  @Override
  protected void doPost(HttpServletRequest objHttpServletRequest, HttpServletResponse objHttpServletResponse) throws ServletException, IOException {

  }

  @Override
  protected void service(HttpServletRequest objHttpServletRequest, HttpServletResponse objHttpServletResponse) throws ServletException, IOException {

    super.service(objHttpServletRequest, objHttpServletResponse);

    try {

      AppOpenFiscal.getI().responder(objHttpServletRequest, objHttpServletResponse);
    }
    catch (Exception ex) {

      new Erro("Erro inesperado.\n", ex);
    }
    finally {
    }
  }
}