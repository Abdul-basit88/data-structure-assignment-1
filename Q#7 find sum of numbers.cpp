#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int sum;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter a number = ";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<"The number at index "<<i<<" is "<<arr[i]<<endl;
	}
	sum=0;
	for(int i=0; i<5; i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum is = "<<sum;
}
