#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
 int sum,dif;
    sum=*a+*b;
    dif=*a-*b;
    *a=sum;
    *b=abs(dif);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}