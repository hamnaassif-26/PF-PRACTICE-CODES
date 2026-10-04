#include <stdio.h>
int main()
{
    int code1 = 7861, code2 = 172009;
    int *p  = &code1, *q = &code2;

    printf("CODE 1 = %d\n",code1);
    printf("CODE 2 = %d\n",code2);

    printf("Code 1 via dereferencing p : %d\n",*p);
    printf("Code 2 via dereferencing q: %d\n",*q);

    printf("ADDRESS OF CODE1: %p\n",(void*)p);
    printf("ADDRESS OF CODE2: %p\n",(void*)q);

    p = q; // assigns address of code2 to code 1 pointer

    printf("CODE 1:%d\n",code1);
    printf("CODE 2: %d\n",code2);

    printf("CODE 1: %d\n",*p);
    printf("CODE 2; %d\n",*q);

    printf("ADDRESS OF CODE1: %p\n",(void*)p);
    printf("ADDRESS OF CODE2 : %p\n",(void*)q);


    return 0;
}