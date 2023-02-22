#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,b,count;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number = ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is = "<<arr[i]<<endl;
    }
    count=0;
    cout<<"Enter the number u want to count = ";
    cin>>b;
    for(i=0; i<5; i++)
    {
    	if(b==arr[i])
    	{
    		count++;
		}
	}
	cout<<count;
}
