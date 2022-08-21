#include <stdio.h>
/**
* main - area with hard coded inputs
* Return: returns 0(sucess)
*/
int main(void)
{
    const float pi = 3.142;
    float r = 4, h = 5, CylinderV/*CircleA*/;
    
    /*CircleA = pi * r * r;*/
    CylinderV = pi * r * r * h;
    
    /*printf("The Area of the circle is %f square units", CircleA);*/
    printf("The volume of tge cylinder is %f cubic units\n", CylinderV);
    
    return (0);
}
