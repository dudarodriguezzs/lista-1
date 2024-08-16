#include <stdio.h>
#include <math.h>


int main() {
    //Declaracao variaveis 
    float lado;
    float area;
    float calculo; 
    //Usuario informa o valor do lado 
    printf("Informe o comprimento do lado do quadrado: ");
    scanf("%f", &lado);
    //Calculo valor da area 
    area = lado * lado;
    calculo = area * 2;
    printf("O dobro da area do quadrado e: %.2f", calculo);
    
    return 0;
}
