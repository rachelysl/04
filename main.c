#include <stdio.h>

int main(void)
{
    int time;
    int min, sec;

    printf("input the second : ");
    scanf("%d", &time);

    min = time / 60;
    sec = time % 60;

    printf("the time is %d:%02d\n", min, sec);

    return 0;
}
  