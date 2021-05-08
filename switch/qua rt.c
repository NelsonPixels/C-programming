#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c,r1, r2, img,discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%d%d%d", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);
    switch(discriminant > 0)
    {
        case 1:
            r1 = (-b + sqrt(discriminant)) / (2 * a);
            r2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("2 distinct and real roots exists: %d and %d", 
                    r1, r2);
            break;

        case 0:
            switch(discriminant < 0)
            {
                case 1:
                    r1 = r2 = -b / (2 * a);
                    img = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: % + %d and %d - %d", 
                            r1, img, r2, img);
                    break;

                case 0:
                    r1 = r2 = -b / (2 * a);

                    printf("2 equal and real roots exists: %d and %d", r1, r2);

                    break;
            }
    }

    return 0;
}