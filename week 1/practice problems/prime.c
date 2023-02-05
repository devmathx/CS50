#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void) {

    int min;
    do {
        min = get_int("Minimum: ");
    } while (min < 1);

    int max;
    do {
        max = get_int("Maximum: ");
    } while (min >= max);

    for(int i = min; i <= max; i++){
        if(prime(i)){
            printf("%i\n", i);
        }
    }
}

bool prime(int number) {
    int numberOfDivisions = 0;
    for(int c = 1; c <= number; c++){
        if(number % c == 0){
            numberOfDivisions += 1;
            if(numberOfDivisions > 2){
                return false;
            }
        }
    }
    return true;
}
