
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

EXT_PPR int inicializa_persistencia();

EXT_PPR int armazena_produto(Produto *produto);

EXT_PPR int armazena_defeito(Defeito *defeito);

EXT_PPR int remove_produto(char *codigoProduto);

EXT_PPR int remove_comentario(char *codigoDefeito);

EXT_PPR int recupera_produto(char *codigoProduto, Produto *produto);


#endif
