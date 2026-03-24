/*In number theory, 
a balanced prime (平衡質數) is a prime number with 
equal-sized prime gaps above and below it, 
so that it is equal to the arithmetic mean 
of the nearest primes above and below. 
Or to put it algebraically,
 the nth prime number pn is a balanced prime if 
 pn=(pn-1+pn+1)/2 ex. 5=(3+7)/ 
 list out how many balanced prime in 
 2 ~1000 including 2 and 1000 and list them out
 pn=(pn-1+pn+1)/2    ex. 5=(3+7)/2*/



#include <iostream>
#include <cstdio>

//1. check whether if a number is prime

bool is_Prime (int num) {
    if (num < 2) return false;
    for (int j = 2; j *j <= num;j ++){
        if (num %j ==0) return false;
    }
    return true;
}

int main(){
    int primes[1000];
    int prime_count =0;
    int limit = 1000;
    int current_number =2;

    while (true){
        if (is_Prime(current_number)) {
            primes[prime_count] = current_number;
            prime_count++;

            if (current_number > limit){
                break; 
            }
        }
        current_number++;
    }
    int balanced_count = 0;
    printf("Balanced Primes between 2 and %d:\n", limit);

    for (int i =1; i < prime_count -1; i++){
        //balance prime formula: 2 * p_n = p_{n-1} + p_{n+1}
         if (primes[i]*2 == primes[i-1]+ primes[i + 1]){
            balanced_count ++;
            printf("%d. %3d is balanced (between %3d and %3d)\n",balanced_count, primes[i], primes[i - 1], primes[i + 1]);

         }
    

    }
    printf("Total Balanced Primes found: %d\n", balanced_count);

    return 0;

    
}

/*Balanced Primes between 2 and 1000:
1.   5 is balanced (between   3 and   7)
2.  53 is balanced (between  47 and  59)
3. 157 is balanced (between 151 and 163)
4. 173 is balanced (between 167 and 179)
5. 211 is balanced (between 199 and 223)
6. 257 is balanced (between 251 and 263)
7. 263 is balanced (between 257 and 269)
8. 373 is balanced (between 367 and 379)
9. 563 is balanced (between 557 and 569)
10. 593 is balanced (between 587 and 599)
11. 607 is balanced (between 601 and 613)
12. 653 is balanced (between 647 and 659)
13. 733 is balanced (between 727 and 739)
14. 947 is balanced (between 941 and 953)
15. 977 is balanced (between 971 and 983)
Total Balanced Primes found: 15*/