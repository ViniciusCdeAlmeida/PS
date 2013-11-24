#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "/Modulos/Apresentacao/Apresentacao.c"
#include "/Modulos/Logica/Logica.c"
#include "/Modulos/Persistencia/Persistencia_Usuario.c"
#include "/Modulos/Persistencia/Persistencia_Produtos.c"

#define CADASTRO_VALIDO 1

#define CADASTRO_ERRO 0



void executarTestes(void);
void TesteFatorialValido(CuTest *teste);
void TesteFatorialInvalido(CuTest *teste);

#endif // TESTE_H_INCLUDED
