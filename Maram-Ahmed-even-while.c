
#include <stdio.h> 
int main() { 
int sum = 0; 
int i = 1; 
printf("Using while loop :\n"); 
while (i <= 100) {
 if (i % 2 == 0) { 
// Check if the number is even 
printf("Adding: %d\n", i); sum += i; 
} i++; 
} 
printf("Sum of even numbers between 1 and 100: %d\n\n", sum);
 return 0; } 

