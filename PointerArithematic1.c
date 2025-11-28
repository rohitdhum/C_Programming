#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Data fetchted by p is :%lu\n",*p);  //21
    printf("Data fetchted by q is :%lu\n",*q);  //111


    return 0;
}