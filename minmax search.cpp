#include<iostream>
int n;
int q=1;
using namespace std;
void minmax(int a[],int j,int min,int max)
{
	
	if(j==n)
	{
		
		cout<<"maximum="<<max<<endl;
		cout<<"minimum="<<min<<endl;
		q++;
	}
	else
	{
		if(a[j]<min)
		min=a[j];
		if(a[j]>max)
		max=a[j];
		j++;
		q++;
		return minmax(a,j,min,max);
	}
	
	cout<<"time complexity using recrusion="<<q<<endl;
}
int main()
{
	int c=1,c1=1,j=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		c++;
	}
	int min=a[0];
	c++;
	int max=a[1];
	c++;
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
		c1++;
	}
	cout<<"maximum value="<<max<<endl<<"minimum value="<<min<<endl;
	cout<<"time complexity="<<c+c1<<"units"<<endl;
	cout<<"using recursion"<<endl;
	minmax(a,j,min,max);
	
}
