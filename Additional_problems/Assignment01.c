#include <stdio.h>
#include <stdlib.h>
#define s(a) scanf("%d",&a)
// The scanf function redefination for integers for simpler use.

// Variable to hold the no of basic operations.
int count = 0;

// The driven function.
void missing_no(int arr[],int n)
{
    // Sum of n numbers.
    int sum_n = (n*(n+1));
    sum_n /= 2;

    // Variable to hold the sum of the array.
    int sum_arr = 0;    

    for(int i = 0; i < n-1; i++)
    {
        sum_arr += arr[i];
        count += 1;
    }

    // The missing no is the the total no sum - sum of the array.
    int missing_number = sum_n - sum_arr;

    printf("The missing number is %d and %d is the no of basic operations.\n",missing_number,count);
}

// Main function declaration.
int main()
{
    //Enter the max size possible. 
    printf("Enter the max size possible :: ");
    int n;
    s(n);

    //Array declaration done here.
    int arr[n-1];
    int i;
    
    printf("Enter the array element's here :: ");
    for(i = 0; i < n-1; i++)
    {
        s(arr[i]);
        if(arr[i] > n) {
            printf("Invalid input\n");
            exit(0);
        }
    }

    //Driven function is called here
    missing_no(arr,n);
    return 0;
}








