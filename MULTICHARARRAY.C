#include <stdio.h>

int main()
{
    int a[3], i;
    char name[3][20];
    float marks[5];

    printf("enter the details of students\n:");
    for (i = 0; i < 3; i++)
    {
        scanf("%d %s %f", &a[i], name[i], &marks[i]);
    }

    printf("\ndetails of students:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d %s %.1f\n", a[i], name[i], marks[i]);
    }
    

    return 0;
}