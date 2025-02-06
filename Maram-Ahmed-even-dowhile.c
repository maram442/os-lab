#include <stdio.h> 
int main() {
 int sum = 0; 
int i = 1;
 printf("Using do-while ):\n"); 
do { if (i % 2 == 0) { 
// Check if the number is even 
printf("Adding: %d\n", i); 
sum += i; } i++; } 
while (i <= 100); 
printf("Sum of even numbers between 1 and 100: %d\n\n", sum); return 0; } 

