// Computing the Dimensional Weight of a Box (Using scanf)

#include <stdio.h>
#define INCHES_PER_POUND 166
int main()
{
  int height, width, length, volume, weight;
  printf("enter the height: ");
  scanf("%d", &height);
  printf("enter the lentgh: ");
  scanf("%d", &length);
  printf("enter the width: ");
  scanf("%d", &width);
  
  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND; 
  
  printf("volume (cubic inches): %d\n", volume);
  printf("dimensional weight: %d\n", weight);

  return 0;

}

