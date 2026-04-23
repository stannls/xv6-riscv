#include "types.h"
#include "riscv.h"
#include "defs.h"

uint64 sys_hello(void) {
  int n;
  argint(1, &n);
  printf("Hello group number %d\n", n);
  return 0;
}
