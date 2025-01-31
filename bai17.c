#include <stdio.h>
#include <math.h>

int prime(long long n){
    if(n < 2) return 0;
    for(int i = 2 ; i <= 2; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int pt(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % prime(i) == 0){
            printf("%d", i);
        }
        n /= i;
        if(n > i) printf("*");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    pt(n);

    return 0;
}