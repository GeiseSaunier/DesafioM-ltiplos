#include <stdio.h>

int main(){
    int a = 1000, soma=0;
    for(int i = 1; i < a ; i++){
        if(i%3 == 0 || i%5 == 0){
        soma+=i;
    }
}
    printf("%d\n", soma);
    return 0;

}