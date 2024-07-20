#include <stdio.h>

int sum(long long n){
    int S = 0;
    while(n){
        S += n % 10;
        n /= 10;
    }

    return S;
}
int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(sum(a) <= sum(b)){
        printf("%lld %lld", a, b);
    }
    else{
        printf("%lld %lld", b, a);
    }
}