// square root rule: we only need to check in a range of root num (the divisors appears in pairs,
// and the search limit is the root of the number 
// like for 16 (1,16) (2,8) (4,4) )
// variable and data type: int, long long , float / double
// condition : if i % j ==0- check if j is a divisor, if (sum == i)- checks if the sum of divisors matches the original number
// repeat: while n < 5, for j = 2; j < = i; j++
// preprocessor: #include <stdio.h>, #define LIMIT 5
// str

//Q2>  In number theory, 
//a perfect number  is a positive integer that is equal to the sum of its positive divisors, 
//excluding the number itself. (wiki) ex. 6=1+2+3.
// Find the first 5 perfect numbers 

#include <stdio.h>

// Function: Encapsulates the perfect number logic
int is_perfect(int num) {
    int sum = 1; // Start with 1 because it's a divisor of every number
    
    // Square root rule: j * j <= num is efficient
    for (int j = 2; j * j <= num; j++) {
        if (num % j == 0) { // Condition: check if j is a divisor
            if (j * j == num) {
                sum += j;   // Case for perfect squares (like 4*4=16)
            } else {
                sum += j + (num / j); // Add both divisors in the pair
            }
        }
    }
    // Returns 1 (true) if sum matches num, and num isn't 1
    return (sum == num && num != 1); 
}

int main() {
    int found = 0;       // Counter variable
    int i = 2;           // Starting number
    int results[5];      // Array: to store the 5 numbers found
    printf("Searching for perfect numbers\n");
    // Repeat Structure: While searching for the first 5
    while (found < 5) {
        if (is_perfect(i)) {
            results[found] = i; // Store in the array
            printf("Found #%d: %d\n", found + 1, i);
            found++;
        }
        i++;
    }

    // Output: Using a for loop to print the array results
    printf("The first 5 perfect numbers are:\n");
    for (int k = 0; k < 5; k++) {
        printf("Number %d: %d\n", k + 1, results[k]);
    }

    return 0;
}

/* Searching for perfect numbers... (Please wait for the 5th one!)
Found #1: 6
Found #2: 28
Found #3: 496
Found #4: 8128
Found #5: 33550336
The first 5 perfect numbers are:
Found #4: 8128
Found #5: 33550336
The first 5 perfect numbers are:
Number 1: 6
Number 2: 28
Number 3: 496
Number 4: 8128
Number 5: 33550336 */
