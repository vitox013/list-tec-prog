#include "Principal.h"

#include "stdafx.h"

Principal::Principal()
    : Simao(3, 10, 1976, "Jean Simão"),
      Einstein(13, 3, 1879, "Albert Einstein"),
      Newton(4, 1, 1643, "Isaac Newton") {
    UTFPR.setNome("UNIVERSIDADE TECNOLOGICA");
    Princeton.setNome("Princenton");
    Cambridge.setNome("Cambridge");
    DAINF.setNomeDepartamento("Dainf");
    FisicaPrinceton.setNomeDepartamento("Fisica Princeton");
    MatematicaCambridge.setNomeDepartamento("Matematica Cambridge");

    UTFPR.setDepAssociado(&DAINF);
    Princeton.setDepAssociado(&FisicaPrinceton);
    Cambridge.setDepAssociado(&MatematicaCambridge);

    Simao.setUnivFiliado(&UTFPR);
    Simao.setDptFiliado(&DAINF);
    Einstein.setUnivFiliado(&Princeton);
    Einstein.setDptFiliado(&FisicaPrinceton);
    Newton.setUnivFiliado(&Cambridge);
    Newton.setDptFiliado(&MatematicaCambridge);

    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);
    diaAtual = local->tm_mday;
    mesAtual = local->tm_mon + 1;
    anoAtual = local->tm_year + 1900;

    Executar();
}

void Principal::Executar() {
    Simao.calcIdadeImprime(diaAtual, mesAtual, anoAtual);
    Einstein.calcIdadeImprime(diaAtual, mesAtual, anoAtual);
    Newton.calcIdadeImprime(diaAtual, mesAtual, anoAtual);
    Simao.ondeTrabalho();
    Einstein.ondeTrabalho();
    Newton.ondeTrabalho();
}