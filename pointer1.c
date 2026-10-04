#include <stdio.h>
int main()
{
   int patient1 = 19 ,patient2 = 71;
   int *p1 = &patient1;
   int *p2 = &patient2;
   
   printf("Age of Patient 1 is : %d\n", patient1);
   printf("Age of Patient 2 is : %d\n", patient2);

   printf("Address of AGE1 IS: %p\n", (void*)p1);
   printf("Address of AGE2 IS: %p\n", (void*)p2);

   printf("Age of Patient1 (via pointer): %d\n",*p1);
   printf("Age of Patient2 (via pointer): %d\n",*p2);

   p1 = &patient2;

   printf("Age of Patient1 (via pointer after reassignment): %d\n",*p1);
   printf("Age of Patient2 (via pointer after reassignment): %d\n",*p2);

   

    return 0;
}