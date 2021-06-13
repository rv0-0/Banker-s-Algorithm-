#include "banker.h"
void accept(int A[][10],int N[][10],int M[10][10],int W[1][10],int *n,int *m){
	int i,j;
	printf("\n Enter total no. of processes : ");
	scanf("%d",n);
	printf("\n Enter total no. of resources : ");
	scanf("%d",m);
	
	printf("\n\nEnter the Max Matrix for each process : ");
	for(i = 0; i < *n; i++)
    {
        printf("\nFor process %d : ",i + 1);
        for(j = 0; j < *m; j++)
            scanf("%d",&M[i][j]);
    }
	
	printf("\n\nEnter the allocation for each process : ");
    for(i = 0; i < *n; i++)
    {
        printf("\nFor process %d : ",i + 1);
        for(j = 0; j < *m; j++)
            scanf("%d",&A[i][j]);
    }

	printf("\n Available resources : \n");
	for(i=0;i<*m;i++){
		printf(" Resource %d : ",i+1);
		scanf("%d",&W[0][i]);
	}

	for(i=0;i<*n;i++)
		for(j=0;j<*m;j++)
			N[i][j]=M[i][j]-A[i][j];

	printf("\n Allocation Matrix");
	print(A,*n,*m);
	printf("\n Maximum Requirement Matrix");
	print(M,*n,*m);
	printf("\n Need Matrix");
	print(N,*n,*m);

}
