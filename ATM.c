//Problem Code:HS08TEST

#include <stdio.h>

int main(void)
{   
    int x = 0;
    float y = 0;
    scanf("%d %f", &x, &y);
    if (x > 0 && x <= 2000 && y >= 0 && y <= 2000)
    {
        if (x % 5 == 0 && x < y)
        {
            y = y - x - 0.5;
            printf("%.2f", y);
            return 0;
        }
        else
            printf("%.2f", y);
            return 0;
    }
    else  y=0; printf("%.2f", y);
    return 0;
}