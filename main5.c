#include <stdio.h>
#include "string.h"
int main() {
    char a[10];
    int i,j;
    printf("�����ַ�����");
    gets(a);
//    puts(a);
    j= strlen(a);
    for ( i = j-1; i >=0; --i) {
        printf("%c",a[i]);
    }
}