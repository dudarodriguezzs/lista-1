#include <stdio.h>
#include <math.h>  

int main() {
    float n1, n2;
    float triploN1;
    float metadeN2;
    float somaTriploMetade; 
    float somaN1N2;
    float raizQuadradaSoma;

    // Solicita ao usuário dois números reais
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    // Calcula o produto do dobro do primeiro número
    float dobroN1 = 2 * n1;
    printf("O produto do dobro do primeiro numero: %.2f\n", dobroN1);

    // Calcula a soma do triplo do primeiro número com a metade do segundo número
    triploN1 = 3 * n1;
    metadeN2 = n2 / 2;
    somaTriploMetade = triploN1 + metadeN2;
    printf("A soma do triplo do primeiro numero com a metade do segundo: %.2f\n", somaTriploMetade);

    // Calcula a raiz quadrada da soma do primeiro número com o segundo número
    somaN1N2 = n1 + n2;
    raizQuadradaSoma = sqrt(somaN1N2); // sqrt é usado para declarar raiz quadrada 
    printf("A raiz quadrada da soma do primeiro numero com o segundo numero: %.2f\n", raizQuadradaSoma);

    return 0;
}

