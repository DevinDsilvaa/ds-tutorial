#include <stdio.h>

int arr[20];
int size, ch;
void display(int n)
{
    printf("\nArray elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void reverse(int size)
{
    int i = 0, j = size - 1, temp;

    while (i <= j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("Reverse ");
    display(size);
}

int search(int size)
{
    int val, i;
    printf("Enter a value to be searched within the array : ");
    scanf("%d", &val);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            printf("Value %d found at array position %d\n", val, i);
            break;
        }
    }

    if (i == size)
    {
        printf("Value %d not in the Array\n", val);
    }
}

void sort(int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    display(size);
}

int main()
{
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n***Array Operations***\n");
        printf("1.Display the Array\n");
        printf("2.Sort the Array\n");
        printf("3.Reverse the Array\n");
        printf("4.Search an element in the Array\n\n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            display(size);
            break;

        case 2:
            sort(size);
            break;

        case 3:
            reverse(size);
            break;

        case 4:
            search(size);
            break;

        default:
            break;
        }
    } while (ch > 0 && ch < 5);

    return 0;
}
