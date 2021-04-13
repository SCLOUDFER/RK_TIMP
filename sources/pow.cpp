#include "pow.h"
int pow(int a, int n){
    int pow = 1;
    for (int i = 0; i < n; ++i){
        pow*=a;
    }
    return pow;
};