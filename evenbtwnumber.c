#include<stdio.h>
int main()
{
int a1,a2,rem,i;
printf("enter the first number in the range,\n");
scanf("%d",&a1);
printf("enter the last number in the range,\n");
scanf("%d",&a2);
printf("the even numbers are");
for(i=a1+1;i<a2;i++){
	rem=i%2;
	if(rem==0)
	printf(" \n %d",i);
}
return 0;
}
