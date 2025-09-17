/* series_calc.c
   Calcula sumas parciales de:
   1) sum_{n=1}^N 1/n       (diverge)
   2) sum_{n=1}^N 1/n^2     (converge a pi^2/6)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    long long N;
    printf("Introduce el valor de N: ");
    if (scanf("%lld", &N) != 1 || N <= 0) {
        fprintf(stderr, "Valor de N inválido.\n");
        return 1;
    }

    long double sum_harm = 0.0L;
    long double sum_basel = 0.0L;

    for (long long n = 1; n <= N; n++) {
        sum_harm += 1.0L / (long double)n;
        sum_basel += 1.0L / ((long double)n * (long double)n);
    }



    printf("\nResultados para N = %lld\n", N);
    printf("-----------------------------------------------------------\n");
    printf("Serie armónica (sum_{n=1}^N 1/n):\n");
    printf("  Suma parcial = %.12Lf\n", sum_harm);
    printf("\n");

    printf("Serie de Basel (sum_{n=1}^N 1/n^2):\n");
    printf("  Suma parcial = %.12Lf\n", sum_basel);
    printf("-----------------------------------------------------------\n");

    return 0;
}

