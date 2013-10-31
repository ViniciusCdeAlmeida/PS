/**
* @file interface_def.h
* @brief Contém Protótipos das funções de interface_impl.c, além disso possui algumas macros.
* @author Charles Cardoso de Oliveira
* @version 1.4
* @date Criação: 28/12/2012
* @date Modificação 1: 02/01/2013
* @date Modificação 2: 08/01/2013
* @date Modificação 3: 15/01/2013
* @date Modificação 4: 03/02/2013
*/

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

void cadastro_desenvolvedor();
void altera_desenvolvedor(int *);

void cadastra_produto(int *);
void altera_produto(int *);
void lista_produtos();
void fecha_produto();

void cadastra_defeito();

#endif
