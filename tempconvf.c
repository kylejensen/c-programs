#include <stdio.h>

int main () {
    float fahr, celcius;
    int lower, higher, step;

    fahr = lower = 0;
    higher = 150;
    step = 10;

    printf("This is a Fahrenheight to Celcius conversion table\n");
    while (fahr <= higher) {
        celcius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}
