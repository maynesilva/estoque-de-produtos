#include "sistema.h"

void cadastroProdutos() {
    char resp;

    system("cls");
    printf("\n ******************************************** \n");
    printf("\n ***********CADASTRO DE PRODUTO************** \n");
    printf("\n ******************************************** \n");

    do{
        if(total_produtos >= 10){
            printf("\n Limite maximo de produtos atingido!\n");
            system("pause");
            break;
        }

        printf("\n Informe o produto: \n");
        fgets(produto[total_produtos], 20, stdin);
        produto[total_produtos][strcspn(produto[total_produtos], "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("\n Informe o valor: \n");
        scanf("%f", &valor[total_produtos]);
        setbuf(stdin, NULL);

        printf("\n Informe a quantidade: \n");
        scanf("%d", &qtd[total_produtos]);
        setbuf(stdin, NULL);

        total_produtos++;

        printf("\n Deseja continuar o cadastro? [s]im, [n]ao \n");
        resp=getchar();
        resp=toupper(resp);
        setbuf(stdin, NULL);
    } while (resp != 'N');

}