#include <stdio.h>
#define N 8
int main() {
    int t,a[N]={12,32,98,76,67,85,9,69};
    for (int i = 0; i < N-2; ++i) {
        for (int k = 0; k < 8; ++k) {
            if(a[k]>a[k+1]) {
                t = a[k];
                a[k]=a[k + 1];
                a[k+1]=t;
            }
        }
    }
    for (int i = 0; i < 8; ++i) {
        printf(" %d ",a[i]);
    }
}
