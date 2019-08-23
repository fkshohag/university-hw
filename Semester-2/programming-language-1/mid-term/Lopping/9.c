#include <stdio.h>
int main() {
  int n = 1000, number, reminder, sum, power_of_digit;
  for(int i = 0 ; i <= n; i++)
  {
    number = i;      
    while(number >=1 ) {
      reminder = number % 10; 
      power_of_digit = reminder * reminder * reminder; 
      sum = sum + power_of_digit; 
      number = number / 10;
    }    
    if(sum == i) {
      printf("%d ", i);
    }
    sum = 0;
  }
   
}
