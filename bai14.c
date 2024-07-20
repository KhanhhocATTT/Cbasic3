#include <stdio.h>
#include <math.h>

int prime(long long n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }

    return 1;
}
int reverse(long long n){
    int a = n;
    long long S;
    while(n){
        long long r = n % 10;
        S = S * 10 + r;
        n /= 10;
    }
    if(S - a >= 0) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 2; i <= n; i++){
        if(prime(i) == 1 && reverse(i) == 1){
            printf("%d ", i);
        }
    }

    return 0;
}