#include <stdio.h>

int main() {
  int a = 10;
  int b = 0;
  
  if (b == 0) {
    fprintf(stderr, "Error: Division by zero detected!\n");
    return 1; // Indicate an error
  }
  
  int c = a / b;
  printf("Result: %d\n", c);
  return 0;
}
