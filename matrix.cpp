#include<iostream>
using namespace std;

int main()
{
	int a[10][10];
	
	int s,d,chk,m,k,n,count;
	cout<<"enter the size of matrix";
	cin>>s;
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cout<<"enter data";
			cin>>d;
			a[i][j]=d;
		}
	}
	
	cout<<"your matrix is"<<'\n';
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	
	cout<<"replacing duplicate data with 0";
	for(k=0;k<s;k++)
	{
		for(n=0;n<s;n++)
		{
		
		chk=a[k][n];
		count=0;
	
	for(int i=k;i<s;i++)
	{
		
		for(int j=n;j<s;j++)
		{
		if(a[i][j]==chk)
		{
			count=count+1;
		
		if(count>1)
		{
		
			cout<<"enter";
			cin>>m;
			a[i][j]=m;
			}
		}}
	}
}

}

	cout<<"your matrix is"<<'\n';
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	
}
