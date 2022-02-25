#include<stdio.h>
int Fibonachi(int n)
{
    static int num1=0,num2=1,num3;
    if(n>0){
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d ",num3);
        Fibonachi(n-1);
    }
}
int main()
{
    int num;
    printf("Enter the number of elements = ");
    scanf("%d",&num);
    printf("Fibonachi Series = ");
    printf("%d %d",0,1);
    Fibonachi(num-2);
    return 0;
}