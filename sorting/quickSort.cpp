#include<iostream>
using namespace std;


/*
partition algorithm : O(N)
take first element as pivot 
step1: traverse the array from both ends and swap all from left to right such that 
all values greater than pivot are put at right and all smaller elements are put at left 
step2: when all swapping are done then the right pointer will point to the last elment of the left part 
swap this with first element
Now our array contains the pivot element at its correct position which is returned

arr=[3,1,4,6,2,5]//i=low=0 j=high=5
[3,1,2,6,4,5]  //i=2 j=4
[3,1,2,6,4,5]  //i=3 j=2
[2,1,3,6,4,5]   //3 fixed at its correct posittion


*/
int partition(int arr[], int low, int high){
    int i=low,j=high;
    int pivot  =arr[low]; 
    while(i<j){
        while(i<=j && arr[i]<=arr[low]){
            i++;
        }
        while(j>=i && arr[j]>arr[low]){
            j--;
        }
        if(i<j){

        swap(arr[i],arr[j]);
        }
        

    }
    swap(arr[j],arr[low]);
    return j;
}

/*
quick sort average case O(Nlog(n))
worst case O(N*N)
its an inplace algorithm, dont use any extra space 

step1 : select a pivot element
step2 : put pivot element to its correct place such that all elements to its left are smaller and to its right are greater O(N)
step3 : do the same for left half [low,pi-1] and right half [pi+1,high]


*/
void quickSort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    // insertionSort(arr,n);
    // mergeSort(arr,0,n-1);
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";cout<<endl;



    return 0;
}