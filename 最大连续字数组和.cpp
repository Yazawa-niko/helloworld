#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int maxNUM(int num[],int n){
    int max=0,temp=0,i;
    for(i=0;i<n;i++)
	{
		if(temp<0)
			temp=num[i];
		else
			temp=temp+num[i];
		if(max<temp)
			max=temp;
	}
	return max;
}
int main()
{
	int n,i,max=0;
	int num[50]={0};
	printf("Please enter an integer number:\n");
	scanf("%d",&n);
	printf("please enter an integer:\n");
	for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=maxNUM(num,n);
	printf("The maximum sub segment sum is\n%d",max);
	return 0;
}
