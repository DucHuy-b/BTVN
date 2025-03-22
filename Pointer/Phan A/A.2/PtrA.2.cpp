#include <iostream>
using namespace std;

void printSizeofArr(int arr[])
{
    cout<<"sizeof cua mang ben trong ham: "<<sizeof(arr)<<endl;
}

int main()
{
    int array1[5] = {1,2,3,4,5};
    cout<<"sizeof cua mang ben ngoai ham (kich thuoc xac dinh): "<<sizeof(array1)<<endl;

    int array2[] = {1,2,3,4,5};
    cout<<"sizeof cua mang ben ngoai ham (kich thuoc ko xac dinh): "<<sizeof(array2)<<endl;

    printSizeofArr(array1);
    printSizeofArr(array2);
}
