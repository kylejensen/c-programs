#include <stdio.h>
int main () {
    int fahr, celcius;
    int lower, higher, step;

    fahr = lower = 0;
    higher = 300;
    step = 20;

    while (fahr <= higher) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
}
