#include "sistema.h"

void vendaProdutos(){
    char busca[20];
    int encontrou = 0;
    int qtd_desejada;

    system("cls");
    printf("\n ******************************************** \n");
    printf("\n ************ VENDA DE PRODUTO ************** \n");
    printf("\n ******************************************** \n");

    if(total_produtos == 0){
        printf("\n O estoque esta vazio. Cadastre produtos primeiro. \n\n");
        system("pause");
        return;
    }

    printf("\n Informe o produto que sera vendido: \n");
    fgets(busca, 20, stdin);
    busca[strcspn(busca, "\n")] = '\0';
    setbuf(stdin, NULL);

    for (int i = 0; i < total_produtos; i++){
        if(strcmp(produto[i], busca) == 0){
            encontrou = 1;

            printf("\n --- Produto Encontrado --- \n");
            printf("\n Produto: %s", produto[i]);
            printf("\n Estoque disponivel: %d", qtd[i]);
            printf("\n Valor unitario: R$ %.2f", valor[i]);
            printf("\n --------------------------- \n");

            printf("\n Informe a quantidade desejada: \n");
            scanf("%d", &qtd_desejada);
            setbuf(stdin, NULL);

            if(qtd_desejada <= 0){
                printf("\n Quantidade invalida! A venda foi cancelada \n");
            }else if(qtd_desejada > qtd[i]){
                printf("\n Estoque insuficiente! A venda foi cancelada \n");
            }else{
                qtd[i] = qtd[i] - qtd_desejada;

                printf("\n Informe o nome do cliente: \n");
                fgets(cliente[total_vendas], 20, stdin);
                cliente[total_vendas][strcspn(cliente[total_vendas], "\n")] = '\0';
                setbuf(stdin, NULL);

                strcpy(produto_vendido[total_vendas], produto[i]);
                qtd_vendida[total_vendas] = qtd_desejada;
                valor_total_venda[total_vendas] = qtd_desejada * valor[i];

                total_vendas++;

                printf("\n Venda realizada com sucesso!");
                printf("\n Novo saldo em estoque de '%s': %d\n", produto[i], qtd[i]);
            }
            break;
        }
    }
    if(encontrou == 0){
        printf("\n Produto '%s' nao encontrad no estoque. \n", busca);
    }

    printf("\n");
    system("pause");
}