#include <stdio.h>

void main()
{
   float a=10,*pa;
    pa=&a;
    printf("address of a=%u\n",pa);
    printf("address of a=%u",a);
}
