#include <stdio.h>
#include <conio.h>
/*Definições dos casos de teste.*/

void TesteFatorialValido(CuTest *teste){
CuAssertIntEquals(teste, RESULTADO_1, cadastro_desenvolvedor("Vinicius","vinicius@ps.com.br","12345");
}

void TesteFatorialInvalido(CuTest *teste){
CuAssertIntEquals(teste, ERRO_PARAMETRO, fatorial(VALOR_INVALIDO));
}

int main(int argc, char *argv[]){

/*Solicitar a execução dos testes.*/
executarTestes();

getch();
}

/*Função responsável por executar os casos de teste.*/

void executarTestes(void){

CuString *output = CuStringNew();
CuSuite* suite = CuSuiteNew();

/* Cria o conjunto de testes. */

CuSuiteAdd(suite, CuTestNew("Fatorial valido.", TesteFatorialValido));
CuSuiteAdd(suite, CuTestNew("Fatorial invalido.", TesteFatorialInvalido));

/*Executa o conjunto de testes e apresenta os resultados. */

CuSuiteRun(suite);
CuSuiteSummary(suite, output);
CuSuiteDetails(suite, output);
printf("%s\n", output->buffer);
}
#include "Teste.h"
