#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int max_index(int arr[], int start, int n)
{
    int i, index = start, max = arr[start];
    for (i = start + 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

void selec_sort(int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        int j = max_index(arr, i, n);
        if (j != i)
        {
            swap(arr, i, j);
        }
    }
}

int main()
{
    int marks[7], i;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &marks[i]);
    }
    selec_sort(marks, 7);
    for (i = 0; i < 7; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\n");
}