#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++){
        int a,b,c;
        scanf("%d %d %d", &a,&b,&c);

        
        if(a+b==c){
            printf("+\n");
        }
        else if(a-b==c || a-b==-c){
            printf("-\n");
        }
    }
    return 0; 
}