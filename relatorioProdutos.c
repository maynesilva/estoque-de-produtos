#include "sistema.h"

#include "sistema.h"

void relatorioProdutos() {
    system("cls");
    printf("\n ******************************************** \n");
    printf("\n **********RELATORIO DE PRODUTOS************* \n");
    printf("\n ******************************************** \n");

        if(total_produtos == 0){
            printf("\n Nenhum produto cadastrado no sistema ainda. \n");
            system("pause");
            return;
        }
    for(int i = 0; i < total_produtos; i++){
        printf("\n %-20s | %-12.2f | %-10d", produto[i], valor[i], qtd[i]);
    }

    printf("\n ---------------------------------------- \n\n");
    printf("\n Total de itens diferentes cadastrados: %d\n\n", total_produtos);
    system("pause");
}