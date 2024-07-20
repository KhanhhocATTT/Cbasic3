#include <stdio.h>
#include <math.h>

int prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }

    return 1;
}
int reverse(int n){
    int S;
    while(n){
        int r = n % 10;
        S = S * 10 + r;
        n /= 10;
    }
    return S;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(prime(i) == 1 && prime(reverse(i)) == 1){
            printf("%d ", i);
        }
    }

    return 0;
}