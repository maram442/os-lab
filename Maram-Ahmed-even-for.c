
#include <stdio.h> 
int main() {
 int sum = 0; 
printf("Using for loop with if(even):\n"); 
for (int i = 1; i <= 100; i++) 
{ if (i % 2 == 0) { 
// Check if the number is even 
printf("Adding: %d\n", i); sum += i;
 } 
} 
printf("Sum of even numbers between 1 and 100: %d\n\n", sum); return 0; } 
