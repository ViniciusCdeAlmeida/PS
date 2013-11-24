/**
* @file Apresentacao.h
* @brief Cont�m Prot�tipos das fun��es de Apresentacao.c
* @author Vinicius Correa de Almeida
* @date Cria��o: 02/09/2013
*/


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
/**
* @brief Fun��o para cadastrar um novo desenvolvedor.
*/
void cadastroDesenvolvedor();
void alteraDesenvolvedor(int *);
/**
* @brief Fun��o para cadastrar um novo produto.
*/
void cadastraProduto(int *);
void alteraProduto(int *);
void listaProdutos();
void fechaProduto();
/**
* @brief Fun��o para cadastrar um novo defeito.
*/
void cadastraDefeito();

#endif
