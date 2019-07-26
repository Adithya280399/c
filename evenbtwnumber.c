#include<stdio.h>
int main()
{
int a1,a2,rem,i;
scanf("%d",&a1);
scanf("%d",&a2);
for(i=a1+1;i<a2;i++){
	rem=i%2;
	if(rem==0)
	printf(" \n %d",i);
}
return 0;
}
