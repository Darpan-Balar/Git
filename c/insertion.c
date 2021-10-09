#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        int j = i, val = arr[i];
        while (j > 0 && arr[j - 1] < val)
        {

            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = val;
    }
}

int main()
{
    int marks[7], i;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &marks[i]);
    }
    insertion_sort(marks, 7);
    for (i = 0; i < 7; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\n");
}