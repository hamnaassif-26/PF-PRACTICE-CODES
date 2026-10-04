#include <stdio.h>
int main()
{
    int prev_reading;
    int curr_reading;
    int *readingPtr = &prev_reading;

    printf("PREVIOUS READING:");
    scanf("%d",&prev_reading);

    printf("\nCURRENT READING: ");
    scanf("%d",&curr_reading);

    printf("\nVALUE OF PREVIOUS READING: %d\n",*readingPtr);
    printf("ADDRESS OF PREVIOUS READING: %p\n",(void*)readingPtr);

    *readingPtr = curr_reading;

    printf("\nCURRENT READING ( BY DEREFRENCING POINTER): %d\n",*readingPtr);
    printf("ADDRESS OF CURRENT READING IN POINTER IS: %p\n",(void*)readingPtr); //address will not chnge since value is updated not the variable is directed!

    readingPtr = &curr_reading; // now address will also change
    *readingPtr = curr_reading + 100;

    printf("\nCURRENT READING (BY DEREFRENCING): %d\n", curr_reading);
    printf("ADDRESS OF CURRENT READING IN POINTER: %p\n",(void*)readingPtr);

    printf("\n    THIS IS THE END\n   ");

    return 0;
}