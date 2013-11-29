/**
*   Arquivo MAIN
ok
*/

/* Includes */
#include "Padroes.h"
#include "Modulos\Apresentacao\Apresentacao.h"
#include "Modulos\Logica\Logica.h"
#include "Modulos\Persistencia\Persistencia_Produtos.h"
#include "Modulos\Persistencia\Persistencia_Usuario.h"


int main(int argc, char *argv[]) {

    int a;
    menu_inicial(&a);
    opcao_usuario(&a);
    return 0;

}
