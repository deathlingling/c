#include <stdio.h>
#include "string.h"
int main() {
    char a[3][10],b[10];
    int z,x,c;
    printf("ÊäÈë£º");
    scanf("%s %s %s",a[0],a[1],a[2]);
    printf("\n");
    if(strcmp(a[0],a[1])>0)strcpy(b,a[0]);
    else strcpy(b,a[1]);
    if(strcmp(a[2],b)>0)strcpy(b,a[2]);
    printf("%s",b);
}