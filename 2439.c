#include <stdio.h>
int main(){
    int i, j, k, N;
     scanf("%d", &N);
    for(i = 1; i <= N; i++){
    for(k = N - 1; k >= i; k--){
    printf(" ");
    }
    for(j = 1; j <= i; j++){
    printf("*");
    }
    puts("");
    }
    
}
