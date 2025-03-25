#include<stdio.h>
#include<math.h>

int main (){

    float x1, y1, x2, y2;
    float q1, q2, d;

    printf("ponto 1: ");
    scanf("%f %f", &x1, &y1);
    printf("ponto2: ");
    scanf("%f %f", &x2, &y2);

    q1 = pow(x2-x1, 2);
    q2 = pow(y2-y1,2);
    d = sqrt(q1+q2);

    printf("Distancia: %f", d);

}


