#include<stdio.h>
int min(int,int); //function declaration or prototype
int main()
{
    int a = 100;
    int b = 200;
    int ret;
    ret = min(a,b); //calling a function to get the minimum value
    //printf("");
    printf("\n Minimum Value is: %d \n", ret);
    return 0;
}

int min(int val1, int val2) 
{
    int result;
    if(val1<val2)
        result = val1;
    else
        result = val2;
    return result;
}