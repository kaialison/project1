#include <stdio.h>
#include <math.h>
 
#define EPSILON 0.0001f
 
double mySqrt(int number)
{
    double result = 1.0f;
    while (fabs(result * result - number) / number >= EPSILON)
        result = (number / result  - result) / 2 + result;
    return result;
}
 
int main()
{
    int x;
    printf("Input x: ");
    scanf("%d", &x);
    printf("Sqrt of %d = %1.9f\n", x, mySqrt(x));
    return 0;
}