#include <stdio.h>
#include <math.h>

long long gt(int n){
    long long S = 1;
    for(int i = 1; i <= n; i++){
        S *= i;
    }
    return S;
}
int main(){
    int n;
    scanf("%d", &n);
    long long S = gt(n);
    printf("%lld", S);

    return 0;
}