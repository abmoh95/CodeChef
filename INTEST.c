#include <stdio.h>

int main (void){

    int n, k, value, NoofDiv=0;

    printf("input\n");
    scanf("%d %d", &n, &k);
    while(n>0){
        scanf("%d", &value);
        if(value % k == 0){
            NoofDiv++;
        }
        n--;
    }
    printf("%d\n",NoofDiv);
    return 0;
}