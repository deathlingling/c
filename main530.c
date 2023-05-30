#include <stdio.h>

//int gy(int x,int y){
//    int i,t;
//    if(x<y){t=x;x=y;y=t;}
//    for ( i = y; i >1 ; i--) {
//        if(x%i==0&&y%i==0)break;
//    }return i;
//}
//
//int gb(int x,int y){
//    return x*y/ gy(x,y);
//}
//int main() {
//    int x,y;
//    scanf("%d%d",&x,&y);
//    printf("gy=%d,gb=%d\n", gy(x,y), gb(x,y));
//    return 0;
//}
int pr(int n){
    int i;
    for (i = 2; i <=n-1 ; ++i) {
        if(n%i==0)break;
    }
    if(i==n)return 1;
    else
        return 0;
}
int main(){
    int n,i,sum;
    scanf("%d",&n);
    for ( i = 0; i < n; ++i) {
        if(pr(i)){ printf("%5d",i);sum+=i;}
    }
    printf("\n%d",sum);
}