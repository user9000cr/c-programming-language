#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300
*/

int main() {
    float fahr, cels; // variables to hold the value of temp
    int lower, upper, step; // variables to hold the boundaries

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("FAHRENHEIT \t CELSIUS\n");
    while (fahr <= upper) {
        cels = 5 * (fahr - 32) / 9; // calculates the value in celsius

        printf("%3.1f\t\t%3.2f\n", fahr, cels); // prints the result

        fahr = fahr + step; // moves with the next temperature
    }
}
