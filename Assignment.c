#include<stdio.h>
int main(){
    int M;
    scanf("%d",&M);
    if(M%3==0 && M%5==0){printf("Good Number");}
    else if(M%3==0 && M%5!=0){printf("Bad Number");}
    else if(M%3!=0 && M%5==0){printf("Poor Number");}

}