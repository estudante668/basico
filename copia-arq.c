
#include <stdio.h>

int main() {
  int pegaCaracters;
  pegaCaracters = getchar();
  while( pegaCaracters != EOF ){
      putchar(pegaCaracters);
      pegaCaracters = getchar();
  }
  
}
