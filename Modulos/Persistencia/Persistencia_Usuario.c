
#define PERSISTENCIA_U_SERV

/* Includes */

#include "Persistencia_Usuario.h"
#include "..\Logica\Logica.h"

int inicializa_persistencia_d() {
    FILE *arqDesenv;

    arqDesenv = fopen(DB_DESENVOLVERDOR, "r");
    if(arqDesenv == NULL) {

        arqDesenv = fopen(DB_DESENVOLVERDOR, "w");
        fprintf(arqDesenv, "%d\n", FIM_LISTA);
    }
    /* Fecha o arquivo (existindo anteriormente ou não) */
    fclose(arqDesenv);
    return SUC_FUNCAO;
}

int armazena_desenvolvedor(Desenvolvedor *desenvolvedor) {
    /* Declaração de Variáveis */
    int byteOffset, proximo;
    FILE *arqDesenv;
    /* Abertura dos arquivos */
    arqDesenv = fopen(DB_DESENVOLVERDOR, "r+");
    fscanf(arqDesenv, "%d", &byteOffset);
    /*if(byteOffset == FIM_LISTA) {
        fseek(arqDesenv, 0, SEEK_END);
        proximo = FIM_LISTA;
    }
    else {
        fseek(arqDesenv, byteOffset, SEEK_SET);
        fscanf(arqDesenv, "%d", &proximo);
        fseek(arqDesenv, byteOffset, SEEK_SET);
    }*/
    fseek(arqDesenv, 0, SEEK_END);
    proximo = FIM_LISTA;
    //proximo = proximo + 2;
    fprintf(arqDesenv, "%d\t", proximo);
    fprintf(arqDesenv, "%.20s\t", desenvolvedor->e_mail);
    fprintf(arqDesenv, "%.15s\t", desenvolvedor->nome);
    fprintf(arqDesenv, "%.5s\t", desenvolvedor->senha);
    fseek(arqDesenv, 0, SEEK_SET);

    //fprintf(arqDesenv, "%.5d", proximo);
    /* Fechamento dos arquivos */
    fclose(arqDesenv);
    return SUC_FUNCAO;
}

int atualiza_usuario(char* e_mail, Desenvolvedor *desenvolvedor) {
    FILE *arqDesenv;

    arqDesenv = fopen(DB_DESENVOLVERDOR, "r+");

    fclose(arqDesenv);
    return SUC_FUNCAO;
}
