#include <stdio.h>
int main()
{
    int number, size, sum = 0;
    printf("Enter sequence size: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
       printf("Enter your value: ");
       scanf("%d", &number);
       sum += number;
    }
    printf("The sum of the sequence is: %d\n", sum);
}
