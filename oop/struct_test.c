#include <stdio.h>
typedef struct  {
    int x;
    int y;
} Point;
int equel(Point p1, Point p2){
    return p1.x==p2.x&&p1.y==p2.y;
}
int main(){
    Point arrp[100];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d%d, &arrp[i].x, &arrp[i].y");
    }
    Point p;
    for(int i=0;i<n;i++){
        if(equel(arrp[i], p)){
            printf("asdadsada");
        }

    }
}