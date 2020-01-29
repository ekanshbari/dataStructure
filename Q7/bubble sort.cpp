/*#include<iostream>
using namespace std;

int main(){
     //declaring array
      int array[5];
      cout<<"Enter 5 numbers randomly : "<<endl;
      for(int i=0; i<5; i++)
      {
     //Taking input in array  
       cin>>array[i];        
      }  
      cout<<endl; 
      cout<<"Input array is: "<<endl;
      
      for(int j=0; j<5; j++)
      {
       //Displaying Array 
       cout<<"\t\t\tValue at "<<j<<" Index: "<<array[j]<<endl;         
      }   
      cout<<endl;
    // Bubble Sort Starts Here
     int temp;
     for(int i2=0; i2<=4; i2++)
   {
     for(int j=0; j<4; j++)
     {
        //Swapping element in if statement    
           if(array[j]>array[j+1])
       {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;        
       }
     }         
   } 
   // Displaying Sorted array
      cout<<"  Sorted Array is: "<<endl;
     for(int i3=0; i3<5; i3++)
   {
    cout<<"\t\t\tValue at "<<i3<<" Index: "<<array[i3]<<endl;  
   }   
return 0;
}
*/




/*so values on indexes of array is
array[0]= 5
array[1]= 4
array[2]= 3
array[3]= 2
array[4]=-5

In nested for loop bubble sort is doing its work

   outer loop variable is i2 will run form 0 to 4
   inner loop variable is  j will run from 0 to 3
          

Note for each i2 value inner loop will run from 0 to 3

like when 
 i2=0  inner loop  0 -> 3
 i2=1  inner loop  0 -> 3
 i2=2  inner loop  0 -> 3
 i2=3  inner loop  0 -> 3
 i2=4  inner loop  0 -> 3


input 5  4  3  2  -5
for i2= 0;
        j=0
        array[j]>array[j+1]
                   5    >   4        if condition true

                here we are swapping 4 and 5
                array after 4 5 3 2 -5        
                
                

                j=1
        array[j]>array[j+1]
                   5    >   3        if condition true

                here we are swapping 3 and 5
        array after 4 3 5 2 -5    


        j=2
        array[j]>array[j+1]
                   5    >   2        if condition true

                here we are swapping 2 and 5
        array after 4 3 2 5 -5   


        j=3
        array[j]>array[j+1]
                   5    >   -5        if condition true

                here we are swapping -5 and 5
        array after 4 3 2 -5 5   

         first iteration completed
---------------------------------------------------------------------------------------------------------------------

for i2= 1;
        j=0
        array[j]>array[j+1]
                   4    >   3        if condition true

                here we are swapping 4 and 3
                array after 3 4 2 -5 5   
                
                

                j=1
        array[j]>array[j+1]
                   4    >   2        if condition true

                here we are swapping 4 and 2
        array after 3 2 4 -5 5    


        j=2
        array[j]>array[j+1]
                   4    >   -5        if condition true

                here we are swapping 4 and -5
        array after 3 2 -5 4 5    
  


        j=3
        array[j]>array[j+1]
                   4    >   5        if condition FALSE

                no swapping
        array after 3 2 -5 4 5   
             
--------------------------------------------------------------------------------------------------------------

for i2= 2;
        j=0
        array[j]>array[j+1]
                   3    >   2        if condition true

                here we are swaping 3 and 2
                array after 2 3 -5 4 5 
                
                

                j=1
        array[j]>array[j+1]
                   3    >   -5        if condition true

                here we are swaping 3 and -5
        array after 2 -5 3 4 5 
                   


        j=2
        array[j]>array[j+1]
                   3    >   4        if condition FALSE

                no swapping
        array after 2 -5 3 4 5    
  


        j=3
        array[j]>array[j+1]
                   4    >   5        if condition FALSE

                no swapping
        array after 2 -5 3 4 5 a


--------------------------------------------------------------------------------------------------------------------


for i2= 3;
        j=0
        array[j]>array[j+1]
                   2    >   -5      if condition true

                here we are swaping 2 and -5
                array after -5 2 3 4 5
                
                

                j=1
        array[j]>array[j+1]
                   2    >   3       if condition FALSE

                no swapping
        array after -5 2 3 4 5 
                   
at this point we can see that our array is sorted

 but the code will continue to run for remaining iterations
 and every time if condtion will be FALSE because we have got
 required ascending sorted array.

Hope this will be helpful


*/

#include<iostream>
using namespace std;

int main()
{
	int i,temp,j,a[5];
	cout<<"enter value";
	
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
}





























