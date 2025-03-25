#include<stdio.h>
int main (){
    int h, m, s, t;
    printf("Digite o tempo\n");
    scanf("%i %i %i", &h, &m, &s);
    t = h*3600+m*60+s;
    printf("tempo em segundos: %i", t);
}
