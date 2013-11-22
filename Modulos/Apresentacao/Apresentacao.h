#ifndef APRESENTACAO_H
#define APRESENTACAO_H

/* Includes */
#include "..\..\Padroes.h"
#include "..\Logica\Logica.h"

/* Protótipos das funções */
/* Parametros e retornos ainda não são definitivos */

void menu_inicial(int *);
/**
* @brief Função que invoca opção do usuário.
*/
void opcao_usuario(int *);


void login_liderProjeto();
void login_desenvolvedor();

void cadastroDesenvolvedor();
void alteraDesenvolvedor(int *);

void cadastraProduto(int *);
void alteraProduto(int *);
void listaProdutos();
void fechaProduto();

void cadastraDefeito();

#endif
