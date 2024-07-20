#include <stdio.h>
#include <math.h>

int reverse(long long n){
    int S = 0;
    int a = n;
    while (n){
        int r = n % 10;
        S = S * 10 + r;
        n /= 10;
    }
    if(S == a) return 1;
    else return 0;
}
int not9(long long n){
    int S;
    while(n){
        S = n % 10;
        if(S == 9) return 0;
        else return 1;
        n /= 10;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if(reverse(i) == 1 && not9(i) == 1){
            printf("%d ", i);
        }
    }

    return 0;
}