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


### 4. Remove duplicates from sorted array 
Your are Given a sorted array containing duplicates you have to remove the duplicates from this array.

#### Bruteforce (use set)t.c O(NlonN) and s.c. O(N) 
Set is an stl in c++ that only stores unique elements. its t.c for insertion is O(logn)
Approach: traverse the array and insert elements into a set
          this set will be containing only unique elements. 
          Copy this set into the array

```cpp
int removeDuplicates(vector<int> &arr, int n) {
	set<int> s;
	for(int i =0; i<n; i++){
		if(s.count(arr[i])==0){
    		s.insert(arr[i]);
		}
	}
	int j=0;
	for(auto it: s){
		arr[j] = it;
		j++;
	}
	return j;
}
```

#### Optimized (two pointer) O(N) 
Take two pointers i and j, where i points to the last element of the unique element array and j points to duplicate arrays first element. i.e i=0 and j=1
Traverse the duplicate array from 1 to n and check if arr[i] !=arr[j] then increment i and put arr[j] on it.

```cpp

int removeDuplicates(vector<int> &arr, int n) {
	int j=0;
	for(int i=0; i<n-1; i++){
		if(arr[i]==arr[i+1]){
			continue;
		}
		arr[j++] = arr[i];
	}
	return j+1;
}
```

### 5. Left Rotate array by one place t.c O(N) S.cO(1)
Store first element in a temp variable and move all values of array 1 index towards right. i.e a[i-1] = a[i] and store temp at a[n-1] that is last index.


```cpp

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp ;
    return arr;
}

```

### 6. Right Rotate by 1
Store last element in temp and traverse array from end till index 1 and move all elements one index ahead i.e. 
a[i] = a[i-1] and store temp at starting index.

```cpp

vector<int> rotateArrayRight(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[n-1];
    for(int i=n-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp ;
    return arr;
}

```

### Left rotate by k
after n rotations Array gets back to its original form.
therefore k = k%n;

#### Bruteforce (apply left rotation by 1 k times) O(k*n)
Left rotate by 1 the given array k times 
Time complexity : O(k*n) 
space complexity: O(1)

```cpp
vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    return arr;
}

```

#### Better Approach (using temp array) t.c. O(N) s.c. O(k)
Store the first k elements in the temp array.
Now Move other elements by k times towards left 
Put the temp elements in the array after n-k elements 

T.C. O(N)
S.C. O(k)

```cpp
vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    k= k%n;
    int temp[k];
    //copy first k elements to temp
    for(int i =0; i<k ; i++){
        temp[i] = arr[i];
    }
    //move other elements by k positions
    for(int i =k; i<n; i++){
        arr[i-k] = arr[i];
    }
    //copy temp elements to array from n-k to n
    for(int i=n-k; i<n; i++){
        arr[i] =temp[i-(n-k)];
    }
    return arr;
}

```

#### Optimized Approach (using reverse) t.c. O(n) s.c O(1)
Reverse first k elements of array 
Reverse remaining elements of array 
Reverse the whole array 

e.g. [1,2,3,4,5] k = 2 o/p = [3,4,5,1,2]
reverse first k => [2,1,3,4,5]
reverse remaining => [2,1,5,4,3]
reverse whole array => [3,4,5,1,2] <= desired output

time complexity : O(N)
space Complexity : O(1)

```cpp
void reverse(vector<int> &arr, int s, int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

vector<int> rotateArray(vector<int> arr, int k) {
    reverse(arr,0,arr.size()-1);
    reverse(arr,0,arr.size()-1-k);
    reverse(arr,arr.size()-k, arr.size()-1);
    return arr;
}
```
