

/* Includes */
#include "Apresentacao.h"

void menu_inicial(int *estadoUsuario){

    printf("**************************************************************\n");
    printf("******************** SISTEMA DE PRODUTOS *********************\n");
    printf("**************************************************************\n");
    if (*estadoUsuario == USUARIO_LOGADO) {
    printf("VOCE ESTA LOGADO.\n");
    }
	printf("01 - LOGIN PARA LIDER DE PROJETO.\n");
	printf("02 - LOGIN DESENVOLVEDOR.\n");
	printf("03 - CADASTRAR DESENVOLVEDOR.\n");
    printf("04 - ALTERAR CADASTRO.\n");
    printf("05 - CADASTRAR UM PRODUTO.\n");
	printf("06 - ALTERAR UM PRODUTO.\n");
    printf("07 - CADASTRAR DEFEITO.\n");
    printf("08 - FECHAR UM PRODUTO.\n");
    printf("09 - LISTAR PRODUTOS.\n");
    printf("10 - SAIR DO SISTEMA.\n");
    printf("**************************************************************\n");
}

void opcao_usuario(int *estadoUsuario){
/* Declarações */
int opcaoUsuario;

    do{
    printf ("POR FAVOR ESCOLHA UMA OPCAO: ");
    scanf ("%d", &opcaoUsuario);
        switch(opcaoUsuario){
            case 1:
                system("CLS");
                login_liderProjeto();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
			case 2:
                system("CLS");
                login_desenvolvedor();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
			case 3:
                system("CLS");
                cadastro_desenvolvedor();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 4:
                system("CLS");
                altera_desenvolvedor(estadoUsuario);
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
			case 5:
                system("CLS");
                cadastra_produto(estadoUsuario);
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 6:
                system("CLS");
                altera_produto(estadoUsuario);
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 7:
                system("CLS");
                cadastra_defeito();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 8:
                system("CLS");
                fecha_produto();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 9:
                system("CLS");
                lista_produtos();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 10:
                system("CLS");
                printf("O SISTEMA FOI FECHADO COM SUCESSO.");
                break;
            default:
                system("CLS");
                printf("ERRO: OPCAO ESCOLHIDA NAO EXISTE.\n");
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
        }
    }while(opcaoUsuario!=10);
}



void lista_produtos(){
}

void fecha_produto(int *estadoUsuario){
}

void login_desenvolvedor(int *estadoUsuario){
}

void login_liderProjeto(int *estadoUsuario){
}

void cadastro_desenvolvedor(){

}

void altera_desenvolvedor(int *estadoUsuario){
}

void cadastra_produto(int *estadoUsuario){
}

void altera_produto(int *estadoUsuario){}

void cadastra_defeito(int *estadoUsuario){
}
