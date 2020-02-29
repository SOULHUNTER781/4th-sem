#include <stdio.h>
#include <stdlib.h>

// The driven function for sorting the numbers.
void sort(int b[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(b[j]>b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }

            return;
        }

// The main function.
int main()
{
    int m,n,i,j,t;
// Enter the sizes of the array here.
    printf("enter m  ");
    scanf("%d",&m);
    printf("enter n  ");
    scanf("%d",&n);
    if(n <= 0 || m <= 0) {
        printf("The size of arrays should be positive integers\n");
        exit(0);
    }

    int a[m],b[n];

// Enter the elements of the array a.
    printf("enter the elements of a ");
    for(i=0;i<m;i++) {
        scanf("%d",&a[i]);
        if(i > 0 && a[i-1] > a[i]) {
            printf("Invalid input");
            exit(0);
        }
    }
    sort(a,m);

// Enter the elements of the array b.
    printf("enter the elements of b ");
    for(i=0;i<m;i++) {
        scanf("%d",&b[i]);
        if(i > 0 && a[i-1] > a[i]) {
            printf("Invalid input");
            exit(0);
        }
    }
    sort(b,n);
// The pointers i, j initialized for the array a and b.
    i=0;
    j=0;
    while(i<m)
    {
// Compare individual element a[i] and b[j].

        if(a[i]>b[j])
        {
// Swaping a[i] and b[j] elements.
            t=a[i];
            a[i]=b[j];
            b[j]=t;
// Sorting array b.
            sort(b,n);
        }
        i++;
    }
// printing the elements of array a.
    printf("arrays are :");
    for(i=0;i<m;i++)
        printf("%d    ",a[i]);
    printf("\n");
// printing the elements of the array b.    
    for(i=0;i<n;i++)
        printf("%d    ",b[i]);
    return 0;
}
