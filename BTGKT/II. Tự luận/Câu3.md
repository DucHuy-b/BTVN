1. Bubble sort  
void bubbleSort(int n, int arr[])  
{  
    bool swapped;  
    for (int i = 0; i < n - 1; i++)  
   {  
        swapped = false;  
        for (int j = 0; j < n - i - 1; j++)  
         {  
            if (arr[j] > arr[j + 1])  
           {  
                int tmp = arr[j];  
                 arr[j] = arr[j+1];  
                 arr[j+1] = tmp;  
                swapped = true;  
            }  
        }  
        if (!swapped)  
            break;  
    }  
}  

2. Ưu, nhược so với Selection sort và Insertion sort
