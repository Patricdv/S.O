#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

#define N 32
#define BigNum 250
int
main(int argc, char *argv[])
{
  int n, pid;// j, z, x;

  printf(1, "fork test\n");

  for (n = 1; n < N; n++) {
    pid = fork(n);
    if(pid < 0)
      break;
    if(pid == 0) {
      sleep(50);
      printf(1, "\n Proccess %d ended with %d tickets", n, n);
      exit();
    }
  }
  
  for (n = 1; n < N; n++) {
    wait();
  }

  if(n == N){
    printf(1, "\nfork claimed to work N times!\n", N);
  }


  printf(1, "fork test OK\n");
  exit();
}
