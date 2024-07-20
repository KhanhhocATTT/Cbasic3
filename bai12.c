#include <stdio.h>
#include <math.h>

int Prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int sum(long long n){
    int S = 0;
    while(n){
        S += n % 10;
        n /= 10;
    }
    return S;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(Prime(i) == 1 && sum(i) % 5 == 0){
            printf("%d ", i);
        } 
    }

    return 0;
}