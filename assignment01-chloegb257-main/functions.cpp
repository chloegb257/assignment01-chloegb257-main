#include "functions.h"
#include <cmath>



int max(int x, int y) 
{
    return (x > y) ? x : y; //returns th greater of two integers

}

int factorial(int n){
    int result =1;
    for (int i=1; i<=n; ++i){ //shows product of all integers from 1 to n
        result *= i;
    }
    return result;
}

bool isEven(int n){
    return (n % 2 == 0); //shows whether value is even
}

double average(int x, int y){ //calculates average of two numbers
    return (x + y) / 2.0;
}

bool isPrime(int n){ // checks if number is prime
    if (n <= 1) return false;

    for (int i = 2; i <= std::sqrt(n); ++i){
        if (n % i == 0) return false;
    }
    return true;
}

int gcd(int a, int b){ // calculates greatest common divisor of two numbers
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b){ // calculates least common multiple of two numbers
    return (a / gcd(a, b))*b;
}

int sumOfDigits(int n){; // calculates sum of digits of a number
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int reverseNumber(int n){ // reverses the digits of a number
    int reversed = 0;
    while (n != 0){
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

int countDigits(int n){ // counts the number of digits in a number
    if (n == 0) return 1;

    int count = 0;
    while (n != 0){
        count++;    
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n){ //finds out whether a number is an Armstrong number
   int digits = countDigits(n);
   int temp = n;
   int sum = 0;

   while (temp != 0){
       int digit = temp % 10;
       int power = 1;
         for (int i = 0; i < digits; ++i){
                power *= digit;
            }
         sum += power;
        temp /= 10;
   }
    return (sum == n);
}

int fibonacci(int n){ // calculates the nth Fibonacci number
   if (n ==0)   return 0;
   if (n ==1)   return 1;

   int a = 0, b = 1, c;
    for (int i =2; i <= n; ++i){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int numberOfDivisors(int n){ //counts the number of divisors of a number
    if (n<=1) return 0;
    
    int count = 0;
    for (int i =1; i <= n/2; i++){
        if (n % i == 0){
            count++;
        }
    }
    return count;
}

bool isPerfect(int n){ //checks whether a number is a perfect number
    int sum = 0;
    for (int i =1; i <= n/2; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return (sum == n);
}

bool isPalindrome(int n){ //determines whether a number is a palindrome
    return n == reverseNumber(n);
}
// UNCOMMENT TEST CASES AS YOU IMPLEMENT FUNCTIONS