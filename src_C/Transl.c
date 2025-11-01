#include <stdio.h>


/// @brief It is necessary to write a program that displays a character depending on the entered ASCII number.
/// @param void just nothing
/// @return void
int main(void)
{
  short Number_of_sumb; 

  printf("Add a number: "); 
  scanf("%d", &Number_of_sumb);

  if (Number_of_sumb < 0 || Number_of_sumb > 127)
  {
    printf("The number cannot be greater than 127 or less than 0\n");
    return -1;
  }
  
  printf("\nNumber symbol is %c\n", Number_of_sumb);

  return 0;
}