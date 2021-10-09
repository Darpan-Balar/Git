#include <stdio.h>

int binary(int arr[], int req, int n)
{
    int i, left = 0, right = n - 1;
    int middle;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == req)
            return middle;
        else if (arr[middle] > req)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}

int main()
{
    int array[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &array[i]);
    }
    int y = binary(array, 45, 7);
    printf("%d\n", y);
}