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
#define N_PROC 10

void
loop(){
  int j, z, x;
  for (j = 0; j< BigNum; j++){
    for (z = 0; z< BigNum; z++){
      for (x = 0; x< BigNum; x++){
        printf(1, ""); // this is for the optmization system don't take off this useless for
      }
    }
  }
}

int
main(int argc, char *argv[])
{
  int n, pid, i, val;
  // values ​​of each process = 10
  int val_ticket[N_PROC] = {1, 1, 2, 40, 3, 50, 12, 25, 62, 25};

  for (i = 0; i < N_PROC; ++i){
    val = val_ticket[i];
    pid = fork(val);

    if(pid == 0){
      printf(1, "\n Proccess %d STARTED\n", i);
      loop();
      printf(1, "\n Proccess %d ended with %d tickets\n", i, val);
      exit();
    }
  }

  for (n = 1; n < N_PROC+1; n++) {
    wait();
  }

  printf(1, "TEST Trab2 OK\n");
  exit();
}
