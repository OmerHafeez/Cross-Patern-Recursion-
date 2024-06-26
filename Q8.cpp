#include<iostream>
using namespace std;
void helping(int, char);
void PrintPattern(int start, int end);
int main()
{
	int n;
 	cout<<"Enter the length of cross "<<endl;
 	cin>>n;
	PrintPattern(1,n);
}
void PrintPattern(int start, int end)
{
	
	if(start==end)
	{
	    helping(start,' ');
		helping(1,'*');
		cout<<endl;
		return;
	}
	else
	{
		helping(start,' ');
		helping(1,'*');

		helping(end*2-start*2,' ');
		helping(1,'*');
		cout<<endl;
	}
	PrintPattern(start+1,end);
		helping(start,' ');
		helping(1,'*');

		helping(end*2-start*2,' ');
		helping(1,'*');
		cout<<endl;
}

void helping(int n, char c)
{
	if(n==0)
	return;
	else
	{
	cout<<c;
	helping(n-1,c);
	}
}
