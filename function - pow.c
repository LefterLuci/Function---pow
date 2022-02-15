#include <stdio.h>
#include <stdlib.h>

int power(int x, int y)
{
    int result;

    result=pow(x,y);

    return result;
}


int main()
{
    int num1, num2;

    printf("Please enter a number and the power you want to raise it to:\n");
    scanf("%d\n%d",&num1,&num2);

    printf("%d",power(num1,num2));

    return 0;
}
