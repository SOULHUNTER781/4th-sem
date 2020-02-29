# include <stdio.h>
# include <stdlib.h>

int main ()
{
	int a[100],b[100],m,n,i,j,k,l,temp;
	printf ("Program to Perform Inplace Merge Sort\n");
	printf ("Enter the size of array A\n");
	scanf ("%d",&n);
	printf ("Enter the size of array B\n");
	scanf ("%d",&m);
    if(n <= 0 || m <= 0){
        printf("the input sizes should be always positive integers\n");
        exit(0);
    }
	printf ("Enter %d elements of array A in sorted form\n",n);
	for (i = 0;i < n;i++) {
		scanf ("%d",&a[i]);
        if (i > 0 && a[i-1] > a[i]) {
            printf("Invalid input\n");
            exit(0);
        }
    }
	printf ("Enter %d elements of array B in sorted form\n",m);
	for (i = 0;i < m;i++) {
		scanf ("%d",&b[i]);
        if (i > 0 && a[i-1] > a[i]) {
            printf("Invalid input\n");
            exit(0);
        }
    }
	printf ("Before Merge sorting:\nA:\t");
	for (i = 0;i < n;i++)
		printf ("%d\t",a[i]);
	printf ("\nB:\t");
	for (i = 0;i < m;i++)
		printf ("%d\t",b[i]);
	printf ("\n");
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
	printf ("After Merge Sort\nA:\t");
	for (i = 0;i < n;i++)
		printf ("%d\t",a[i]);
	printf ("\nB:\t");
	for (i = 0;i < m;i++)
		printf ("%d\t",b[i]);
	printf ("\n");
	return 0;
}
