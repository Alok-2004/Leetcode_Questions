#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>&a)
{
	for(int i = 0; i<a.size(); i++)
	{
		cout<<a[i]<<" ";
	}
	
	return;
}

void reversePart(int i, int j, vector<int>&a)
{
    while(i<j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    return;
}

int main()
{
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(5);
    arr.push_back(8);

    display(arr);
    cout<<endl;

    int n = arr.size();

    int k;
    cout<<"Enter the number of rotation: ";
    cin>>k;

    if(k>=n) k = k%n;

    reversePart(0,n-k-1,arr);
    reversePart(n-k,n-1,arr);
    reversePart(0,n-1,arr);

    display(arr);
    return 0;

}