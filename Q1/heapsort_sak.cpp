#include<iostream>
using namespace std;
int tree[20];
int n=0;
void insert_heap(int item)
{ int ptr,par;
  n=n+1;
  ptr=n;
  while(ptr>1)
  {
  par=ptr/2;
  if(item<=tree[par])
  { tree[ptr]=item;
     return;
  }
  tree[ptr]=tree[par];

  ptr=par;
}
  tree[1]=item;
}

void delete_heap()
{ int ptr,last,left,right,item;
  ptr=1;
  left=2;
  right=2;
  last=tree[n];
  n=n-1;
  item=tree[ptr];
  while(right<=n)
  { if(last>tree[left] && last>tree[right])
    { tree[ptr]=last;
      return;
    }
    else if(tree[left]>tree[right])
    {  tree[ptr]=tree[left];
        ptr=left;
	}
	else
	{  tree[ptr]=tree[right];
	ptr=right;
	}
	left=ptr*2;
	right=left+1;
  }
  if(left==n)
  { if(tree[left]>last)
    {  tree[ptr]=tree[left];
    ptr=left;
	}
  }
  tree[ptr]=last;
}

/* void heap_sort(int tree[10],int n )
{  for(int j=1;j<=n-1;j++)
   {  insert_heap(j,tree[j+1]);
   }
   while(n>1)
   { delete_heap();
     tree[n+1]=item;
   }
   exit();
} */
int main()
{ int n,a;
  cout<<"enter n";
  cin>>n;
  cout<<"enter elements";
  for(int i=0;i<n;i++)
  { cin>>a;
    insert_heap(a);
  }
  for(int i=1;i<=n;i++)
  {cout<<tree[i];
}
   delete_heap();
   
  for(int i=1;i<=n;i++)
  {cout<<endl<<tree[i];
}
/*
heap_sort();

  for(int i=1;i<=n;i++)
  {cout<<tree[i];
}*/
}
