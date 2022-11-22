#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  char c ;
  while(c!='q'){
    printf("Kya chata hai\n");
    printf("if wants to quit then press q otherwise press any key to continue\n");
    c = getchar();
    }
  return 0;
}