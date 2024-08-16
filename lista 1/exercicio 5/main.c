#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double custoDaFabrica, custoFinal;
   double  percentualDistribuidor = 0.28;
   double percentualImpostos = 0.45;

    // Solicita ao usuário o custo de fábrica do carro
    printf("Digite o custo de fabrica do carro: ");
    scanf("%lf", &custoDaFabrica);

    // Calcula o custo final ao consumidor
    custoFinal = custoDaFabrica + (custoDaFabrica * percentualDistribuidor) + (custoDaFabrica * percentualImpostos);

    // Exibe o custo final ao consumidor
    printf("Custo final ao consumidor: R$ %.2lf\n", custoFinal);

    return 0;
}

