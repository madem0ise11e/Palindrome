#include <stdio.h>
int main(){
  int n, reversedN = 0, remainder, originalN;
  printf("Enter an integer: ");
  // Here, the user is asked to enter an integer.
  scanf("%d", &n);
  //The number is stored in variable n.
  originalN = n;
//We then assigned this number to another variable orignalN
  while (n != 0){
    remainder = n % 10;
    reversedN = reversedN * 10 + remainder;
//Then, the reverse of n is found and stored in reversedN.
    n /= 10;
  }

  if (originalN == reversedN)
//If originalN is equal to reversedN,
//the number entered by the user is a palindrome
    printf("%d is a palindrome.", originalN);
  else
    printf("%d is not a palindrome.", originalN);
  return 0;
}
