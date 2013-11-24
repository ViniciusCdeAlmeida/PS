
#ifndef PERSISTENCIA_PRODUTOS_H
#define PERSISTENCIA_PRODUTOS_H
#ifdef PERSISTENCIA_PRODUTOS_SERV
#define EXT_PPR
#else
#define EXT_PPR extern
#endif

/* Includes */
#include "..\..\Padroes.h"
#include "..\Logica\Logica.h"
/**
*   @brief Inicializa e/ou verifica os arquivos necessários, garantindo a integridade do banco de dados
*   @param
*   @return Retorna sucesso ou fracasso
*/
EXT_PPR int inicializa_persistencia();
/**
*   @brief Armazena uma produto, passada por referência
*   @param produto: contém as informações a serem armazenadas, deve vir alocado
*   @return Retorna sucesso ou fracasso
*/
EXT_PPR int armazena_produto(Produto *produto);
/**
*   @brief Armazena um defeito, passado por referência
*   @param defeito: contém as informações a serem armazenadas, deve vir alocado
*   @return Retorna sucesso ou fracasso
*/
EXT_PPR int armazena_defeito(Defeito *defeito);
/**
*   @brief Remove a produto com o codigo correspondente ao identificador passado
*   @param codigo: codigo do produto
*   @return Retorna sucesso ou fracasso
*/
EXT_PPR int remove_produto(char *codigoProduto);
/**
*   @brief Remove o defeito com o codigo correspondente ao identificador passado
*   @param codigo: codigo do defeito
*   @return Retorna sucesso ou fracasso
*/
EXT_PPR int remove_defeito(char *codigoDefeito);
/**
*   @brief Procura sequencialmente pelo produto pelo seu codigo e preenche um objeto com suas informações
*   @param codigo: codigo do produto
*   @param produto: conterá as informações atuais do registro, deve vir alocado
*   @return Retorna o próximo nrr ou fim de lista
*/
EXT_PPR int recupera_produto(char *codigoProduto, Produto *produto);


#endif
