#include<iostream>
using namespace std;
int Intersection(int a1[], int a2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (a1[i] < a2[j])
      i++;
    else if (a2[j] < a1[i])
      j++;
    else 
    {
      cout<<a2[j++];
      i++;
    }
  }
}


int main()
{
  int a1[10] = {1, 2, 4, 5, 6,7,8,9,10};
  int a2[7] = {2, 3, 5, 7,10,12,16};
  int m = sizeof(a1)/sizeof(a1[0]);
  int n = sizeof(a2)/sizeof(a2[0]);
  Intersection(a1, a2, m, n);
  
  return 0;
}
