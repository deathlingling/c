#include <stdio.h>
#define N 8
int main() {
    int j,k,i,t,a[N]={12,32,98,76,67,85,9,69};
    for (j = 0; j < N-1; ++j) {
        k=j;
        for (i = j+1; i < N; ++i)
            if(a[i]>a[k])
                k=i;
        if(i>=N){t=a[j];a[j]=a[k];a[k]=t;}
    }
    for ( i = 0; i < 8; ++i) {
        printf(" %d ",a[i]);
    }
}
