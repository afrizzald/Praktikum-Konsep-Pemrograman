#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c;
    
    a = 3;
    b = 4.0;
    c = a * a + b * b; //25
    c = sqrt(c);//c=5
    
    printf("c*c = %f", c*c);

return 0;
}