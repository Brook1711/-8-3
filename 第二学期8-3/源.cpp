#include<iostream>
using namespace std;

int Search_Bin(int a[], int n, int key, int &count)
{
	int low = 1;
	int high = n;
	while (low <= high)
	{
		count++;
		int mid = (low + high) / 2;
		if (key == a[mid])
			return mid;
		else if (key < a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return 0;
}
int BinSearch(int r[], int low, int high, int key, int &count)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		if (key == r[mid])
		{
			count++;
			return mid;
		}
		else if (key < r[mid])
		{
			count++;
			return BinSearch(r, low, mid - 1, key, count);
		}

		else
		{
			count++;
			return BinSearch(r, mid + 1, high, key, count);
		}
	}
	else
		return 0;
}
int main()
{
	int count(0), key, r[100], n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> r[i + 1];
	}
	cin >> key;
	BinSearch(r, 1, n, key, count);
//	Search_Bin(r, n, key, count);
	cout << count;
//	system("pause");
	return 0;
}