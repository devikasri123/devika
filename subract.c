#include <stdio.h>
struct TIME
{
  
  int minutes;
  int hours;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter start time: \n");
    printf("Enter hours and minutes respectively: ");
    scanf("%d %d ", &startTime.hours, &startTime.minutes);

    printf("Enter stop time: \n");
    printf("Enter hours and minutes respectively: ");
    scanf("%d %d ", &stopTime.hours, &stopTime.minutes);

    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nTIME DIFFERENCE: %d:%d- ", startTime.hours, startTime.minutes);
    printf("%d:%d ", stopTime.hours, stopTime.minutes);
    printf("= %d:%d\n", diff.hours, diff.minutes);

    
}
