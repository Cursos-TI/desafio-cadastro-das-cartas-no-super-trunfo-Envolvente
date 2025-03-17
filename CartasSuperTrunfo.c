#include <stdio.h>

int main() {
   char  nome[20];
   int  populacao;
   float area;
   char codigo[20];
   

     

  printf ("Bem vindo ao cadastro de cartas! \n");

  printf ("Digite o sigla da sua cartas \n");
  scanf ("%s", &nome);
  

  printf ("Digite o numero de habitantes\n");
  scanf ("%d", populacao);
  printf ("Digite o tamanho em metros quadrados do seu estado\n");
  scanf ("%d", area);
  
    return 0;

}
