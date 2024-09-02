#include <iostream>
int fibonnaci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main()
{
    int n = 9;
    int x = fibonnaci(n);
    printf("%d", x);
    
}
