#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, num, contador;

    contador = 0;

    for( x=1; x<=5; x++)
    {
        printf( "Entre com o numero %d:", x);
        scanf("%d", &num);

    }

    if((num >= 10)&&(num <= 150))
    {
        contador++;
    }

    printf("A QUANTIDADE DE NUMEROS DIGITADOS QUE ESTAO ENTRE 10 E 150 E: %d", contador );
    return 0;
}
