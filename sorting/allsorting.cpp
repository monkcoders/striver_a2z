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

/*
MergeSort is a sorting algorithm having O(NlogN) time complexity
It is a divide and conqueer algorithm which first divides the array into 2 halfs until we get array as small as 1 element
Array with 1 element is always sorted.
The merge algorithm than combines/merge this sorted array to give a bigger sorted array 
i.e first divide to smallest array possible which is sorted
then merge this sorted array to sort the original array 


mergeSort(arr,low,high){
    if(low<high){
        mid= (low+high)/2
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high)
        merge(arr,low,mid,high);
    }
}


merge algorithm 
it simply takes two sorted array and then traverse both array and compare each arrays element and put the smallestone in the temp array 
if any of the array is exhausted while comparing then it simply copies the other one
then copy the temp array to original array 

merge(arr,low,mid,high){
    temp[high-low+1]={0};
    left = low,right=mid+1;
    i=0;

    //copy the smallest elements in the temp array until any one of the array gets exhausted
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i++] = arr[left++];
        }else
        {
            temp[i++] = arr[right++];
        }
    }

    //copy remaining array
    while(left<=mid){
        temp[i++] = arr[left++];
    }
    while(right<=high){
        temp[i++] = arr[right++];
    }

    //copy temp into original array
    for(int i =0; i<high-low+1; i++){
        arr[low+i] = temp[i];
    }
}
*/


/*
arr1=[1,3,6,8,12] 
arr2=[2,4,6,7]
or simply 
arr = [1,3,6,8,12,2,4,6,7] low = 0, mid = 4, high = 8
temp=[]

left = low,right=mid+1
1<2 => temp = [1] left++
3>2 => temp=[1,2]  right++
3<4 => temp=[1,2,3] left++
6>4 => temp = [1,2,3,4] right++
6<=6 => temp=[1,2,3,4,6] left++
8>6 => temp= [1,2,3,4,6,6] right++
8>7 => temp = [1,2,3,4,6,6,7] right++
arr2 got exhausted hence we copy all  elements left in arr1
temp=[1,2,3,4,6,6,7,8,12]
copy temp to arr
arr = [1,2,3,4,6,6,7,8,12]

*/
void merge(int arr[], int low, int mid, int high){
    int left= low;
    int right = mid+1;
    int n = high-low+1;
    int i = 0;
    int temp[n]= {0};
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i++]=arr[left++];
        }else{
            temp[i++] = arr[right++];
        }
    }
    while(left<=mid){
         temp[i++]=arr[left++];
    }
    while(right<=high){
        temp[i++] = arr[right++];
    }

    for(int i =0; i<n; i++){
        arr[low+i] = temp[i];
    }
}

/*
                [5,3,1,4,2]
                   /   \
             [5,3,1]   [4,2]
              /   \     /  \
           [5,3]  [1]  [4] [2]
           /  \    |     \ /
          [5] [3]  |    [2,4]
           \  /    |      |
           [3,5]   |      |
             \    /       |
             [1,3,5]      |
                \         /
                [1,2,3,4,5]
                
*/

void mergeSort(int arr[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}


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