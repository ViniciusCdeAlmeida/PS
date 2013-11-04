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
