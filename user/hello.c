#include "kernel/types.h"
#include "user/user.h"
#include "kernel/syscall.h"

int main(int argc, char** argv) {
  if (argc <=1 ) {
    fprintf(2, "Please enter a group name to greet.\n");
    exit(1);
  }
  fprintf(1, "Hello Userspace, Group %s\n", argv[1]);
  exit(0);
}
