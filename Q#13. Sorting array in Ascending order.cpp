#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout << "Enter the Array" << endl;
	cout << "\n";
	for (int i=0;i<5;i++)
	{
		cout << "Enter value at index " <<i+1<< " : ";
		cin >> arr[i];

	}
	cout << "\n Values of array are = ";
	for (int i=0; i<5;i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n";
	cout << "\n Array sorted in Ascending order :  ";
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
		cout << arr[i] << "      ";
	}



}
