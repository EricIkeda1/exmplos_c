#include<stdio.h>
int main (){
    float preco, desconto, preco_final;

    scanf("%f", &preco);

    desconto = preco * 0,15;
    preco_final = preco - desconto;

    printf("%f", preco_final);

    return 0;
}
