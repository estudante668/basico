

#include <stdio.h>

int main() {

  int pegaCaracters;
  int cont;

  cont = 0;
  pegaCaracters = getchar();

  while( pegaCaracters != EOF ){
      ++cont;
      putchar(pegaCaracters);
      pegaCaracters = getchar();
} 

   printf("%s %d\n", "Quantidade de caracteres: ", cont - 1);
   return 0;  

} 
