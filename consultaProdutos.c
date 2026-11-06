#include "sistema.h"

void consultaProdutos(){
    char busca[20];
    int encontrou=0;

    system("cls");
    printf("\n ******************************************** \n");
    printf("\n ***********CONSULTA DE PRODUTO************** \n");
    printf("\n ******************************************** \n");

    if(total_produtos == 0){
        printf("\n Nenhum produto cadastrado no sistema ainda. \n");
        system("pause");
        return;
    }

    printf("\n Informe o nome do produto que deseja buscar: ");
    fgets(busca, 20, stdin);
    busca[strcspn(busca, "\n")] = '\0';
    setbuf(stdin, NULL);

    for(int j = 0; j < total_produtos; j++){
        if (strcmp(produto[j], busca) == 0){
            printf("\n --- Produto Encontrado --- \n");
            printf("\n  Nome: %s", produto[j]);
            printf("\n Valor: R$ %.2f", valor[j]);
            printf("\n Quantidade em Estoque: %d\n", qtd[j]);
            printf("\n --------------------------- \n");

            encontrou = 1;
        }
    }

    if (encontrou == 0){
        printf("\n Produto '%s' nao encontrado no estoque \n");
    }

    system("pause");
}