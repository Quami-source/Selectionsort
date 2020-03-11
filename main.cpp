#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int arr[n];
    int minNum = 0;
    int temp = 0;
    //First of all, get the size of the array
    cout << "Enter the size of the array : ";
    cin >> n;

    //Get the elements in the array
    cout << "Enter the elements in the array : ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    //start the sort
    for(int j=0; j<n; j++){
        minNum = j;
        for(int k = j+1; k<n; k++){
            if(arr[k]<arr[minNum]){
                minNum = k;
            }
        }
        temp = minNum;
        minNum=arr[j];
        arr[j] = temp;
    }

    for(int r = 0; r<n; r++){
        cout << arr[r] <<"\t";
    }
    return 0;
}
