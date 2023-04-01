#include "Principal.h"

#include "stdafx.h"

Principal::Principal() {
    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);
    diaAtual = local->tm_mday;
    mesAtual = local->tm_mon + 1;
    anoAtual = local->tm_year + 1900;
    Inicializa();
    Executar();
}

void Principal::Inicializa() {
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaAlunos();
    InicializaDisciplinas();
    InicializaProfessores();
}

void Principal::InicializaUniversidades() {
    UTFPR.setNome("Universidade Tecnologica");
    Princeton.setNome("Princenton");
    Cambridge.setNome("Cambridge");
    UFPR.setNome("Universidade Federal");

    // "Filiando" as universidades a departamentos
    UTFPR.setDepAssociado(&DAINF);
    UTFPR.setDepAssociado(&DAELN);
    Princeton.setDepAssociado(&FisicaPrinceton);
    Cambridge.setDepAssociado(&MatematicaCambridge);
    UFPR.setDepAssociado(&DEARTES);
}

void Principal::InicializaDepartamentos() {
    // inicializa os objetos departamentos
    DAINF.setNomeDepartamento("informatica");
    FisicaPrinceton.setNomeDepartamento("fisica");
    MatematicaCambridge.setNomeDepartamento("matematica");
    DEARTES.setNomeDepartamento("artes");
    DAELN.setNomeDepartamento("eletronica");

    // "Filiando" os departamentos a universidades

    DAELN.setUniversidade(&UTFPR);
    DAINF.setUniversidade(&UTFPR);
    DEARTES.setUniversidade(&UFPR);
    FisicaPrinceton.setUniversidade(&Princeton);
    MatematicaCambridge.setUniversidade(&Cambridge);

    // "Filiando" os departamentos a disciplinas
    // DAINF.incluirDisciplina(&Calculo);
    // DAINF.incluirDisciplina(&Algoritmos);
    // FisicaPrinceton.incluirDisciplina(&Fisica);
    // MatematicaCambridge.incluirDisciplina(&Calculo);
    // DEARTES.incluirDisciplina(&Artes);
    // DAELN.incluirDisciplina(&Eletronica);
}

void Principal::InicializaProfessores() {
    // inicializa os objetos professores
    Simao.inicializa(3, 10, 1976, "Jean Simão");
    Einstein.inicializa(13, 3, 1879, "Albert Einstein");
    Newton.inicializa(4, 1, 1643, "Isaac Newton");

    // "Filiando" os professores a universidades
    Simao.setUnivFiliado(&UTFPR);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    // "Filiando" os professores a departamentos
    Simao.setDptFiliado(&DAINF);
    Einstein.setDptFiliado(&FisicaPrinceton);
    Newton.setDptFiliado(&MatematicaCambridge);
}

void Principal::InicializaAlunos() {
    Vitor.inicializa(17, 8, 1999, "Vitor Muller");
    Joao.inicializa(30, 1, 1982, "Joao Carlos");
    Fernanda.inicializa(24, 2, 1978, "Fernanda Alves");
}

void Principal::InicializaDisciplinas() {
    // inicializa os objetos disciplinas
    Calculo.setNome("Calculo");
    Fisica.setNome("Fisica");
    Algoritmos.setNome("Algoritmos");
    Artes.setNome("Artes");
    Musica.setNome("Musica");
    Eletronica.setNome("Eletronica");
    Mecatronica.setNome("Mecatronica");

    // "Filiando" as disciplinas a departamentos
    Calculo.setDpto(&DAINF);
    Fisica.setDpto(&DAINF);
    Algoritmos.setDpto(&DAINF);
    Artes.setDpto(&DEARTES);
    Musica.setDpto(&DEARTES);
    Mecatronica.setDpto(&DAELN);
    Eletronica.setDpto(&DAELN);

    Calculo.incluaAluno(&Vitor);
    Calculo.incluaAluno(&Joao);
    Calculo.incluaAluno(&Fernanda);

    Eletronica.incluaAluno(&Vitor);
    Eletronica.incluaAluno(&Fernanda);
}

// Funcoes do executar

void Principal::CalcIdadeProfs() {
    Simao.calcIdadeImprime(diaAtual, mesAtual, anoAtual);
    Einstein.calcIdadeImprime(diaAtual, mesAtual, anoAtual);
    Newton.calcIdadeImprime(diaAtual, mesAtual, anoAtual);
}

void Principal::UnivOndeProfsTrabalham() {
    Simao.ondeTrabalho();
    Einstein.ondeTrabalho();
    Newton.ondeTrabalho();
}

void Principal::DepOndeProfsTrabalham() {
    Simao.qualDptTrabalho();
    Einstein.qualDptTrabalho();
    Newton.qualDptTrabalho();
}

void Principal::ListeDiscDptos() {
    DAINF.listarDisciplinas();
    FisicaPrinceton.listarDisciplinas();
    MatematicaCambridge.listarDisciplinas();
    DEARTES.listarDisciplinas();
    DAELN.listarDisciplinas();

    cout << "\n ---------" << endl;

    DAINF.listarDisciplinas2();
    FisicaPrinceton.listarDisciplinas2();
    MatematicaCambridge.listarDisciplinas2();
    DEARTES.listarDisciplinas2();
    DAELN.listarDisciplinas2();
}

void Principal::ListeAlunosDisc() {
    Calculo.listeAlunos();
    cout << "\n";
    Calculo.listeAlunos2();
    Fisica.listeAlunos();
    cout << "\n";
    Artes.listeAlunos();
    cout << "\n";
    Eletronica.listeAlunos();
    cout << "\n";
    Eletronica.listeAlunos2();
    cout << "\n";
}

void Principal::Executar() {
    CalcIdadeProfs();
    UnivOndeProfsTrabalham();
    DepOndeProfsTrabalham();
    ListeDiscDptos();
    ListeAlunosDisc();
}