#include<stdio.h>
int search(int key,int a[],int len)
{
	int ret = -1;
	int i;
	for ( i=0; i<len; i++)
	{
		if(key == a[i])
		{
			ret = i;
			break;
		} 
	}
	return ret;
 } 
 int main()
 {
 	int a[] = {1,2,3,4,5,6,9,0,11,12};
 	int r = search(12,a,sizeof(a)/sizeof(a[0]));
printf("%d\n",r);
 return 0;
 }
