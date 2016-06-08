#include <stdio.h>

int getCelcius (fahr) {
    float celcius = (5.0/9.0) * (fahr - 32);
    return celcius;
}

int main () {
    int temp;

    printf("Please enter a number: ");
    scanf("%d", &temp);
    float ntemp = getCelcius(temp);
    printf("%3.0d degrees fahrenheit would be %3.1f degrees celcius.\n", temp, ntemp);
}
