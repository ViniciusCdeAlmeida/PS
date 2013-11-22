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

EXT_PD int inicializa_persistencia_d();

EXT_PD int armazena_desenvolvedor(Desenvolvedor *desenvolvedor);

EXT_PD int atualiza_desenvolvedor(char* e_mail, Desenvolvedor *desenvolvedor);
#endif
