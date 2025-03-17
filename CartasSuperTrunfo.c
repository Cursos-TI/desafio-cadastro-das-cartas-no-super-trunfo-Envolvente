#include <stdio.h>

int main() {
   int turisticos, população;
   float area, pib;
   char estado;
   char codigo, nome[20];

     

  printf ("Bem vindo ao cadastro de cartas! \n");

  printf ("Informe seu estado: \n ");
  scanf  ("&s" , &estado);

  printf ("Informe o codigo da carta: \n");
  scanf ("&s" , &codigo);

  printf ("Informe o nome da cidade: \n");
  scanf ("&s" , &nome);

  printf ("Informe o numero de habitantes: \n");
  scanf ("&d" , &população);



     
  
    return 0;
}
