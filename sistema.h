#ifndef SISTEMA_H
#define SISTEMA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern char produto[10][20];
extern float valor[10];
extern int qtd[10];
extern int total_produtos;

extern char cliente[50][20];
extern char produto_vendido[50][20];
extern int qtd_vendida[50];
extern float valor_total_venda[50];
extern int total_vendas;

void cadastroProdutos();
void consultaProdutos();
void relatorioProdutos();
void vendaProdutos();
void relatorioSaida();

#endif