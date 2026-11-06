# Sistema de Gestão de Estoque em C

Projeto de aplicação de terminal (CLI) para gerenciamento de estoque e vendas, desenvolvido com foco em modularização e estruturação de dados na linguagem C. 

Este projeto foi construído como parte prática dos estudos no curso de **Análise e Desenvolvimento de Sistemas (ADS)** da **FATEC Americana**, aplicando conceitos fundamentais de engenharia de software no back-end.

## Funcionalidades

O sistema possui um menu interativo com as seguintes operações:

- **[1] Cadastro de Produtos:** Adição de novos itens ao estoque, registrando nome, valor unitário e quantidade.
- **[2] Consulta de Produtos:** Busca detalhada de um produto específico através do seu nome.
- **[3] Relatório de Produtos:** Exibição tabular de todo o estoque cadastrado, com alinhamento formatado.
- **[4] Venda e Baixa de Produtos:** Registro de saída de itens, cálculo de valor da venda por cliente e baixa automática da quantidade no estoque.
- **[5] Relatório de Saídas:** Histórico de todas as vendas realizadas, exibindo os clientes, quantidades e o faturamento financeiro total acumulado.

## Estrutura do Projeto

O código foi refatorado e modularizado para separar as responsabilidades, utilizando um arquivo de cabeçalho compartilhado (`.h`) e múltiplos arquivos de origem (`.c`).

```text
estoque-de-produtos
 ┣ sistema.h             # Arquivo de cabeçalho com variáveis globais (extern) e assinaturas
 ┣ main.c                # Ponto de entrada, alocação de memória e menu principal
 ┣ cadastroProdutos.c            # Lógica de inserção de dados no estoque
 ┣ consultaProdutos.c            # Lógica de busca e validação de strings
 ┣ relatorioProdutos.c   # Formatação e listagem em tela do estoque
 ┣ vendaProdutos.c               # Lógica de baixa de estoque e registro de clientes
 ┗ relatorioSaida.c      # Cálculo de faturamento e exibição do log de vendas
