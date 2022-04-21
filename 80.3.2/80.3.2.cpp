#include<stdio.h>
int main()
{
    int r, k, s, l;
    printf("半径");
    scanf_s("%d", &r);
    printf("K");
    scanf_s("%d", &k);

    s = 3.14 * (r * r) ;
    l = 2 * 3.14 * r;
    printf("s=%lf, l=%lf\n", s, l);
    if (k == 1)
    {
         printf("s=%f\n", &s);
    }
    else
    {
        if (k == 2)
        {
            scanf_s("%d", &l);
        }
        else
        {
            if (k == 3)
            {
                scanf_s("%d,%d", &s, &r);
            }
            else
            {

            }
        }
    }
}