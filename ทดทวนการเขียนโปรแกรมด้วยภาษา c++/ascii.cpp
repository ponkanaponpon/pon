#include <stdio.h>
int main() {
  char dc;
  
  printf("Enter the character to get the ASCII value: ");
  scanf("%d", &dc);
  
  int ascii = dc;

  printf("ASCII value of %d = %c", dc, ascii);
  return 0;
}
