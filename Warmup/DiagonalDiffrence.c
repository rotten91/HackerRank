#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,m;
    scanf("%d",&n);
    int a_i, a_j, diag_diff;
    int sum1 = 0;
    int sum2 = 0;
    m = n -1 ;
    int a[n][n];
    for(a_i = 0; a_i < n; a_i++){
        for(a_j = 0; a_j < n; a_j++){

            scanf("%d",&a[a_i][a_j]);
        }
    }
    for(a_i = 0;a_i < n; a_i++){
        for(a_j = 0;a_j < n; a_j++){
            if(a_i == a_j){
                sum1 += a[a_i][a_j];
            }if(a_i + a_j == n-1){
                sum2+=a[a_i][a_j];
            }

        }
    }
    diag_diff = abs(sum1 - sum2);
    printf("%d", diag_diff);
}