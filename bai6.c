#include <stdio.h>
#include <math.h>

int uoc(int n){
    int sum = 0;
    int r = n;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i != n / i){
                sum += n / i;
            }
        }
    }
    if(sum - r == r) return 1;
    else return 0;
}    
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(int i = a; i <= b; i++){
        if(uoc(i) == 1){
            printf("%d ", i);
        }
    }
    
    return 0;
}