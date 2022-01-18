#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[256];
  char sobrenome[256];
  int ano_nascimento;
  int idade;

  printf("Qual seu nome?\n");
  scanf("%s",nome);

  printf("\nQue nome bonito!, %s...Qual seu sobrenome?\n",nome);
  scanf("%s",sobrenome);

  printf("\nMuito prazer, %s,...Qual seu ano de nascimento?\n",nome);
  scanf("%d",&ano_nascimento);

  printf("\n%s, Qual sua idade?\n", nome);
  scanf("%d",&idade);

  printf("\nAh! %s, %d e a melhor idade!",nome,idade);

       return 0;
}

