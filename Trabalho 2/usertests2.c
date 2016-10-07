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
  int n, pid, j, z, x;


  pid = fork(1);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 1);

    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 1, 1);
    exit();
  }

  pid = fork(1);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 2);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 2, 1);
    exit();
  }
  pid = fork(2);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 3);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 3, 2);
    exit();
  }
  pid = fork(40);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 4);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 4, 40);
    exit();
  }
  pid = fork(3);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 5);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 5, 3);
    exit();
  }
  pid = fork(50);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 6);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 6, 50);
    exit();
  }

  pid = fork(12);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 7);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 7, 12);
    exit();
  }
  pid = fork(25);

  if(pid == 0) {
    printf(1, "\n Proccess %d STARTED\n", 8);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 8, 25);
    exit();
  }
  pid = fork(62);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 9);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 9, 62);
    exit();
  }
  pid = fork(25);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 10);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 10, 25);
    exit();
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
