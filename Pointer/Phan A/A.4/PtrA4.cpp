#include <iostream>
using namespace std;

void tknp(int* arr, int n, int x)
{
    int l=0;
    int r=n-1;

    while(l<=n)
    {
        int m=(r-l)/2;

        if(arr[m]==x)
         {
            cout<<"vi tri cua so can tim trong day la: "<<m<<endl;
            break;
         }
        else if(arr[m]>x)
        {
            r = m-1;
        }
        else
        {
           l = m+1;
        }
    }

    if(l>r)
        cout<<"ko ton tai so can tim trong day";
}

int main()
{
    int n = 7;
    int arr[] = {1,2,5,79,80,100,202};
    int x = 2;

    tknp(arr,n,x);
}
