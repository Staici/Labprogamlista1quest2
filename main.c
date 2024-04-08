#include <stdio.h>


int main(void) {
  int x;
  
  printf("Digite um número para ser transformado em hexadecimal e octal: ");
  scanf("%d",&x);
  printf("%d em octal é: %o\n",x,x);
  printf("%d em hexadecimal é: %x",x,x);
  return 0;
}