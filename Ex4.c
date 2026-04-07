#include <stdio.h>
#include <stdlib.h>

int main (){
int N, N1, N2;
printf ("\nDigite um numero: ");
scanf ("%d", &N);

N1 = N - 1;
printf ("\nNumero antecessor: %d", N1);
N2 = N + 1;
printf ("\nNumero sucessor: %d", N2);

return 0;
}
