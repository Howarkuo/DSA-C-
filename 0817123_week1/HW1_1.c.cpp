// square root rule
// to check if a number i is prime, we only need to test divisor to root i 
#include <iostream>  // Preprocessor: Input/Output
#include <cstdio>
/*Write a program in C or C++ to get 
the summation of the prime numbers between 2 and 3000.
*/

// j = 2,3,4... til square
bool is_Prime (int num){
    if (num <2) return false;
    for (int j =2; j *j <= num; j++){
        if (num % j ==0 ) return false;
    }
    return true;
}
int main(){
    int total =0;
    int limit = 3000;
    int count = 0;
    for (int i =2 ; i <= limit; i++){
        if  (is_Prime(i)){
            total += i;
            count++;
        }
    } 
    // Using printf for the output
    printf("Range: 2 to %d\n", limit);
    printf("Primes found: %d\n", count);
    printf("Total Summation: %d\n", total);
    return 0; 
}

