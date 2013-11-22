#ifndef APRESENTACAO_H
#define APRESENTACAO_H

/* Includes */
#include "..\..\Padroes.h"
#include "..\Logica\Logica.h"

/* Prot�tipos das fun��es */
/* Parametros e retornos ainda n�o s�o definitivos */

void menu_inicial(int *);
/**
* @brief Fun��o que invoca op��o do usu�rio.
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
