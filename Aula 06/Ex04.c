#include<stdio.h>
#include<stdlib.h>

struct pessoa {
    char nome[50];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    char cpf[11];
};


typedef struct pessoa Pessoa;

Pessoa receberDados(Pessoa *p){
    strcpy(p->nome,"Marcos Antonio");
    strcpy(p->cpf, "128.454.469-90");
    p->diaNascimento = 27;
    p->mesNascimento = 10;
    p->anoNascimento = 2003;
}

void imprimirPessoa(Pessoa *p){
    printf("Nome: %s\nData de nascimento: %d/%d/%d\nCPF: %s\n", p->nome,p->diaNascimento,p->mesNascimento,p->anoNascimento,p->cpf);
}

int main(){
    Pessoa *p = malloc(sizeof(Pessoa));
    receberDados(p);
    imprimirPessoa(p);

}
