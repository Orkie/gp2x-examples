#include <stdlib.h>
#include <orcus.h>

int main(int argc, char* argv[]) {
  gp2xInit();

  for(int i = 0 ; i < argc ; i++) {
    uart_printf("argv[%d]: %s", i, argv[i]);
  }
  
  while(1);
}
