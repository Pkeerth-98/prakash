#include <stdio.h>
#include<conio.h>
 
void main()
{
  int array[100], maximum, size=80, c=90, location = 1;
 
  printf("Enter the number of elements in array");
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
 
  maximum = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  getch();
}
