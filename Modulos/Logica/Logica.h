/**
* @file Apresentacao.h
* @brief Contém Protótipos das funções de Apresentacao.c
* @author Vinicius Correa de Almeida
* @date Criação: 12/09/2013
*/


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

/**
*   @brief Estrutura que define uma lista de strings
*/
typedef struct listagens{
    char *informacao;
    struct listagens *proximo;
} Listagens;

/**
*   @brief Estrutura que define um defeito
*/
typedef struct defeito {
    char codigoProduto[TAM_CD], descricaoDefeito[TAM_DD], codigoDefeito[TAM_CD], dataAbertura[TAM_DA], dataFechamento[TAM_DA];
    int byteOffset;

} Defeito;
/**
*   @brief Estrutura que define um produto
*/
typedef struct produto {
    char codigoProduto[TAM_CD], nomeProduto[TAM_NOME], versaoProduto[TAM_VP];
    int byteOffset;

} Produto;
/**
*   @brief Estrutura que define um desenvolvedor
*/
typedef struct desenvolvedor {
    char nome[TAM_NOME], senha[TAM_SENHA], e_mail[TAM_EM];
    int byteOffset;

} Desenvolvedor;

EXT_LOG Produto* procura_produto(char* codigo);
/**
*   @brief cria uma estrutura de dados do tipo "lista" vazia
*   @param <nada>
*   @return retorna uma lista vazia
*/
EXT_LOG Listagens* cria_lista();
/**
*   @brief insere elementos do tipo string dentro da lista
*   @param lista:estrutura de dados do tipo lista(vazia ou não)
*   @param info: uma string contendo a informação que se quer armazenar
*   @return retorna a lista inicial mais o elemento(info)
*/
EXT_LOG Listagens* insere_lista(Listagens* lista, char* info);
/**
*   @brief deleta da memória a lista desejada
*   @param lista: estrutura de dados do tipo lista
*   @return <nada>
*/
EXT_LOG void deleta_lista(Listagens* lista);
/**
*   @brief fornece os dados do desenvolvedor, devidamente encaixados dentro da estrutura, para a persistência
*   @param name:nome do desenvolvedor
*   @param ID:e-mail do desenvolvedor
*   @param senha:senha de acesso do desenvolvedor
*   @return retorna se foi bem sucedido ou não
*/
EXT_LOG int cadastro_desenvolvedor(char* nome,char* e_mail,char* senha);
/**
*   @brief fornece as novas informações do desenvolvedor a serem atualidas na persistência
*   @param novoUser: novo nome
*   @param novaSenha: nova senha
*   @param ID:e-mail do desenvolvedor(fixo, portanto não será alterado)
*   @return retorna se foi bem sucedido ou não
*/
EXT_LOG int altera_desenvolvedor(char* novoUser, char* novaSenha, char* e_mail);
/**
*   @brief armazena as informações dentro da estrutura Produto e envia para a persistência
*   @param Codigo: codigo do produto
*   @param Nome: nome do produto
*   @param Versao: versao do produto
*   @return retorna se houve sucesso ou não
*/
EXT_LOG int cadastra_produto(char* nome,char* codigoProduto,char* versao_produto);
/**
*   @brief fornece as novas informações do produto a serem atualidas na persistência
*   @param novoEstado: novo estado
*   @return retorna se foi bem sucedido ou não
*/
EXT_LOG int altera_produto(char* nome,char* versao_produto);
/**
*   @brief aramzena as informações dentro da estrutura Defeitos
*   @param Codigo produto: codigo do produto relacionado
*   @param Codigo defeito: codigo do defeito
*   @param Descriçao: descriçao do defeito
*   @param Data de abertura: data de abertura do defeito
*   @return retorna se foi sucesso ou não
*/
EXT_LOG int cadastra_defeito(char* codigoProduto, char* codigoDefeito, char* descricaoDefeito, char* dataAbertura);


#endif /* LOGICA_H */
