#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number";
	cin>>num;
	switch(num)
	{
		case 1:
			{
					int arr[5],i,min;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number = ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is = "<<arr[i]<<endl;
	}
	min=arr[0];
	for(i=0; i<5; i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"The min number is = "<<min;
		
	}
	case 2:
		{
				int arr[5],i,max;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number = ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is = "<<arr[i]<<endl;
    }
    max=arr[0];	
    for(i=0; i<5; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"The max number is = "<<max;
			
		}
		case 3:
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
			case 4:
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
				case 5:
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
					case 6:
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
    	if(arr[i]%2==0)
    	{
    		cout<<"Even Number is = "<<arr[i]<<endl;
    		flag++;
		}
	}
	if(flag==0)
	{
		cout<<"No even number is present ";
							
						}}
						case 7:
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
							case 8:
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
    }}
    case 9:
    	{
    		cout<<"question to find maximum differencee between array element";
    		cout<<endl;
    			int arr[5];
	cout << "Enter the 'Array'" << endl;
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value of " << i + 1 << " : ";
		cin >> arr[i];

	}
	cout << "\n Values of array are = ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	
	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "\n";
	int Max;
	int i=0,j=4;
	Max = arr[j] - arr[i];
	cout << "\n Maximum difference is : '" << Max << "'" << endl;
    		
		}
									
								}
		
	}}}
