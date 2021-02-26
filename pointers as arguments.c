#include <stdio.h>

void i (int* a)
{
    printf("Address of a in i is: %p\n",a);
    (*a)++;
}
int main()
{
    int a = 10;
    printf("Address of a in main before the call: %p\nValue of a before the call %d\n",&a,a);
    i(&a);
    printf("Adress of a after the call %p\nValue of a is:%d\n",&a,a);
}