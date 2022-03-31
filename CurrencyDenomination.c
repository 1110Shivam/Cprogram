#include<stdio.h>
int t_notes(int amount);

int main(){
    int amount;
    printf("Enter the Amount of Cash = ");
    scanf("%d", &amount);

    t_notes(amount);

    return 0;
}

int t_notes(int amount){
    int a[10]={2000,500,200,100,50,20,10,5,2,1};
    int i,temp;
    temp = amount;

    for ( i = 0; i < 10; i++)
    {
        printf("\n%d Notes is = %d", a[i],temp/a[i]);
        temp = temp % a[i];
    }
    
}