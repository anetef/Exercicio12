/*Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, 
a quantidade de filmes retirados por seus clientes durante o ano de 2020.
Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, 
o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por 
parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. */
#include <stdio.h>
#include<stdlib.h>

#define TAM 500

void calcularLocGratuitas(int vetorFilmesRetirados[], int vetorLocacoesGratuitas[]) {
    int i;

    for (i = 0; i < TAM; i++) {
        vetorLocacoesGratuitas[i] = vetorFilmesRetirados[i] / 15;
        printf(".Filmes retirados em 2020 por cliente ---> Cliente %d: numero de filmes retirados  %d\n", i+1,vetorFilmesRetirados[i]);
        
    }
}

int main() {
    int vetorA[TAM]; 
    int vetorLocacoes[TAM]; 

    for (int i = 0; i < TAM; i++) {
        vetorA[i] = rand() % 100 + 1; // (valores aleatórios)
    } 
    calcularLocGratuitas(vetorA, vetorLocacoes);
    for (int i = 0; i < TAM; i++) {
        printf("Cliente %d: tem direito a %d locacoes gratuitas\n", i + 1, vetorLocacoes[i]);
    }

    return 0;
}