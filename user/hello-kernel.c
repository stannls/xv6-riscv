#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char** argv) {
  if (argc <= 1) {
    fprintf(1, "Please enter a group number to greet.\n");  
    exit(1);
  }
  int n = atoi(argv[0]);
  hello(n);
  exit(0);
}
