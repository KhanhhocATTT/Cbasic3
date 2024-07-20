typedef long long ll;

#include <stdio.h>
#include <math.h>

ll mu3(int n){
    ll a;
    a = pow(n, 3);

    return a;
}
ll arm(int n){
    int S = 0;
    int a = n;
    while(n){
        int r = n % 10;
        S += mu3(r);
        n /= 10;
    }
    
    if(S == a) return 1;
    else return 0;
}
int main(){
    int n;
    scanf("%d", &n);

    if(arm(n) == 1) printf("1");
    else printf("0");
}