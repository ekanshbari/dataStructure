#include<stdio.h>
#include<Conio.h>
void tower(int,char,char,char);

int main()
{
	int num;
	printf("enter the number of discs");
	scanf("%d",&num);
	printf("The sequence of moves involved in tower of hanoi is\n");
	tower(num,'A','C','B');
	getch();
	return 0;
}
void tower(int num,char frompeg,char toppeg,char auxpeg)
{
	if(num==1)
	{
		
		printf("the disc 1 move from peg %c to peg %c\n",frompeg,toppeg);
		return;
	}
	tower(num-1,frompeg,auxpeg,toppeg);
	printf("the disc %d move from peg %c to peg %c\n",num,frompeg,toppeg);
    tower(num-1,auxpeg,toppeg,frompeg);
}
