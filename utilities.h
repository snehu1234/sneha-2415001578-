//#ifndef UTILITIES_H
//#define UTILITIES_H
//
//// Function declarations
//int factorial(int n){
//    return 0;
//}
//int fibonacci(int n){
//    return 0;
//}
//int isPalindrome(int num){
//    return 0;
//}
//
//#endif
#ifndef UTILITIES_H
#define UTILITIES_H

// Function pointer type for integer functions
typedef int (*MathFuncInt)(int);

// Function declarations
int factorial(int n);
int fibonacci(int n);
int isPalindrome(int n);

#endif

