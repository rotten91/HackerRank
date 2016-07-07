#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, arr_i;
    float bigger = 0, lower=0, equal=0;

    scanf("%d",&n);
    int arr[n];
    for(arr_i = 0; arr_i < n; arr_i++) {
        scanf("%d", &arr[arr_i]);
        if (arr[arr_i] < 0) { lower++;
        } else if (arr[arr_i] == 0) { equal++;
        } else { bigger++; };
    };
    float big_result = bigger/n;
    float zero_result = equal/n;
    float neg_result = lower/n;
    printf("%6f\n",big_result);
    printf("%6f\n",neg_result);
    printf("%6f\n",zero_result);
    return 0;
}
