#include<iostream>
using namespace std;



/*
insertion sort is a sorting algorithm where the we maintain 2 parts in the array that is sorted and unsorted 
initially the sorted part has only first element and other has last element
In insertion sort we try to include first element of unsorted array in sorted part by putting it at its correct position
best case O(n) t.C  O(N*N)

ARR = {5 4 2 6 1 3}
1. sorted{5} unsorted = {4,2,6,1,3}
   {4,5,2,6,1,3}

   swap and push to its correct position
2. {4,5,2,6,1,3}=>{4,2,5,6,1,3}=>{2,4,5,6,1,3}

3. {2,4,5,6,1,3}=>{2,4,5,6,1,3}

4. {2,4,5,6,1,3}=>{2,4,5,1,6,3}=>{2,4,1,5,6,3}=>{2,1,4,5,6,3}=>{1,2,4,5,6,3}

5. {1,2,4,5,6,3}=>{1,2,4,5,3,6}=>{1,2,4,3,5,6}=>{1,2,3,4,5,6}


*/
void insertionSort(int arr[], int n){
    for(int i =1; i<n; i++){
        int j =i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    insertionSort(arr,n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";cout<<endl;



    return 0;
}