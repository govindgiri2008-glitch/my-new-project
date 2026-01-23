#include <stdio.h>
#include <string.h>
int main()
{
    char name[3][20];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d: ", i + 1);
        fgets(name[i], 20, stdin);
    }
    printf("\nthe names of customers are:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}