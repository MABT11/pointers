//getting started with pointers 

#include <stdio.h>

int main()
{
    int a = 0;
    int *p = &a;
    printf("Location of the pointer: '%p'\n",p);
    printf("Value that the pointers points to: '%d'\n",*p);
    *p = 9;
    printf("After assigning new value to the pointed location: '%d'\n",*p);
    //this will move the value to the newxt 4 bytes becuause its an int and its size is 4 bytes
    p++;
    printf("Size of int is: %lu bytes\n",sizeof(int));
    printf("Incrementing the pointer not its value: '%p'\n",p);
    
    printf("Before incrementing one '%d'\n",*p);
    //adding one to a new location of a but its not a it is p pointing 4 bytes away from a
    (*p)++;
    printf("After incrementing one '%d'\n",*p);
}