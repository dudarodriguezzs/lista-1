#include <stdio.h>
#include <stdlib.h>
#include <math.h>                

int main() {
    double tempo, velocidadeMedia, distancia, litrosUsados;
    double consumoPorKm = 12.0;

    // Solicita ao usuário o tempo gasto na viagem em horas
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%lf", &tempo);

    // Solicita ao usuário a velocidade média durante a viagem
    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%lf", &velocidadeMedia);

    // Calcula a distância percorrida
    distancia = tempo * velocidadeMedia;

    // Calcula a quantidade de litros de gasolina utilizados
    litrosUsados = distancia / consumoPorKm;

    // Exibe os resultados
    printf("Distância percorrida: %.2lf km\n", distancia);
    printf("Quantidade de litros de gasolina utilizados: %.2lf litros\n", litrosUsados);

    return 0;
}

