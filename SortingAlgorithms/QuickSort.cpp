#include<iostream>
using namespace std;

int partByPivot(int arr[], int s, int e){
    int i = s;
    int pivot = arr[e];
    for (int j = s; j < e; j++)
    {
        if(arr[j] < pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[e]);
    return i;
}

void quickSort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int p = partByPivot(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int arr[14] = {2, 1, 3, 5, 4, 7, 8, 6, 34, 54, 66, 12, 19, 45};
    quickSort(arr, 0, 13);
    for (int i = 0; i < 14; i++)
    {
        cout << arr[i] << " ";
    }
    
    system("pause");
    return 0;
}