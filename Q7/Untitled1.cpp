#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,x,y,z,m,n;
	printf("Enter values of x y z=");
	scanf("%d%d%d",&x,&y,&z);
	a=(x>=5?10:5);
	printf("\nvalue of a is=%d",a);
	b=(y>=8?15:5);
	printf("\nvalue of b is=%d",b);
	c=(z>=15?12:14);
	printf("\nvalue of c is=%d",a);
	m=x+y+z;
	n=a+b+c;
	printf("\nthe value of m=%d",m);
	printf("\nthe value of n=%d",n);
	printf("\nvalue of m n is %s",m!=n?"not equal to":"equal to");
	getch();
	
}
