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
  printf(1, "tests starting\n");
  int iterator = 1;
  while (iterator < 100) {
    fork(iterator); 
    iterator++;
  }

  exit();
}
