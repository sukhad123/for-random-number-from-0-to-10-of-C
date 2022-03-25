 #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int n;
    srand(time(NULL));// this is used to have different value in different compilationk
    
    n = rand()%11;// to create a random number from 0 to 10
    printf("%d", n);
}