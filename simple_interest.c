#include <stdio.h>
int main() 
{
    // Write C code here
    /**
     * simple interest, A is equal to
     * P(1 + rt)
     * P is the starting amount
     * r is the rate
     * t is the time
     */
    //printf("Hello world");
    float A, P = 320, r = 1.5, t = 3;
    
    A = P * (1 + (r *t));
    printf("For a sum of %f dollars, rate of %f per annum and time of %f years", P, r, t);
    printf(", Simple interest is %f dollars\n", A - P);

    return 0;
}
