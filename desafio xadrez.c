#include <stdio.h>

int main (){
    int bispo_casas = 5;
    int b = 1;
    printf("\nMovimentos do Bispo");
    while (b <= bispo_casas) 
    {
        printf("\nCima, Direita"); 
        b++;
    }
    // Movimentos da Torre
int torre_casasa = 5;
printf("\nMovimentos da Torre");
for (int i = 1; i<= torre_casasa; i++) 
{
    printf("\nDireita");
}
int rainha_casasa = 5;
int r = 1;
printf("\nMovimentos da Rainha");
do 
{
    printf("\nEsquerda");
    r++;
} while (r <= rainha_casas);

return 0;
}


