#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.14

float square(const int r);

int main()
{
    printf("Yaricap giriniz = ");

    int yaricap;
    float alan ;
    scanf("%d",&yaricap);
    alan = PI*square(yaricap);

    printf("dairenin alani : %1.1f",alan);

    return 0;
}

float square(const int r)
{

    float sqr= r*r;
    return sqr;
}

