#include <stdlib.h>
#include <stdio.h>
#include "time.h"

#define MAX 400

int main()
{
	clock_t start, finish;
	double duration;

	int i, j, k;
	int p, m, n;

	float A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	float tmp;	
    
    printf("\n Please input row number m of A: ");
    scanf("%d",&m);
    printf(" Please input column number n of A: ");
    scanf("%d",&n);
    printf(" Please input row number p of B: ");
    scanf("%d",&p);

	/* A */
	printf("\n Please input entries of A[%d][%d] :\n",m,n);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
	        printf(" A[%d][%d] : ",i,j);
	        scanf("%f",&(A[i][j]));
        }
    }
    
    /* B */
	printf("\n Please input entries of B[%d][%d] :\n",n,p);
    for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
        	printf(" B[%d][%d] : ",i,j);
        	scanf("%f",&(B[i][j]));
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
        
    printf("\n Result matrix C[%d][%d] is :\n",m,p);
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			printf(" %1f  ", C[i][j]);
		}
		printf("\n");
    }


    
    return 0;
}
