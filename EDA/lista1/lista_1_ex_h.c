#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} tipoData;

typedef struct
{
    char nome[80];
    tipoData dtNascimento;
} tipoPessoa;

tipoPessoa separaInfo(char nome[80], int dt_nascimento)
{

    tipoPessoa pessoa;

    for (int i = 0; i < 80; i++)
    {
        pessoa.nome[i] = nome[i];
    }

    pessoa.dtNascimento.dia = dt_nascimento % 100;
    dt_nascimento = dt_nascimento / 100;
    pessoa.dtNascimento.mes = dt_nascimento % 100;
    dt_nascimento = dt_nascimento / 100;
    pessoa.dtNascimento.ano = dt_nascimento;

    return pessoa;
}
/*
int main()
{
    char nome[80];
    int data;
    tipoPessoa pessoa;

    scanf("%s %d", nome, &data);

    pessoa = separaInfo(nome, data);

    printf("%s %d %d %d", pessoa.nome, pessoa.dtNascimento.dia, pessoa.dtNascimento.mes, pessoa.dtNascimento.ano);
    return 0;
}*/