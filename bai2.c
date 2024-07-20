#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int last = n % 10;
    int first;
    while(n >= 10){
        first = n /= 10;
    }

    printf("%d %d", first, last);

    return 0;
}