

/* Includes ok */


#define LOGICA_SERV
#include "Logica.h"
#include "..\Persistencia\Persistencia_Produtos.h"
#include "..\Persistencia\Persistencia_Usuario.h"

Listagens* cria_lista(){
    return NULL;
}

Listagens* insere_lista(Listagens* lista, char* info){
    Listagens* novo=(Listagens*)malloc(sizeof(Listagens));
    novo->informacao=info;
    novo->proximo=lista;
    return novo;
}

void deleta_lista(Listagens* lista){
    Listagens* p=lista;
    while(p!=NULL){
        Listagens* t=p->proximo;
        free(p);
        p=t;
    }
}

Desenvolvedor* lista_desenvolvedor(char* e_mail){
    int temp;
    Desenvolvedor* desenv;
    //temp = recupera_desenvolvedor(e_mail,desenv);
    if(temp == INX_DESENVOLVEDOR)
        return NULL;
    return desenv;
}

Produto* procura_produto(char* codigo){
    int temp;
    Produto* produt;
    //temp = recupera_produto(codigo,produt);
    if(temp == INX_PRODUTO)
        return NULL;
    return produt;
}

int altera_desenvolvedor(char* novoUser, char* novaSenha, char* e_mail){
    Desenvolvedor *desenv=(Desenvolvedor*)malloc(sizeof(Desenvolvedor));
    desenv = lista_desenvolvedor(e_mail);
    if(desenv == NULL)
        return FRACASSO_LN;
    else
        cadastro_desenvolvedor(novoUser,e_mail,novaSenha);
}

int cadastro_desenvolvedor(char* nome, char* e_mail, char* senha){
    Desenvolvedor *desenv=(Desenvolvedor *)malloc(sizeof(Desenvolvedor));
    //desenv = lista_desenvolvedor(e_mail);
    if(desenv!=NULL){
        strcpy(desenv->nome,nome);
        strcpy(desenv->e_mail,e_mail);
        strcpy(desenv->senha,senha);
        if(armazena_desenvolvedor(desenv)){
            free(desenv);
            return SUCESSO_LN;
        }else{
            free(desenv);
            return FRACASSO_LN;
        }
    }
    free(desenv);
    return FRACASSO_LN;
}

int cadastra_produto(char* nome,char* codigoProduto,char* versaoProduto){
    Produto *produt=(Produto *)malloc(sizeof(Produto));

    //Desenvolvedor *desenv=(Desenvolvedor *)malloc(sizeof(Desenvolvedor));

    strcpy(produt->nomeProduto,nome);
    strcpy(produt->codigoProduto,codigoProduto);
    strcpy(produt->versaoProduto,versaoProduto);
        if(armazena_produto(produt)){
            free(produt);
            return SUCESSO_LN;
        }
        else{
            printf("Houve uma falha no armazenamento\n");
            free(produt);
            return FRACASSO_LN;
        }
}

int cadastra_defeito(char* codigoProduto,char* codigoDefeito, char* descricaoDefeito, char* dataAbertura){
    Defeito *defeit=(Defeito *)malloc(sizeof(Defeito));
    strcpy(defeit->codigoProduto,codigoProduto);
    strcpy(defeit->codigoDefeito,codigoDefeito);
    strcpy(defeit->descricaoDefeito,descricaoDefeito);
    strcpy(defeit->dataAbertura,dataAbertura);
    if(armazena_defeito(defeit)){
        free(defeit);
        return SUCESSO_LN;
    }
    else{
        free(defeit);
        return FRACASSO_LN;
    }
}
