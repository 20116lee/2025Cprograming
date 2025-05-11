#include<stdio.h>
int n;
int f(){
    int t=123;
    return t;
}

int main(){
    int s;
    scanf("%d",&n);

    s=0;
    for(int i=1;i<=n;i++)
        s=s+f();

    printf("%d\n",s);
}