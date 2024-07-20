#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int count = 0;

    while(n){
        n /= 10;
        ++count;
    }
    printf("%d", count);

    return 0;
}