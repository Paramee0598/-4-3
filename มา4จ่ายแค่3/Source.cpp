#include <stdio.h>

int main()
{

    int k[3];
    int i; 
    int j;
    int R = 199 ; // R = ราคาอาหาร
    
    printf("In put Number of people : ");
    for (i = 0; i < 3; i++)
    {
        scanf_s("%d", &k[i]);

        j = 0;
        j += (k[i] / 4);

        printf("Sum cost = %d Baht", (k[i] - j) *R);

    }
    return 0;
}