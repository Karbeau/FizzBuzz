#include <stdio.h>

// Multiples of 3, print Fizz instead of the number
// Multiples of 5, print Buzz
// Multiples of both 3 and 5, print FizzBuzz

int main() {
    for (int i = 1; i <= 100; i++){
        if (i % 15 == 0){ // Least Common Multiple of 3 and 5 is 15. The number which is evenly divisible by the two given numbers is the LCM.
            printf("Fizz\n");
        } else if (i % 5 == 0){
            printf("Buzz\n");
        } else if (i % 3 == 0){
            printf("FizzBuzz\n");
        } else {
            printf("%d\n", i);
        }
    };
};