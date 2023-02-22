#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int b;
	for(int i=0; i<5; i++)
	{
	    cout<<"Enter the Number : ";
	    cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
    	cout<<"The number is : "<<arr[i]<<endl;
    }
    bool flag;
    cout<<"Enter the number u want to find : ";
    cin>>b;
    for(int i=0; i<5; i++)
    {
    	if(b==arr[i])
    	{
    		flag++;
		}
	}
		if(flag==1)
		{
			cout<<"Number is present : ";	
		}
		else
		{
			cout<<"Number is not present ";
		}
}
