#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Enter array size: " << '\n';
	cin >> n;
	int arr[n];
	cout << "Enter array elemnts" << '\n';
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	
	for (int i = 0; i < n-1; ++i){
		int temp = arr[i];
		for (int j = i+1; j < n; ++j){
			if (arr[j] < temp){
				arr[i] = arr[j];
				arr[j] = temp;
				temp = arr[i];
			}
		}
	}
	cout << "Sorted array: " << '\n';
	for (int i =0; i<n;++i){
	cout << arr[i]<< "     ";
	}

	//Using heap to declare a large array
	//Not possible on run time memory
	int mln = 10000;
	int* m_arr = new int[mln];
	for (int i = 0; i < mln; ++i)
	{
		m_arr[i] = mln - i;
	}
	delete[] m_arr;

	return 0;
}
