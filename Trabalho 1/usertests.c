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

  printf(1, "fork test\n");

  /*for (n = 1; n < N; n++) {
    pid = fork(n);
    if(pid < 0)
      break;
    if(pid == 0) {
      sleep(50);
      printf(1, "\n Proccess %d ended with %d tickets", n, n);
      exit();
    }
  }*/
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

    printf(1, "\n Proccess %d STARTED\n", 11);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 11, 1);
    exit();
  }
  pid = fork(2);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 2);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 2, 2);
    exit();
  }
  pid = fork(40);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 40);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 40, 40);
    exit();
  }
  pid = fork(3);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 3);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 3, 3);
    exit();
  }
  pid = fork(66);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 66);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 66, 66);
    exit();
  }

  pid = fork(12);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 12);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 12, 12);
    exit();
  }
  pid = fork(25);

  if(pid == 0) {
    printf(1, "\n Proccess %d STARTED\n", 25);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 25, 25);
    exit();
  }
  pid = fork(62);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 62);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 62, 62);
    exit();
  }
  pid = fork(1);

  if(pid == 0) {

    printf(1, "\n Proccess %d STARTED\n", 111);
    for (j = 0; j< BigNum; j++){
      for (z = 0; z< BigNum; z++){
        for (x = 0; x< BigNum; x++){
          printf(1, ""); // this is for the optmization system don't take off this useless for
        }
      }
    }
    printf(1, "\n Proccess %d ended with %d tickets\n", 111, 1);
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
