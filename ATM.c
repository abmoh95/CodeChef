//Problem Code:HS08TEST

#include <stdio.h>

int main(void)
{   
    int x;
    float y;
    scanf("%d %f", &x, &y);
        if (x % 5 == 0 && x <= (y-0.5))
        {
            y = y - x - 0.5;
            printf("%f", y);
        }  
    
    else  printf("%f", y); 

    return 0;
}