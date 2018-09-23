#include <stdlib.h>
#include <stdio.h>
#include "time.h"

#define MAX 800

int main()
{
	clock_t start, finish;
	double duration;

	int i, j, k;
	int p, m, n;
    
    printf("\n Please input row number m of A: \n");
    scanf("%d",&m);
    printf(" Please input column number n of A: \n");
    scanf("%d",&n);
    printf(" Please input row number p of B: \n");
    scanf("%d",&p);

	float A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	float tmp;	

	/* A */
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			A[i][j] = i+j;
		}
	}
    
    /* B */
    for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			B[i][j] = i+j;
		}
	}


    /* C */
    start = clock();
    for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
            tmp = 0.0;
			for (k = 0; k < n; k++) {
				tmp += A[i][k]*B[k][j];
			}
            C[i][j] = tmp;
		}
	}
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;    
    printf("\n Time is %f seconds\n", duration);

    return 0;
}
