//Program to perform Inplace Merge sort by using Command line argument
//Including Header files
# include <stdio.h>
# include <stdlib.h>
//Main function declaration
int main (int argc,char *argv[])
{
	//Local variable declaration
	int i,j,k,l,temp,m,n;
	printf ("Program to Perform Inplace Merge Sort\n");
	int p=1;
	//Getting the values after converting the string values to  integer when  command line arguments are executed
	n = atoi(argv[p++]);
	m = atoi(argv[p++]);
	//Dynamic memory allocation based on the size of array entered by the user
	int a[n],b[m];
	//Taking input into the arrays from the command line argument
	for (i = 0;i < n;i++)
		a[i]=atoi(argv[p++]);
	for (i = 0;i < m;i++)
		b[i]=atoi(argv[p++]);
	//Printing the result before merge sorting
	printf ("Before Merge sorting:\nA:\t");
	for (i = 0;i < n;i++)
		printf ("%d\t",a[i]);
	printf ("\nB:\t");
	for (i = 0;i < m;i++)
		printf ("%d\t",b[i]);
	printf ("\n");
	//Performing Merge Sort
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < m;j++)
		{
			if (a[i] > b[j])
			{
				temp = a[i];
				a[i] = b[j];
				b[j] = temp;
				for (k =1;k < m;k++)
				{
					l = k;
					while (l >= 1)
					{
						if (b[l] < b[l-1])
						{
							temp = b[l];
							b[l] = b[l-1];
							b[l-1] = temp;
						}
						l--;
					}
				}
			}
		}
	}
	//Print the output after merge sort
	printf ("After Merge Sort\nA:\t");
	for (i = 0;i < n;i++)
		printf ("%d\t",a[i]);
	printf ("\nB:\t");
	for (i = 0;i < m;i++)
		printf ("%d\t",b[i]);
	printf ("\n");
	return 0;
}
