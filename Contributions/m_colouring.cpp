#include<iostream>
#include<fstream>
using namespace std;
int x[100],c=0,m,g[100][100],n;
void print(int n)
{
	int i;
	cout<<endl;
	for(i=1;i<=n;i++)
		cout<<x[i]<<" ";
}
void nextValue(int k)
{
	while(1)
	{
		int i;
		x[k]=(x[k]+1)%(m+1);
		if(x[k]==0)
			return;
		for(i=1;i<k;i++)
		{
			if(g[k][i]==1 && x[i]==x[k])
				break;
		}
		if(i==k)
			return;
	}
}
void mcoloring(int k)
{
	while(true)
	{
		nextValue(k);
		if(x[k]==0)
			return;
		if(k==n)
		{
			c++;
			print(n);
		}
		else
		{
			mcoloring(k+1);
		}
	}
}
int main()
{
	fstream infile;
	infile.open("mcoloring.txt",ios::in);
	if(!infile)
	{
		cout<<endl<<"Error to open the file"<<endl;
		exit(1);
	}
	infile>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			infile>>g[i][j];
	}
	cout<<"Enter the no. of colors you want to assign : ";
	cin>>m;
	mcoloring(1);
	cout<<"\nThe number of possible solutions for "<<n<<" vertices and "<<m<<" colors are : "<<c<<endl;
	return 0;
  /**
  create a text file name mcolouring.txt and add these
  4
  0 1 0 1 
  1 0 1 0
  0 1 0 1
  1 0 1 0

  **/
}

