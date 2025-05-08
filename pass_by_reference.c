#include<stdio.h>

void fun(int* p)
{
    *p = 20;
    //printf("Fun function x address : %p\n", &x);
}

int main(){
    int x = 10;
    fun(&x);
    printf("%d\n",x);
    //printf("Main function x address : %p\n", &x);
}
                                                                                                        