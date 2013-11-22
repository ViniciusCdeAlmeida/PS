#ifndef LOGICA_H
#define LOGICA_H
#ifdef LOGICA_SERV
#define EXT_LOG
#else
#define EXT_LOG extern
#endif

/* Includes */
#include "..\..\Padroes.h"


#define TAM_NOME 15
#define TAM_SENHA 5
// Codigo produto
#define TAM_CD 4
// Codigo defeito
#define TAM_DF 4
#define TAM_EM 20
#define TAM_DD 30
#define TAM_VT 3
#define TAM_DA 10
#define TAM_VP 5

typedef struct listagens{
    char *informacao;
    struct listagens *proximo;
} Listagens;


typedef struct defeito {
    char codigoProduto[TAM_CD], descricaoDefeito[TAM_DD], codigoDefeito[TAM_CD], dataAbertura[TAM_DA], dataFechamento[TAM_DA];
    int byteOffset;

} Defeito;

typedef struct produto {
    char codigoProduto[TAM_CD], nomeProduto[TAM_NOME], versaoProduto[TAM_VP];
    int byteOffset;

} Produto;

typedef struct desenvolvedor {
    char nome[TAM_NOME], senha[TAM_SENHA], e_mail[TAM_EM];
    int byteOffset;

} Desenvolvedor;

EXT_LOG Produto* procura_produto(char* codigo);

EXT_LOG Listagens* cria_lista();

EXT_LOG Listagens* insere_lista(Listagens* lista, char* info);

EXT_LOG void deleta_lista(Listagens* lista);

EXT_LOG int cadastro_desenvolvedor(char* nome,char* e_mail,char* senha);

EXT_LOG int altera_desenvolvedor(char* novoUser, char* novaSenha, char* e_mail);

EXT_LOG int cadastra_produto(char* nome,char* codigoProduto,char* versao_produto);

EXT_LOG int altera_produto(char* nome,char* versao_produto);

EXT_LOG int cadastra_produto(char* e_mail,char* codigo,char* versao_produto);

EXT_LOG int cadastra_defeito(char* codigoProduto, char* codigoDefeito, char* descricaoDefeito, char* dataAbertura);


#endif /* LOGICA_H */
