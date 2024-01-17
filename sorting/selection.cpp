#include<iostream>
using namespace std;

/*
Selection sort is a sorting algorithm with a time complexity of O(n^2)
In selection sort we take the minimum element from the unsorted array 
and put it at the end of sorted array i.e swap with the first element 
of the unsorted array and decrease the size of unsorted array to next element. 

array with 5 elements
arr = {5 4 2 1 3} //initially
initially the whole array is unsorted i.e size n and sorted array is of size 0
step1: find min from the whole array i.e unsorted array and swap with the first element of the unsorted array 
        {5 4 2 1 3} =>unsorted and sorted=>{}//empty
        {1, 4, 2, 5, 3}//min value in is 1(index 3) swap with 5(index 0)

step2: now sorted array has 1 element i.e min at index 0 or first position 
       and unsorted array has n-1 elements from index 1 to n-1, find min in this unsorted array and swap with first 
        { 4, 2, 5, 3} =>unsorted and sorted=>{1}
        {1, 2, 4, 5, 3}//min value in unsorted array is 2(index 2) swap with 4(index 1)

step3: now sorted array is of size 2 [0,1] and unsorted array of size n-2 [2....n-1]
       find the min element in the unsorted part and swap with first element of unsorted array and decrese size unsorted and increase size of sorted
        { 4, 5, 3} =>unsorted and sorted=>{1,2}
        {1, 2, 3, 5, 4}//min value in unsorted array is 3(index 4) swap with 4(index 2)


step4: do the same till only one element in the unsorted part which means the whole array is sorted 
        { 5, 4} =>unsorted and sorted=>{1,2,3}
        {1, 2, 3, 5, 4}//min value in unsorted array is 4(index 4) swap with 5(index 3)

        sorted = > { 1,2,3,4} unsorted=> {5} =>>>>>> whole array is sorted => {1,2,3,4,5}
*/

void selectionSort(int arr[], int n){
    int mini;
    for(int i =0; i<n-1; i++){
        mini=i;
        for(int j=i; j<n; j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selectionSort(arr,n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";cout<<endl;



    return 0;
}