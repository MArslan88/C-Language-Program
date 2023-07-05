#include <stdio.h>
#include <math.h>


int main()
{
    float altitude, base, radius, area, volume;

    printf("Enter altitude of triangle:");
    scanf("%f",&altitude);

    printf("Enter base of triangle:");
    scanf("%f",&base);

    printf("Enter radius of sphere:");
    scanf("%f",&radius);

    // formulae
    area = (1.0/2.0)*(altitude*base);

    volume = (4.0/3.0)*(22/7)*pow(radius,3);

    printf ("\n Area of triangle = %.2f",area);

    printf ("\nVolume of sphere = %.2f",volume);




    return 0;
}


