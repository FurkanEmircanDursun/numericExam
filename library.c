#include "library.h"

#include <stdio.h>
#include <math.h>

float denklem(int x){
    double e= exp(1);


    return pow(e,-x/2) -x-(0.2);
}
float dogrusalInterpolasyon(float a,float b){
    float kok;
    kok=(a*denklem(b)-b*denklem(a))/( denklem(b)- denklem(a));
    a=kok;
    if(denklem(a)* denklem(b)<0){
        printf("kok vardir");
    }

}
void hello(void) {
    dogrusalInterpolasyon(0,2);

}
