#include<stdio.h>
int main(void)
{
    int score;
    scanf("%d" &score);
    if (90=<score)
    {
        printf("A\n");
    }
    else if (80=<score)
    {
        printf("B\n");
    }
    else if (70=<score)
    {
        printf("C\n");
    }
    else if (60=<score)
    {
        printf("D\n");
    }
    else if (0=<score)
    {
        printf("F\n");
    }
}