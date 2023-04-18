#include <stdio.h>

int main() {
    int a=1,b=2;
    float x=123.456,y=789.123;
    char c='A';
    long n=1234567;
    unsigned u=65535;
    printf("%d %d\n",a,b);
    printf("%5d %5d\n",a,b);
    printf("%f %f\n",x,y);
    printf("%4f %3f\n",x,y);
    printf("%-10f %10f\n",x,y);
    printf("%8.2f %8.2f\n",x,y);
    printf("%e %10.2e\n",x,y);
    printf("%c %d %e %x\n",c,c,c,c);
    printf("%ld %lo %x\n",n,n,n);
    printf("%u %o %u %d\n",u,u,u,u);
    printf("%s %5.3s\n","chain","chain");

}
