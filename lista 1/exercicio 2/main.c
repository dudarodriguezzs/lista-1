#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarando vari�veis
    int graus_C;
    float calculo_graus_F;

    // Usu�rio informa o valor
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%d", &graus_C);

    // C�lculo Graus F
    calculo_graus_F = (graus_C * 9 / 5.0) + 32;

    // Exibindo o resultado
    printf("A temperatura em Fahrenheit �: %.2f\n", calculo_graus_F);

    return 0;
}

