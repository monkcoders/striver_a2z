#include<bits/stdc++.h>
using namespace std;

class heap{
    int *arr;
    int capacity;
    int size;

    public:
    heap(int c){
        capacity =c; 
        size=0;
        arr = new int[c];
    }

    heap(int newArr[], int n){
        size = n;
        capacity = 2*size;
        arr = new int[capacity];

        for(int i =0; i<n; i++){
            arr[i] = newArr[i];
        }

        for(int i= parent(n-1); i>=0; i--){
            heapify(i);
        }
        

    }

    int left(int i){
        return 2*i+1;
    }
    
    int right(int i){
        return 2*i+2;
    }

    int parent(int i){
        return (i-1)/2;
    }


    void insert(int k){
        if(size==capacity){
            cout<<"heap is full\n";
            return;
        }
        int i= size;
        size++;
        arr[i]=k;

        while(i>=0 && arr[i]>arr[parent(i)]){
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }

    }

    int extractMax(){
        if(size==0){
            cout<<"Heap is empty\n";
            return 0;
        }
        int mx = arr[0];
        size--;
        swap(arr[size],arr[0]);
        int i =0;
        int largest=i;
        while(i<size ){
            largest = i;
            int l = left(i);
            int r = right(i);
            if(l<size && arr[l]>arr[largest]){
                largest = l;
            }
            if(r<size && arr[r]>arr[largest]){
                largest = r;
            }
            if(i!=largest){
                swap(arr[i],arr[largest]);
                i= largest;
            }else{
                break;
            }
        }
        // heapify(0);
        return mx;
        

    }

    void heapify(int i){
        if(i>=size){
            return;
        }
        int largest = i;
        int l = left(i);
        int r = right(i);
        if(l<size && arr[l]>arr[largest]){
            largest = l;
        }
        if(r<size && arr[r]>arr[largest]){
            largest = r;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
           heapify(largest);
        }

    }

    int showMax(){
        return arr[0];
    }

    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i] <<" ";
            
        }cout<<endl;
    }

    // void buildHeap(int newArr[], int n){
    //     int size = n;
    //     for(int i =0; i<n; i++){
    //         arr[i] = 
    //     }
    // }

};
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n; i++){
        cin>>arr[i];
    }

    heap myHeap(10);
    heap myHeap2(arr,n);

    for(int i =1; i<10; i++){
        myHeap.insert(i*10);
        myHeap.display();
        cout<<myHeap.showMax()<<endl;

    }

    
    // myHeap.insert(20);
    // myHeap.display();
    // cout<<myHeap.showMax()<<endl;



    // myHeap.insert(8);
    // myHeap.display();
    // cout<<myHeap.showMax()<<endl;



    // myHeap.insert(30);
    // myHeap.display();
    // cout<<myHeap.showMax()<<endl;
    for(int i =0; i<5; i++){
        cout<<myHeap.extractMax()<<endl;
        myHeap.display();

    }
    
    myHeap2.display();




    return 0;
}