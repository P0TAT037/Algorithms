#include <bits/stdc++.h>

using namespace std;

int BinarySrearch(int key, int arr[], int arrSize)
{

	sort(arr, arr + arrSize);

	int low = 0;
	int high = arrSize - 1;
	int mid = (low + high) / 2;

	while (low <= high)
	{
		if (arr[mid] < key)
		{
			low = mid + 1;
		}
		else if (arr[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			return mid;
		}

		mid = (low + high) / 2;
	}

	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };

	cout << BinarySrearch(4, arr, 7);

	return 0;
}