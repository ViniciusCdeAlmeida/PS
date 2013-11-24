/**
* @file Apresentacao.h
* @brief Contém Protótipos das funções de Apresentacao.c
* @author Vinicius Correa de Almeida
* @date Criação: 02/09/2013
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
/**
* @brief Função para cadastrar um novo desenvolvedor.
*/
void cadastroDesenvolvedor();
void alteraDesenvolvedor(int *);
/**
* @brief Função para cadastrar um novo produto.
*/
void cadastraProduto(int *);
void alteraProduto(int *);
void listaProdutos();
void fechaProduto();
/**
* @brief Função para cadastrar um novo defeito.
*/
void cadastraDefeito();

#endif
