//# include <stdio.h>
//#include "myFunctions.h"
//
//
//
//// Function to calculate factorial
//int factorial(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    return n * factorial(n - 1);
//}
//
//// Function to calculate the nth Fibonacci number
//int fibonacci(int n) {
//    if (n <= 0) return 0;
//    if (n == 1) return 1;
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//// Function to check if a number is a palindrome
//int isPalindrome(int n) {
//    int reversed = 0, original = n, remainder;
//    while (n != 0) {
//        remainder = n % 10;
//        reversed = reversed * 10 + remainder;
//        n /= 10;
//    }
//    return original == reversed; // Returns 1 (true) if palindrome, 0 (false) otherwise
//} 

#include <stdio.h>
#include "utilities.h"

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to check if a number is a palindrome
int isPalindrome(int n) {
    int reversed = 0, original = n, remainder;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed; // 1 if true, 0 if false
}

