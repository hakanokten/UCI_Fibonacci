#include <stdio.h>

int fibonacci (int x){
    int result[x];
    
    for (int i = 0 ; i<x ; i++) {
        if (i == 0){
            result[i] = 0;
        }
        else if (i == 1){
            result[i] = 1;
          
          }
        else{
            result[i] = result[i-1] + result[i-2];
        }
        
        printf("%d ", result[i]);
    }
    
    
    return result;
}

int main (){
    fibonacci(6);
}
