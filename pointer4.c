#include <stdio.h>
int main()
{
    int morning = 28;
    int afternoon= 32;
    int evening = 18;
    int *tempptr = NULL;
    tempptr = &morning;

    printf("MORNING TEMPRATURE: %d\n",morning);
    printf("AFTERNOON TEMPARATURE: %d\n",afternoon);
    printf("EVENING TEMPARATURE: %d\n",evening);

    printf("CONTENT OF POINTER(tempptr): %d\n",*tempptr);
    printf("ADDRESS OF MORNING TEMP: %p\n",(void*)tempptr);

    *tempptr = 10;
    printf("MORNING TEMPARATURE AFTER CHANGING VALUE THROUGH POINTER: %d\n",*tempptr);

    tempptr = &afternoon;
    printf("CONTENT OF POINTER(tempptr): %d\n",*tempptr);
    printf("ADDRESS OF AFTERNOON TEMPARRATURE: %p\n",(void*)tempptr);

    tempptr = &evening;
    *tempptr = evening + 2;

    printf("CONTENT OF POINTER(tempptr): %d\n",*tempptr);
    printf("ADDRESS OF EVENING TEMPARATURE: %p\n",(void*)tempptr);

    return 0;

}