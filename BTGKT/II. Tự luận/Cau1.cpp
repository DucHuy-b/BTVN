#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    int K;
    cin>>K;

    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(arr[i]+arr[j]==K)
                cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}
