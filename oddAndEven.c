#include <stdio.h>
#include <stdlib.h>


int odd(int n){
    if(n % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}


int main(){
    int n;
    scanf("%d",&n);
    if(odd(n)){
        printf("\n%d est paire\n", n);
    } else {
        printf("\n%d est impaire\n",n);
    }

    system("pause");
    return 0;
}