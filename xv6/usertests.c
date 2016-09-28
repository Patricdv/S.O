#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

int
main(int argc, char *argv[])
{
  printf(1, "\n\ntests starting\n");
  int iterator;
  for (iterator = 1; iterator <= 5; iterator++) {
    fork(iterator);
  }

  exit();
}
