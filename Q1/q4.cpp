//3)	Write a program to calculate sum and average of all element of 2-D array
/*#include<stdio.h>
#include <iostream>
#include <stdio.h>

int main()
{
    int array [3][5] = 
    {
        { 1, 2, 3, 4, 5, }, // row 0
        { 6, 7, 8, 9, 10, }, // row 1
        { 11, 12, 13, 14, 15 } // row 2
    };

    int i, j=0;
    int num_elements=0;
    float sum=0;

    for (i=0; i<num_elements; i++)
    {
        sum = sum + array[i][j];

    }

/*for(i=0; i<num_elements; i++)
   {
     printf("%d ", array[i][j]);
   }*/

    // printf("a[%d][%d] = %d\n", sum);

    // output each array element's value 
 /*   for ( i = 0; i < 3; i++ )
    {
      for ( j = 0; j < 5; j++ )
      {
          printf("a[%d][%d] = %d\n", i,j, array[i][j]);

      }
    }

    system("PAUSE");
    return 0;
}*/



#include <iostream>
using namespace std;

int main()
{
	float st_grades[2][2], sum[2], avg[2];
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
			cin>>st_grades[i][j];
	}
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			sum[i] += st_grades[i][j];
			avg[i] += sum[i]/3;
		}
	}
	cout<<endl;
	for (int k=0; k<3; k++)
	{
		cout<<sum[k]<<" & "<<avg[k]<<endl;
	}

	system ("pause");
}

