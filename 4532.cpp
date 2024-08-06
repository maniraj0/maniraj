#include<stdio.h>
int main()
{
	int n,i;
	FILE *fptr;
	printf("Enter the number of values to write to the file :");
	scanf("%d",&n);
	fptr = fopen("output.txt","w");
	if (fptr == NULL)
	{
		for (i=0; i<n; i++)
		{
			fprintf(fptr,"%d",i);
		}
    }
	return(1);
}

