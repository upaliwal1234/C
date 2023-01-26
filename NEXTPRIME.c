#include <stdio.h>
void NEXTPRIME(int *p){
    int a = *p;
    int c = 0;
    for(int j = a+1; c<2; j++){
        int flag = 0;
        for(int i = 2; i<=j/2; i++){
            if(j%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d\n",j);
            c++;
        }
    }
    
}
int main()
{
    int a;
    scanf("%d", &a);
    int *b = &a;
    NEXTPRIME(b);
    return 0;
}
