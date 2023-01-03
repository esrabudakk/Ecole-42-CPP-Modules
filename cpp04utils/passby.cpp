#include <stdio.h>

void f1(int a);               // pass by value
void f2(int a[], int length); // pass by reference

int main()
{
    int x = 10;
    printf("%d\n", x);
    f1(x);
    printf("%d\n", x);

    int arr[] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    f2(arr, 3);

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
}

void f1(int a)
{
    a = a + 2;
}

void f2(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        a[i] = a[i] + 2;
    }
}