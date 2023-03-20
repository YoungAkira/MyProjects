#include <stdio.h>

int adicao(int n){
    if (n==1){
        return 1;
    } else{
        return n + adicao(n-1);
    }
}



int main(){
    int n;
    printf("Digite um numero que seja natural: \n");
    scanf("%d", &n);
   
    printf("A soma dos valores ate numero 1 eh: %d\n", adicao(n));
    return 0;
}