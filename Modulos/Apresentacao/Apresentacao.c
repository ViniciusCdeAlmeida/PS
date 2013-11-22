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
                cadastroDesenvolvedor();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 4:
                system("CLS");
                alteraDesenvolvedor(estadoUsuario);
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
			case 5:
                system("CLS");
                cadastraProduto(estadoUsuario);
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 6:
                system("CLS");
                alteraProduto(estadoUsuario);
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 7:
                system("CLS");
                cadastraDefeito();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 8:
                system("CLS");
                fechaProduto();
                system("PAUSE");
                system("CLS");
                menu_inicial(estadoUsuario);
                break;
            case 9:
                system("CLS");
                listaProdutos();
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



void listaProdutos(){

    Produto *produto;
    char codigoProduto[TAM_CD];
    printf("Digite o codigo do produto: ");
    scanf("%s", codigoProduto);
    produto = procura_produto(codigoProduto);
    if(produto == NULL){
        printf("O produto nao existe.\n");
    }
    else{
        printf("Nome: %s\t", produto->nomeProduto);
        printf("Codigo: %s\n\n", produto->codigoProduto);
        printf("Versao: %s\n", produto->versaoProduto);
    }
}

void fechaProduto(int *estadoUsuario){
    int respostaLogica;
    char codigoProduto[TAM_CD], codigoDefeito[TAM_DF];
    if(*estadoUsuario == USUARIO_DESLOGADO){
        printf("VOCE PRECISA ESTAR LOGADO PARA EXECUTAR ESSA ACAO.\n");
    }
    else{
    printf("Digite o codigo do produto: ");
    scanf("%s", codigoProduto);
    printf("Digite o identificador do comentario: ");
    scanf("%s", codigoDefeito);
    //respostaLogica = removeProduto(e_mail, codigoProduto, codigoDefeito);
    if (respostaLogica == SUC_OPERACAO){
        printf("O produto foi encerrado com sucesso.\n");
    }
    else{
        printf("O codigo de produto ou de defeito informados nao existe.\n");
        }
    }
}

void login_desenvolvedor(int *estadoUsuario){
char nomeDesenvolvedor[TAM_NOME], senha[TAM_SENHA], e_mail[TAM_EM];
int respostaLogica;

    printf("********** LOGIN **********\n");
    printf("Digite seu nome: ");
    scanf("%s", nomeDesenvolvedor);
    printf("Digite sua senha: ");
    scanf("%s", senha);
    printf("Digite o seu e-mail: ");
    scanf("%s", e_mail);
    respostaLogica = SUC_FUNCAO;
    if(respostaLogica == SUC_FUNCAO){
        *estadoUsuario = USUARIO_LOGADO;
        printf("VOCE AGORA ESTA LOGADO NO SISTEMA.\n");
    }
    else{
        printf("USUARIO OU SENHA INVALIDOS.\n");
    }
}


void login_liderProjeto(int *estadoUsuario){
}

void cadastroDesenvolvedor(){

char nomeDesenvolvedor[TAM_NOME], e_mail[TAM_EM], senha[TAM_SENHA];
int respostaLogica;

    printf("********** CADASTRO DE DESENVOLVEDOR **********\n");
    printf("Digite seu nome (ate 15 digitos): ");
    scanf("%s", nomeDesenvolvedor);
    printf("Digite sua senha (ate 5 digitos): ");
    scanf("%s", senha);
    printf("Digite o seu e-mail (ate 20 digitos): ");
    scanf("%s", e_mail);
    respostaLogica = cadastro_desenvolvedor(nomeDesenvolvedor, e_mail, senha);
    if(respostaLogica == SUC_FUNCAO){
        printf("Cadastro efetuador com sucesso.\n");
    }
    else{
        printf("E-mail de desenvolvedor ja existe.\n");
    }
}

void alteraDesenvolvedor(int *estadoUsuario){
    char novoNomeDesenv[TAM_NOME], novaSenha[TAM_SENHA];

    if(*estadoUsuario == USUARIO_DESLOGADO){
    printf("VOCE PRECISA ESTAR LOGADO PARA EXECUTAR ESSA ACAO.\n");
    }
    else{
        printf("Digite o novo nome:");
        scanf("%s", novoNomeDesenv);
        printf("Digite a nova senha:");
        scanf("%s", novaSenha);
        //repostaLogica = atualizaDesenvoldedor(novoNomeDesenv, codigo, novaSenha);
        printf("Seus dados foram alterados com sucesso.\n");
    }
}

void cadastraProduto(int *estadoUsuario){
int respostaLogica;
char codigoProduto[TAM_CD], nomeProduto[TAM_NOME], versaoProduto[TAM_VP];

    if(estadoUsuario == USUARIO_DESLOGADO){
        printf("VOCE PRECISA ESTAR LOGADO PARA EXECUTAR ESSA ACAO.\n");
    }
    else{
        printf("Digite o codigo ddo produto: ");
        scanf("%s", codigoProduto);
        printf("Digite o nome: ");
        scanf("%s", nomeProduto);
        printf("Digite o texto da postagem:");
        scanf("%s", versaoProduto);
        respostaLogica = cadastra_produto(codigoProduto, nomeProduto, versaoProduto);
        printf("Produto cadastrado corretamente.\n");
    }
}

void alteraProduto(int *estadoUsuario){
    char novoNomeProduto[TAM_NOME], novaVersao[TAM_VP];
    int respostaLogica;
    if(*estadoUsuario == USUARIO_DESLOGADO){
    printf("VOCE PRECISA ESTAR LOGADO PARA EXECUTAR ESSA ACAO.\n");
    }
    else{
        printf("Digite o novo nome:");
        scanf("%s", novoNomeProduto);
        printf("Digite a nova senha:");
        scanf("%s", novaVersao);
        //repostaLogica = atualizaProduto(novaVersao, codigoProduto, novaVersao);
        printf("Seus dados foram alterados com sucesso.\n");
    }
}

void cadastraDefeito(int *estadoUsuario){
char codigoProduto[TAM_CD], descricaoDefeito[TAM_DD], codigoDefeito[TAM_CD], dataAbertura[TAM_DA];
int respostaLogica;
    if(estadoUsuario == USUARIO_DESLOGADO){
        printf("VOCE PRECISA ESTAR LOGADO PARA EXECUTAR ESSA ACAO.\n");
    }
    else{
        printf("Digite o codigo do defeito: ");
        scanf("%s", codigoDefeito);
        printf("Digite a descricao: ");
        scanf("%s", descricaoDefeito);
        printf("Digite a data da abertura:");
        scanf("%s", dataAbertura);
        respostaLogica = cadastra_defeito(codigoProduto, descricaoDefeito, codigoDefeito, dataAbertura);
        printf("Defeito cadastrado corretamente.\n");

    }
}
