#include <stdio.h>
#include<stdlib.h>
#ifndef _BANKER_H_
#define _BANKER_H_

int banker(int A[][10],int N[][10],int W[1][10],int n,int m);
void accept(int A[][10],int N[][10],int M[10][10],int W[1][10],int *n,int *m);
int safety(int A[][10],int N[][10],int AV[1][10],int n,int m,int a[]);
void res_request(int A[10][10],int N[10][10],int AV[10][10],int pid,int m);
void print(int x[][10],int n,int m);
#endif
