#include <stdio.h>
#include <stdint.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
    scanf("%d", &n);
    char opL[35], opR[35];
    int A[35], B[35];
    for (int i = 0; i < n; i++){
        scanf(" %c %d %c %d", &opL[i], &A[i], &opR[i], &B[i]);
    }
    int64_t c = 1, d = 1, e = 0;
    for (int i = n-1; i >= 0; i--){
    char leftOp = opL[i], rightOp = opR[i];
    int a = A[i], b = B[i];
    if (c >= d) {
    int64_t newC=c*(leftOp == 'x' ? a : 1);
    int64_t newD=d+c*(rightOp == 'x' ? (b - 1) : 0);
    int64_t newE = e+c*(leftOp == '+' ? a : 0) + c * (rightOp == '+' ? b : 0);
    c = newC;d= newD; e = newE;
    } else {
        int64_t newC=c+d*(leftOp == 'x' ? (a - 1) : 0);
    int64_t newD =d* (rightOp == 'x' ? b : 1);
    int64_t newE =e+d*(leftOp == '+' ? a : 0) + d * (rightOp == '+' ? b : 0);
    c = newC;d =newD;e = newE;
    }
    }
    int64_t ans = c + d + e;
    printf("%lld\n", ans);
    }
    return 0;
}