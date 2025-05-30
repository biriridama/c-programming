#include<stdio.h>

float chohokei(float t,float k);

    int main(void){
    float s=chohokei(7.4,9.5);
    printf("%f\n",s);  
    return 0;
    }
    float chohokei(float t,float k){
    float s;
        s=t*k;
        return s;
    }
