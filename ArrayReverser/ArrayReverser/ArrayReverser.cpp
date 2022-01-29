// ArrayReverser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// int* y ---> Pointer to destination array
// int *x ---> Pointer to the source array
// int n ---> number of elements

extern "C" void Reverser(int* y, const int* x, int n);

int main()
{
    const int n = 10;
    int x[n], y[n];

    //srand(41);
    for (int i = 0; i < n; i++)
        x[i] = i;
      //      x[i] = rand() % 1000;

    Reverser(y, x, n);

    printf("\n----------------------- Array Reverser --------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("x: %5d      y: %5d\n", x[i], y[i]);

    }

    return 0;
}
