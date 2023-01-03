//
// Created by Esra Budak on 1/3/23.
//

#include "deepShallow.hpp"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Shallow Copy
    int a[5] = {1, 2, 3, 4, 5};

    int *shallow = a;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    shallow[2] = 100;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Deep Copy
    int *deep = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
    {
        deep[i] = a[i];
    }

    deep[4] = 500;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}