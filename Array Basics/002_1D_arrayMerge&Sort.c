//Note -> This program will only work data in array is sorted in ascending order!
//Try descending if your want , change the looping conditions

#include<stdio.h>
int a[50], b[50] , c[100];
int s1 , s2;
int i , j ,k;

int main()
{
    printf("Enter the size of array a : ");
    scanf("%d",&s1);

    for ( i = 0; i < s1; i++)
    {
        printf("Enter array a[] element %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n\n");


    printf("Enter the size of array b : ");
    scanf("%d",&s2);

    for (j = 0; j < s2; j++)
    {
        printf("Enter array b[] element %d : ",j);
        scanf("%d",&b[j]);
    }
    printf("\n\n");

i = 0;
j = 0;
k = 0;

while (i<s1 && j < s2)
{
    if (a[i] <= b[j])
    {
        c[k] = a[i];
        i++;
        k++;
    }
    else
    {
        c[k] = b[j];
        j++;
        k++;
        
    }

    
}
    while (i < s1)
    {
        c[k] = a[i];
        k++;i++;
    }

    while (j<s2)
    {
        c[k] = b[j];
        j++;k++;
    }
    
    printf("\nSorted Array : ");
    for ( k = 0; k < s1+s2; k++)
    {
        printf(" %d ", c[k]);
    }
    

return 0;
}