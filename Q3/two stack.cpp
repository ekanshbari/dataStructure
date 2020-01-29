//write a pgrm using two stack print Hello
#include<iostream>
using namespace std;
class stack
{
    char stk[5];
    int top;
public:
    stack()
    
    {
        top = -1;
        
    }
    void push(char x)
    {
        if (top > 4) {
            cout << "stack overflow";
            return;
        }
        cin>>x;
        stk[++top] = x;
        cout << x;
    } 
      void display()
    {
        if (top < 0) 
		{
            cout << " stack empty"; 
			return;
		} 
		for (int i = top; i >= 0; i--)
			{
            cout << stk[i] << " ";
            }
    }
};

    int main()
    {
    stack st;
	st.push('hello');
	st.display();	
	}   
