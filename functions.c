#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    double d, alpha;
    
    d = 14;
    alpha = 180;
    double z1 = sin(PI / 2 + 3 * d) / (1 - sin(3 * alpha - PI)); //sin excepts args in radians
    double z2 = 1 / tan((5/4) * PI + (3/2) * alpha); //tan excepts args in radians
    
    printf("%lf\n", z1);
    printf("%lf\n", z2);

    return 0;
}
