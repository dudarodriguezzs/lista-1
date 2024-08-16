#include <stdio.h>
#include <math.h>  

int main() {
    float n1, n2;
    float triploN1;
    float metadeN2;
    float somaTriploMetade; 
    float somaN1N2;
    float raizQuadradaSoma;

    // Solicita ao usu�rio dois n�meros reais
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    // Calcula o produto do dobro do primeiro n�mero
    float dobroN1 = 2 * n1;
    printf("O produto do dobro do primeiro numero: %.2f\n", dobroN1);

    // Calcula a soma do triplo do primeiro n�mero com a metade do segundo n�mero
    triploN1 = 3 * n1;
    metadeN2 = n2 / 2;
    somaTriploMetade = triploN1 + metadeN2;
    printf("A soma do triplo do primeiro numero com a metade do segundo: %.2f\n", somaTriploMetade);

    // Calcula a raiz quadrada da soma do primeiro n�mero com o segundo n�mero
    somaN1N2 = n1 + n2;
    raizQuadradaSoma = sqrt(somaN1N2); // sqrt � usado para declarar raiz quadrada 
    printf("A raiz quadrada da soma do primeiro numero com o segundo numero: %.2f\n", raizQuadradaSoma);

    return 0;
}

