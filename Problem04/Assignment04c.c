// MERGE TWO SORTED ARRAYS WITHOUT EXTRA SPACE O(1).
#include <stdio.h>

// Variable to hold the total no of basic operations.
int count = 0;


// The driven function defination.
int merge(int a[], int b[], int n, int m)
{
    // local variable declartion for holding the index and last_ele of array2.
    int i, j, last_ele;
    int temp;

    // Reading the array1 from the last element.
    i = n - 1;
    while(i > -1)
    {
        // Storing a copy of the last_element of the array2.
        last_ele = b[m-1];
        j = m - 2;
        count += 2;

        // Comparing until we get a element in array smaller than the current element in a[i].
        while(j >= 0 && b[j] > a[i])
        {
            b[j+1] = b[j];
            j -= 1;
            count += 2;
        }

        // If a number is encounterd greater than a[i] swap(a[i],last_ele) and assign the value of a[i] to b[j+1].
        if(j != m - 2 || a[i] < last_ele) {
            b[j+1] = a[i];
            a[i] = last_ele;
            count += 2;
        }
        i -= 1;
        count += 1;
    }
    return 0;
}
            
// Main function declaration.
int main()
{
    int n, m, i, j;

    // Enter the size of the array1 and array2 respectively.
    printf("Enter the size of array1 :: ");
    scanf("%d",&n);
    printf("Enter the size of array2 :: ");
    scanf("%d",&m);

    if(n <= 0 || m <= 0) {
        printf("The size of the arrays should be always positive\n");
        exit(0);
    }

    int a[n];
    int b[m];

    // Scanning the element's of the first array.
    printf("Enter the elements of first array :: ");
    for(i = 0; i < n; i++) {
        scanf("%d",&a[i]);
        if (i > 0 && a[i-1] > a[i]) {
            printf("Invalid input");
            exit(0);
        }

    // Scanning the element's of the second array.
    printf("Enter the elements of the second array :: ");
    for(i = 0; i < m; i++) {
        scanf("%d",&b[i]);
        if (i > 0 && a[i-1] > a[i]) {
            printf("Invalid input");
            exit(0);
        }
    }
    printf("\n\n");
    // Calling the driven function for merging the two arrays.
    merge(a,b,n,m);

    // Printing the two arrays after merge operation.
    printf("The contents of the array1 are :: ");
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("The contents of the array2 are :: ");
    for(j = 0; j < m; j++)
        printf("%d ",b[j]);
    printf("\n");

    // Printing the basic no of operations performed.
    printf("The basic no of operations performend are :: %d\n",count);

    return 0;
}
// The time complexity is O(n*m)





