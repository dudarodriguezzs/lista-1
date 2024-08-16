#include <stdio.h>
#include <math.h>

int main() {
	// Declarando variaveis 
    double pesoDoPeixe, excessoPeso, multa;
    const double limite = 50.0;
    const double valorMulta = 4.0;

    // Solicita ao usuário a quantidade de Kg de peixe pescado
    printf("Digite a quantidade de Kg de peixe pescado: ");
    scanf("%lf", &pesoDoPeixe);

    // Calcula o excesso e o valor da multa
    if (pesoDoPeixe > limite) {
        excessoPeso = pesoDoPeixe - limite;
        multa = valorMulta;
    } else {
        excessoPeso = 0;
        multa = 0;
    }

    // Exibe os resultados ao usuario 
    printf("Excesso de peso pescado: %.2lf Kg\n", excessoPeso);
    printf("Valor da multa: R$ %.2lf\n", multa);

    return 0;
}

