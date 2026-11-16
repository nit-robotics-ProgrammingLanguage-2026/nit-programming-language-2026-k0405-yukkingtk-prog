
#include <stdio.h>

int main(void) {
    double r = 4.0;
    double pi = 3.141592;
    double x;
    double a;

    scanf("%lf", &x);

    a = (x / (2.0 * pi * (r / 2.0))) * 360.0;

    printf("%f\n", a);

    return 0;
}
