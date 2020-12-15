#include <stdio.h>
int main()
{
	int a,num,n,revnumber,remainder;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&num);
	   a=num;
	   int revnumber=0;
	   while(a!= 0)
       {
          remainder = a%10;
          revnumber = revnumber*10 + remainder;
          a /= 10;
       }
     	if(num==revnumber)
          printf("\n Yes");
        else
          printf("\n No");
	}
	return 0;
}