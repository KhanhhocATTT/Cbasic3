#include <stdio.h>
#include <math.h>

int Prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    long long n;
    scanf("%lld", &n);
    if(Prime(n) == 1) printf("1");
    else printf("0");

    return 0;
}