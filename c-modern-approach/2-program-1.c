// Computing the Dimensional Weight of a Box

#include <stdio.h>
int main()
{
    float height = 12.00;
    float length = 10.00;
    float width = 8.00;
    float volume = height * length * width;
    float weight = volume / 166.00;
    
    // int height2 = 8, length2 = 12, width2 = 10;
    // int volume2 = height2 * length2 * width2;
    // int weight2 = (volume2 + 165 ) / 166;

    printf("Volume: %.0f\n", volume);
    printf("Dimension (in clubic): 12'' * 10'' * 8''\n");
    printf("Dimensional weight: %.0f\n", weight);

    // printf("Volume: %d\n", volume2);
    // //printf("Volume: %d\n", height2 * length2 * width2);
    // printf("Dimension (in clubic): 12'' * 10'' * 8''\n");
    // printf("Dimensional weight: %d\n", weight2);

return 0;
}

