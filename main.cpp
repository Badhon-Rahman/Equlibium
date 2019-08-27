#include <iostream>

using namespace std;

void Equlibium(int arr[], int n){
     int *leftArr = new int[n];
     int *rightArr = new int[n];


     for(int i = 0; i < n; i++){
         leftArr[i] = arr[i];
         rightArr[i] = arr[i];
     }

     for(int i = 1; i < n; i++){
        leftArr[i] = leftArr[i] + leftArr[i-1];
     }
     for(int i = n-2; i > 0; i--){
        rightArr[i] = rightArr[i] + rightArr[i+1];
        if(leftArr[i] == rightArr[i]){
        cout << i;
     }
     }
}

int main()
{
    int arr[100],n;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter the array element:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Equlibium(arr, n);
    return 0;
}
