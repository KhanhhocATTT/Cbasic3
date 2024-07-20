#include <stdio.h>
#include <math.h>

typedef long long ll;
typedef int in;

ll gt(in n){
    ll S = 1;
    for(int i = 1; i <= n; i++){
        S *= i;
    }
    return S;
}
in main(){
    in n;
    scanf("%d", &n);
    ll sum = 0;
    in u = n;

    while(n){
        in r = n % 10;
        sum += gt(r);
        n /= 10;
    }
    if(sum == u) printf("1");
    else printf("0");

    return 0;
}