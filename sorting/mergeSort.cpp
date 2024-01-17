#include<iostream>
using namespace std;



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

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
   
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";cout<<endl;



    return 0;
}