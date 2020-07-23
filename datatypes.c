#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a=3;
    long b=12345678912345;
    char ch='a';
    float c=334.23;
    double d=14049.30493;
    scanf("%d %ld %c %f %lf",&a,&b,&ch,&c,&d);
    printf("%d",a);
    printf("\n");
    printf("%ld",b);
    printf("\n");
    printf("%c",ch);
    printf("\n");
    printf("%3f",c);
    printf("\n");
    printf("%9lf",d);
    // Complete the code.
    return 0;
}
