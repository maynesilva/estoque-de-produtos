#include "sistema.h"

void relatorioSaida(){
        float faturamento_total = 0.0;

    system("cls");
    printf("\n ******************************************** \n");
    printf("\n ***********CADASTRO DE PRODUTO************** \n");
    printf("\n ******************************************** \n");

    if(total_vendas == 0){
        printf("\n Nenhuma venda foi realizada ate o momento. \n\n");
        system("pause");
        return;
    }

    printf("\n %-15s | %-15s | %-5s | %-12s", "CLIENTE", "PRODUTO", "QTD", "VALOR(R$)");
    printf("\n ------------------------------------------------------------------- \n");

    for(int i = 0; i < total_vendas; i++){
        printf("\n %-15s | %-15s | %-5d | %-12.2f", cliente[i], produto_vendido[i], qtd_vendida[i], valor_total_venda[i]);

        faturamento_total = faturamento_total + valor_total_venda[i];
    }

    printf("\n -------------- \n");
    printf("\n Total de vendas realizadas: %d\n", total_vendas);
    printf("\n Faturamento total aculumado: %.2f \n\n", faturamento_total);

    system("pause");
}