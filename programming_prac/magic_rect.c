#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	int dim[n][2];int k;
	printf("\nEnter %d dimensions: ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&dim[i][0]);
		scanf("%d",&dim[i][1]);
	}
	for(int i=0;i<n;i++)
	{
		if(dim[i][0]/(float)dim[i][1]>=1.5 && dim[i][0]/(float)dim[i][1]>=1.5 <=2.1)
			k++;
	}
	printf("%d",k);
	return 0;
}