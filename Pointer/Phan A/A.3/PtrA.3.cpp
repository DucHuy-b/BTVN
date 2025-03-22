#include <iostream>
using namespace std;

int count_even(int* arr, int n)
{
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;
    int* arr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"5 so dau tien: "<<count_even(arr,5)<<endl;
    cout<< "5 so cuoi cung: "<< count_even(arr+(n-5),5)<<endl;

    return 0;
}

