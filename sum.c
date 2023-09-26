#include <stdio.h>

int main()
{
int i;
    int mynumber[6] = {12, 46, 38, 290, 47,8,54}; // Array indexes start with 0: [0] is the first element.
                                            // [1] is the second element
    // printf("%d\n", mynumber[0]);
for (i=0; i<=4; i++)
{
// printf("%d\n",mynumber[i]);
printf("%p\n", &mynumber[i]);
}
printf("%lu",sizeof(mynumber));
// int myNumbers[4] = {25, 50, 75, 100};
// int i;

// for (i = 0; i < 4; i++)
// {
//     printf("%p\n", &myNumbers[i]);
// }
    return 0;
}




     


