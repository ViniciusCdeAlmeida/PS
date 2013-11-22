#define PERSISTENCIA_PC_SERV

/* Includes */
#include "Persistencia_Produtos.h"


int inicializa_persistencia() {
    FILE *arqProduto;

    arqProduto = fopen(DB_PRODUTO, "r");
    if(arqProduto == NULL) {
        arqProduto = fopen(DB_PRODUTO, "w");
        fprintf(arqProduto, "%d\t%d\n", FIM_LISTA, FIM_LISTA);
    }
    fclose(arqProduto);
    return SUC_FUNCAO;
}

int armazena_produto(Produto *produto) {
    int byteOffset, byteOffsetProdut, byteOffsetDefeit, proximoProdut, proximo;
    FILE *arqProduto;

    arqProduto = fopen(DB_PRODUTO, "r+");
    fscanf(arqProduto, "%d%d", &byteOffsetProdut, &byteOffsetDefeit);
    if(byteOffsetProdut == FIM_LISTA) {
        fseek(arqProduto, 0, SEEK_END);
        proximoProdut = FIM_LISTA;
    }
    else {
        fseek(arqProduto, byteOffset, SEEK_SET);
        fscanf(arqProduto, "%d", &proximo);
        fseek(arqProduto, byteOffset, SEEK_SET);
    }
    fprintf(arqProduto, "%s\t", REG_ENABLE);
    fprintf(arqProduto, "%.5s\t", produto->codigoProduto);
    fprintf(arqProduto, "%.10s\t", produto->nomeProduto);
    fprintf(arqProduto, "%.6s\t", produto->versaoProduto);
    fseek(arqProduto, 0, SEEK_SET);
    fprintf(arqProduto, "%.5d", proximo);
    fclose(arqProduto);
    return SUC_FUNCAO;
}

int armazena_defeito(Defeito *defeito) {

    int byteOffsetProdut, byteOffsetDefeit, proximoProdut, byteOffset, proximo;
    FILE *arqProduto;

    arqProduto = fopen(DB_PRODUTO, "r+");

    fscanf(arqProduto, "%d%d", &byteOffsetProdut, &byteOffsetDefeit);
    if(byteOffsetDefeit == FIM_LISTA) {
        fseek(arqProduto, 0, SEEK_END);
        proximoProdut = FIM_LISTA;
    }
    else {
        fseek(arqProduto, byteOffset, SEEK_SET);
        fscanf(arqProduto, "%d", &proximo);
        fseek(arqProduto, byteOffset, SEEK_SET);
    }
    fprintf(arqProduto, "%s\t", REG_ENABLE);
    fprintf(arqProduto, "%.5s\t", defeito->codigoDefeito);
    fprintf(arqProduto, "%.5s\t", defeito->codigoProduto);
    fprintf(arqProduto, "%.6s\t", defeito->descricaoDefeito);
    fseek(arqProduto, 0, SEEK_SET);
    fprintf(arqProduto, "%.5d", proximo);

    fclose(arqProduto);
    return SUC_FUNCAO;
}

int remove_produto(char *codigoProduto) {
    /* Declaração de Variáveis */
    FILE *arqProduto;
    Produto *produto;
    int byteOffset, proximo;
    //byteOffset = recupera_produto(codigoProduto, produto);
    arqProduto = fopen(DB_PRODUTO, "r+");
    fscanf(arqProduto, "%d", &proximo);
    fseek(arqProduto, 0, SEEK_SET);
    fprintf(arqProduto, "%.5d", byteOffset);

    fseek(arqProduto, byteOffset, SEEK_SET);
    fprintf(arqProduto, "%.5d", proximo);

    free(produto);
    fclose(arqProduto);
    return SUC_FUNCAO;
}
/*
int remove_defeito(char *codigoDefeito) {
    FILE *arqProduto;
    Defeito *defeito;
    int byteOffset, proximo;
    byteOffset = recupera_defeito(codigoDefeito, defeito);
    arqProduto = fopen(DB_PRODUTO, "r+");
    fscanf(arqProduto, "%d", &proximo);
    fseek(arqProduto, 0, SEEK_SET);
    fprintf(arqProduto, "%.5d", byteOffset);

    fseek(arqProduto, byteOffset, SEEK_SET);
    fprintf(arqProduto, "%.5d", proximo);

    free(defeito);
    fclose(arqProduto);
    return SUC_FUNCAO;
}


int recupera_defeito(char *codigoDefeito, Defeito *defeito) {
     Declaração de Variáveis
    FILE *arqProduto;
    int ativo, linha = 0, proximo;
     Abertura dos arquivos
    arqProduto = fopen(DB_DESENVOLVERDOR, "r");
    fscanf(arqProduto, "%d", &proximo);
    while(!feof(arqProduto)) {

    }
     Fechamento dos arquivos
    fclose(arqProduto);
    return SUC_FUNCAO;
}
*/
