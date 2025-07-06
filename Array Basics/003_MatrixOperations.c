#include<stdio.h>


int main()
{
    int m , n; 
    int i ,j , k;
    printf("Enter no. of rows & columns for matrices : ");
    scanf("%d %d" , &m,&n);

    int a[m][n] , b[m][n] , c[m][n];

    printf("Enter the elements of matrix a : \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Element a[%d][%d] : ", i,j);
            scanf("%d" , &a[i][j]);
        }
    
    }

    printf("\n");
        
    printf("Enter the elements of matrix b : \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Element b[%d][%d] : ", i,j);
            scanf("%d" , &b[i][j]);
        }
    
    }

    printf("\n");

int ch;
label:
    do
    {
        printf("***Matrix Operations***\n");
        printf("1.Addition of Matrix : \n");
        printf("2.Multiplication of Matrix : \n");
        printf("3.Tranpose of Matrix : \n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            for ( i = 0; i < m; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
                
            }

            printf("\nAddition of Matrices is : \n");
            for ( i = 0; i < m; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    printf(" %d ",c[i][j]);
                }
                printf("\n");
            }
            
            
            break;
        
        case 2:
        if (m!=n)
        {
            return -1;
        }
        else{

    
            for ( i = 0; i < m; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    c[i][j] = 0;
                    for ( k = 0; k < m; k++)
                    {
                        c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    }
                }
                
            }
            
            printf("\nMultiplication of Matrices is : \n");
            for ( i = 0; i < m; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    printf(" %d ",c[i][j]);
                }
                printf("\n");
            }
        }  
        break;

        case 3:
        printf("\nTranspose of matrix is : \n");
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j < n; j++)
            {
                printf(" %d " , a[j][i]);
            }
            printf("\n");
        }
            printf("\n");
            break;
        
        default:
        printf("\n\nInvalid choice!\n\n");
        goto label;
            break;
        }

    } while (ch > 0 && ch<4);
    
        
return 0;
}