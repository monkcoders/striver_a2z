#include<iostream>
using namespace std;



/*
Bubble sort (swap adjacents)
swap adjacent elements if they are not in correct order
in Bubble sort in each iteration we get the largest element at the end of unsorted part 
In bubble sort the initially the whole array is unsorted 
and as we procedd the sorted array is created from the end pushing the currently max element at the start of sorted by simply swapping adjancent element in the unsorted array
 time complexity :  O(N*N)
 best time O(N) when array is sorted

arr={5 4 2 1 3}// initial array sorted = {}//empty  unsorted=>{5 4 2 1 3}
step 1 : swap adjacent elements if they are not in order
    {5 4 2 1 3}=>{4,5,2,1,3}=>{4,2,5,1,3}=>{4,2,1,5,3}=>{4,2,1,3,5}
    sorted={5} unsorted=>{4,2,1,3}

step 3 : swap adjacent element in sorted array that is leaving last element 
    {4,2,1,3,5}=>{2,4,1,3,5}=>{2,1,4,3,5}=>{2,1,3,4,5}
    sorted={4,5} unsorted ={2,1,3}
step 4: swap adjacent in unsorted leaving last 2 sorted elements
    {2,1,3,4,5}=>{1,2,3,4,5}=>{1,2,3,4,5}
    sorted={3,4,5} unsorted={1,2}
step 5 : do same
    {1,2,3,4,5}=> {1,2,3,4,5}
    array is sorted


*/

void bubbleSort(int arr[], int n){
    bool isSwapped = false;
    for(int i = 0; i<n-1; i++){
        isSwapped= false;
        for(int j =1;j<n-i; j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            break;
        }
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    bubbleSort(arr,n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";cout<<endl;



    return 0;
}