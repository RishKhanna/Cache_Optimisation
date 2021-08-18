#include <stdio.h>
#include <stdlib.h>

/* 
This code takes approximatly 5min to run on device with following config-
     *-memory
          description: System memory
          physical id: 0
          size: 8GiB
     *-cpu
          product: Intel(R) Core(TM) i5-7200U CPU @ 2.50GHz
          vendor: Intel Corp.
          physical id: 1
          bus info: cpu@0
          size: 3005MHz
          capacity: 3100MHz
          width: 64 bits
*/ 
int A[3500][3500], B[3500][3500], M[3500][3500];

int rand(void);
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  time_t t;
  
  /* Intializes random number generator */
  srand((unsigned) time(&t));

//Input

  // printf("Enter number of rows and columns of first matrix\n");
  // scanf("%d%d", &m, &n);
  m = 500;
  n = 500;
  // printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++){
      // scanf("%d", &A[c][d]);
      A[c][d] = (rand() % 600);
    }
 
  // printf("Enter number of rows and columns of second matrix\n");
  //  scanf("%d%d", &p, &q);
  p = 500;
  q = 500;
 
  if (n != p){
    // printf("The multiplication isn't possible.\n");
  }
  else
  {
    // printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++){
      // scanf("%d", &B[c][d]);
      B[c][d] = (rand() % 600);
    }

// Matrix Multiplication 

    for (int k = 0; k < m; k++) {
      for (int i = 0; i < q; i++) {
        int r = A[i][k];
        for (int j = 0; j < p; j++) {
          M[i][j] += r * B[k][j];
        }
      }
    }
 
    printf("Product of the matrices:\n");
 
    // for (c = 0; c < m; c++) {
    //   for (d = 0; d < q; d++)
    //     printf("%d\t", M[c][d]);
 
    //   printf("\n");
    // }
  }
 
  return 0;
}