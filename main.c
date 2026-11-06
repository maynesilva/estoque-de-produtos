#include "sistema.h" 

char produto[10][20];
float valor[10];
int qtd[10];
int total_produtos = 0; 

char cliente[50][20];
char produto_vendido[50][20];
int qtd_vendida[50];
float valor_total_venda[50];
int total_vendas = 0; 

int main() {
    int op;

    do {
        system("cls");
        printf("\n ******************************************** \n");
        printf("\n ************ SISTEMA DE ESTOQUE ************ \n");
        printf("\n ******* Curso: ADS - FATEC AMERICANA ******* \n");
        printf("\n ******************************************** \n");
        printf("\n [1] - Cadastro de produtos                   \n");
        printf("\n [2] - Consulta de produtos                   \n");
        printf("\n [3] - Relatorio de produtos                  \n");
        printf("\n [4] - Venda e baixa de produtos              \n");
        printf("\n [5] - Relatorio de saida                     \n");
        printf("\n ******************************************** \n");
        printf("\n Escolha a opcao");
        scanf("%d", &op);
        setbuf(stdin, NULL);

        switch(op) {
            case 1: cadastroProdutos(); break;
            case 2: consultaProdutos(); break;
            case 3: relatorioProdutos(); break;
            case 4: vendaProdutos(); break;
            case 5: relatorioSaida(); break;
            case 0: printf("\n Saindo do sistema...\n"); break;
            default: 
                printf("\n Opcao invalida... tente novamente\n");
                system("pause");
        } 
    } while (op != 0);

    return 0;
}