#include <stdio.h>

/**
* main - area with hard coded inputs
* Return: returns 0(sucess)
*/
int main(void)
{
    float Len, width;
    
    printf("Do you want to calculate the area of a rectangle?\n");
    printf("Type in Length followed by the Width: X,Y\n");
    printf("No spaces!\n");
    scanf("%f,%f", &Len, &width);
    float Area = Len * width;
    printf("Area is %f square unitsi\n", Area);

    return (0);
}
