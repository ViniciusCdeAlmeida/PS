#ifndef PERSISTENCIA_USUARIO_H
#define PERSISTENCIA_USUARIO_H
#ifdef PERSISTENCIA_USUARIO_SERV
#define EXT_PD
#else
#define EXT_PD extern
#endif

/* Includes */

#include "..\..\Padroes.h"
#include "..\Logica\Logica.h"
/**
*   @brief Inicialização da persistência
*   @param
*   @return Retorna sucesso ou fracasso
*/
EXT_PD int inicializa_persistencia_d();
/**
*   @brief Armazena um desenvolvedor em arquivo
*   @param usuario: informações a serem armazenadas, deve vir preenchido
*   @return Retorna sucesso ou fracasso
*/
EXT_PD int armazena_desenvolvedor(Desenvolvedor *desenvolvedor);
/**
*   @brief Atualiza um desenvolvedor pela posição do registro no arquivo
*   @param nrr: posição do registro do arquivo, usuario: novas informações do registro, deve vir preenchido
*   @return Retorna sucesso ou fracasso
*/
EXT_PD int atualiza_desenvolvedor(char* e_mail, Desenvolvedor *desenvolvedor);
#endif
