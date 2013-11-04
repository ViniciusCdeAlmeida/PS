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

void cadastro_desenvolvedor();
void altera_desenvolvedor(int *);

void cadastra_produto(int *);
void altera_produto(int *);
void lista_produtos();
void fecha_produto();

void cadastra_defeito();

#endif
