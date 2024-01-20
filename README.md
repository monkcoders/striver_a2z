# striver_a2z
striver A2Z DSA 

## Recursion 
when a function calls itself until a specified condition is met.
In direct recursion, function calls itself while in indirect recursion the function fun1 calls another function fun2 which calls the fun1 function.

A solve a problem using recursion we must know solution to a smaller problem and bigger problems are solved using this small problem. 
These small problems are the base cases which can be solved on their own.   

```cpp
returnType functionName(parameters){
    base_case {
        operations to be performed on base case
    }

    // perform some operation 
    call for smaller problem 
    functionName(smaller Parameter)

}
```


## Array 

### 1. largest/smallest element in an array 

#### Bruteforce Approach (sort): T.C O(Nlogn)
Sort the given array and return the value of last element for largest and first element for smallest. 
```cpp
sort(arr,arr+n);//step 1: sort
return arr[n-1]; //step 2: return last element
```

#### Optimized approach: T.C O(N)
Take first element as largest/smallest. 
Traverse the array and update the largest/smallest variable when a greater/smaller element is found.
Return variable largest/smallest.

```cpp
int largest = arr[0];
for(int i =0; i<n;i++){
    largest = max(largest,arr[i]);//for smallest take min of two
}
return largest;
```


### 2. Second Largest/Smallest element in an array
Return the Second Largest/smallest element from an array.

#### Bruteforce approach(sort): T.C O(nlog(n)+n)
Sort the array.
Traverse the array from back and return the first element which is not equal to largest i.e last element of the array.
there may be a condition possible that all the elements in the array are largest and hence there wont be any second largest in the array. and we may have to traverse the whole array.

```cpp
sort(arr,arr+n);//step 1: sort O(Nlogn)
for(int i=n-2; i>=0; i--){//traverse from last //O(N)
    if(arr[i]!=arr[n-1]){//find the first unequal element
        return arr[i];
    }
}
return -1;
//O(NlogN+N)
```

#### Better Approach (find largest and use it to find 2nd largest) O(2N)
First find the largest element from the array.
Traverse the array from starting and find the largest element in the array except the first largest element.

```cpp
int largest = arr[0];
int secondLargest = INT_MIN;
for(int i =0; i<n;i++){
    largest = max(largest,arr[i]);//find the largest
}
for(int i =0; i<n;i++){
    if(arr[i]!=largest){//find largest element except first
        secondLargest = max(secondLargest,arr[i]);
    }
}
return secondLargest;
```

#### Optimised O(N):
Intution: If current largest is updated than previous largest becomes second largest and largest gets updated. When element smaller than largest but greater than secondLargest is encountered than only second largest is updated.  

We first set largest and second largest to INT_MIN.
Then We traverse the array and if any element greater than largest is found we simply update secondLargest = largest and largest = that element.
If an element is not equal to and smaller than largest but greater than secondLargest then we update second largest.


```cpp
int secondLargest(int arr[], int n){
    int first = -1;
    int second = -1;
    for(int i =0; i<n; i++){
        if(first<arr[i]){
            second = first;
            first =arr[i];

        }else if(arr[i]!=first && second<arr[i]){
            second = arr[i];
        }
    }
    return second;
}
//O(N)
```

### 3. Check if array is sorted O(N):
Check if the array is in non-decreasing order if yes then return true else false.

Traverse array and return false for wrong order.

Traverse the array from i=1 and check 
if any a[i-1]>a[i] then return false 
else after traversing whole array return true

```cpp
bool checkSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
//O(N)
```