#include <iostream>
using namespace std;

bool find_index(int a[], int num_elements, int value)
{
	int i;
	for(int i = 0; i < num_elements; i++)
	{
		if(a[i] == value)
		{
			return true;
		}
	}
	return false;
}

void nhap(int a[], int &num_elements)
{
	cout << "\nNhap vao so luong phan tu:  ";
	cin >> num_elements;
	int temp;
	for(int i = 0; i < num_elements; i++)
	{
		cout << "\nNhap phan tu thu " << i << " ";
		cin >> temp;
		if(find_index(a, i, temp) == true)
		{
			cout << "\nGia tri bi trung vui long nhap lai";
			i--;
		}
		else
		{
			a[i] = temp;
		}
	}

}
int main()
{
	int a[100];
	int n;
	nhap(a, n);
	return 0;
}

