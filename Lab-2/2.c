#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("**Program for sum first 20 natural nos**\n");
  printf("Name-Poonam, Class- MCA1A, Roll-34\n");
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
