#include<stdio.h>
#include<math.h>
int n;
struct point{
    int x;
    int y;
    float d;
};
int main(){
    point p[10];
    int mini;
    int mind=99999;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d%d", &p[i].x,&p[i].y);
        p[i].d=(float)sqrt(p[i].x*p[i].x+p[i].y*p[i].y);
        if(p[i].d<mind){
            mini=i;
            mind=p[i].d;
        }
    }

    printf("%d%d%.3f\n",p[mini].x,p[mini].y,p[mini].d);

    return 0;
}
    
