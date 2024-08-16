#include <stdio.h>
#include <stdlib.h>
#include <math.h>                

int main() {
    double tempo, velocidadeMedia, distancia, litrosUsados;
    double consumoPorKm = 12.0;

    // Solicita ao usu�rio o tempo gasto na viagem em horas
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%lf", &tempo);

    // Solicita ao usu�rio a velocidade m�dia durante a viagem
    printf("Digite a velocidade m�dia durante a viagem (em km/h): ");
    scanf("%lf", &velocidadeMedia);

    // Calcula a dist�ncia percorrida
    distancia = tempo * velocidadeMedia;

    // Calcula a quantidade de litros de gasolina utilizados
    litrosUsados = distancia / consumoPorKm;

    // Exibe os resultados
    printf("Dist�ncia percorrida: %.2lf km\n", distancia);
    printf("Quantidade de litros de gasolina utilizados: %.2lf litros\n", litrosUsados);

    return 0;
}

