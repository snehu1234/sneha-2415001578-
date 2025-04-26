//#include <stdio.h>
//#include "utilities.h"
//
//int main() {
//    // Problem 1: Calculate factorial of a number
//    int num = 5;
//    printf("Factorial of %d is %d\n", num, factorial(num));
//
//    // Problem 2: Find the nth Fibonacci number
//    int n = 6;
//    printf("The %dth Fibonacci number is %d\n", n, fibonacci(n));
//
//    // Problem 3: Check if a number is a palindrome
//    int palindromeTest = 121;
//    if (isPalindrome(palindromeTest))
//        printf("%d is a palindrome\n", palindromeTest);
//    else
//        printf("%d is not a palindrome\n", palindromeTest);
//
//    return 0;
//} 

#include <stdio.h>
#include "utilities.h"

int main() {
    // Declare function pointers
    MathFuncInt factorialPtr = factorial;
    MathFuncInt fibonacciPtr = fibonacci;
    MathFuncInt isPalindromePtr = isPalindrome;

    // Example 1: Calculate factorial
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorialPtr(num));

    // Example 2: Find the nth Fibonacci number
    int n = 6;
    printf("The %dth Fibonacci number is %d\n", n, fibonacciPtr(n));

    // Example 3: Check if a number is a palindrome
    int palindromeTest = 121;
    if (isPalindromePtr(palindromeTest)) {
        printf("%d is a palindrome\n", palindromeTest);
    } else {
        printf("%d is not a palindrome\n", palindromeTest);
    }

    return 0;
}


