#include <stdio.h>

int main()
{
    float costoBiglietto;
    float provvigione;

    printf("Inserisci il costo del biglietto in euro\n");
    scanf("%f", &costoBiglietto);

    provvigione = (costoBiglietto/100)*15;
    if (provvigione < 5.0)
    {
        provvigione = 5.0;
    }

    printf("La provvigione del biglietto è %.02f€\n", provvigione);
    printf("Il prezzo finale del biglietto sarà %.02f€", costoBiglietto+provvigione);
}
