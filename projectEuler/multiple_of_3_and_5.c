#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int calc(long int n) {
    long int i,j,k,l,sum3=0,sum5=0,sum15=0,res=0;
    if(n == 0)
        return 0;
    i = n % 3;
    j = n % 5;
    if(i==0) 
        i = n-3;
     else 
        i = n - i;
    
    if(j==0) 
        j = n-5;
     else 
        j = n - j;
    
    k = i / 3;
    l = j / 5;
    if(k == 1) 
        sum3 = 3;
    else 
        sum3 = (3 * (k * (k + 1))/2 );
    if(l == 1)
        sum5 = 5;
    else
        sum5 = (5 * (l * (l + 1))/2 );
    
    res = sum3 + sum5;
    sum15 = n % 15;
    if(sum15 == 0) {
        sum15 = n - 15;
    } else {
        sum15 = n - sum15;
    }
    sum15 = sum15 / 15;    
    sum15 = (15 * (sum15 * (sum15 + 1))/2 );
    res = res - sum15;
    return res;
    
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        long int res = calc(n);
        printf("%ld\n",res);
    }
    
    return 0;
}

