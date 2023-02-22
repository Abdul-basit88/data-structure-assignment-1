#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter a number = ";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<"The number at index "<<i<<" is "<<arr[i]<<endl;
	}
	cout<<"The reverse values are "<<endl;
	for(int i=4; i>=0; i--)
	{
		cout<<"The number at index "<<i<<" is "<<arr[i]<<endl;
	}
}
