#include<stdio.h>
int largest_sum(int nums[],int n);
int main()
{
	int n, sum;
	printf("\nn: ");
	scanf("%d",&n);
	int nums[n];
	printf("\nEnter the numbers : ");
	for(int i=0; i<n; i++)
		scanf("%d",&nums[i]);
	sum = largest_sum(nums,n);
	printf("\nLargest sum: %d",sum);
}
int largest_sum(int nums[],int n)
{
	int sum = 0,k=0;
	for(int i=0; i<n; i++)
	{
		if(nums[i]<=0)
			continue;
		else
		{
			sum+=nums[i];
			k++;
		}
	}
	printf("\nNo.of elements considered: %d",k);
	return sum;
}