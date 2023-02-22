#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
	    cout<<"Enter the Number = ";
	    cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
    	cout<<"The number is = "<<arr[i]<<endl;
    }
    bool flag;
    for(int i=0; i<5; i++)
    {
    	if(arr[i]%2!=0)
    	{
    		cout<<"Odd number is = "<<arr[i]<<endl;
    		flag++;
		}
	}
	if(flag==0)
	{
		cout<<"No odd number is present";
	}
}
