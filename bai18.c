#include <stdio.h>
#include <math.h>

int pt(long long n){
    int a = 0, b = 0, c = 0, d = 0;
    int S;
    while(n){
        int r = n % 10;
        if(r == 2) ++a;
        else if( r == 3) ++b;
        else if( r == 5) ++c;
        else if (r == 7) ++d;
        else return 0;
        n /= 10;
    }
    return a, b, c, d;
    
}
