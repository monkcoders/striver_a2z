/*
Code for generic linked list 
supported types all inbuilt data types 

*/

#include <iostream>
using namespace std;


template<typename T>

struct Node{
    T data;
    Node<T>* next;
    Node<T>(){
        data=0;
        next=NULL;
    }
    Node<T>(T val){
        data = val;
        next = NULL;
    }
};
template<typename T>

class LinkedList{
    Node<T>* head;
    int size;
    
    public:
    LinkedList(){
        head = NULL;
        size=0;
    }

    void insertBeg(T val){
        Node<T> * temp = new Node<T>(val);
        temp->next = head;
        head = temp; 
        size++;
    }

    void insertEnd( T val){
        Node<T>* temp = new Node<T>(val);
        if(head ==NULL){
            head = temp;
            size++;
            return;
        }
        Node<T>* last =head;
        while(last->next!=NULL){
            last = last->next;
        }
        last->next = temp;
        size++;
    }

    void insertAt(T val, int idx){
        Node<T>* temp = new Node<T>(val);

        if(head==NULL || idx==0){
            temp->next = head;
            head = temp;
            size++;
            return;
        }
        Node<T>* prev= head;

        while(idx-1>0 && prev->next!=NULL ){
            prev = prev->next;
            idx = idx-1;
        }
        temp->next = prev->next;
        prev->next = temp;
        size++;
        

    }

    int length(){
        return size;
    }

    void display(){
        Node<T>* temp =head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    bool isEmpty(){
        return (head==NULL);
    }

    void deleteBeg(){
        if(isEmpty()){
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    void deleteEnd(){
        if(isEmpty()){
            return;
        }
        Node<T>* temp = head;
        if(head->next==NULL){
            delete temp;
            head = NULL;
            size = 0;
        }
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        Node<T>* last=temp->next;
        delete last;
        temp->next = NULL;
        size--;
    }

    void deleteAt(int idx){
        if(isEmpty()){
            return;
        }
        if(idx==0 || head->next==NULL){
            deleteBeg();
            return;
        }
        if(idx>=size-1){
            deleteEnd();
            return;
        }
        Node<T>* prev =head;
        while(idx-1>0 && prev->next->next!=NULL){
            prev =prev->next;
            idx = idx-1;
        }
        Node<T>* temp =prev->next;
        prev->next = prev->next->next;
        delete temp;
        size--;
        
    }


    void reverse(){
        if(head==NULL || head->next==NULL){
            return;
        }
        Node<T>* prev=NULL;
        Node<T>* next=NULL;
        Node<T>* curr = head;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
        head = prev;
    }

    bool find(T x){
        Node<T>* temp = head;
        while(temp!=NULL){
            if(temp->data==x){
                return 1;
            }
            temp = temp->next;
        }
        return 0;
    }



};

int main()
{
    LinkedList<int> myList;
    myList.insertBeg(10);
    myList.insertBeg(20);
    myList.insertBeg(30);
    myList.insertBeg(40);
    myList.display();

    myList.insertEnd(50);
    myList.insertEnd(60);
    myList.insertEnd(70);
    myList.insertEnd(80);
    myList.insertEnd(90);
    myList.display();

    myList.insertAt(100,12);
    myList.display();

    myList.insertAt(110,1);
    myList.display();

    myList.insertAt(120,0);
    myList.display();
    myList.insertAt(130,6);

    myList.display();

    myList.deleteBeg();
    myList.display();

    myList.deleteBeg();
    myList.display();
    
    myList.deleteEnd();
    myList.display();

    myList.deleteEnd();
    myList.display();

    myList.deleteAt(0);
    myList.display();

    myList.deleteAt(1);
    myList.display();

    myList.deleteAt(78);
    myList.display();

    myList.deleteAt(3);
    myList.display();

    myList.deleteAt(4);
    myList.display();


    cout<<myList.find(20)<<endl;
    cout<<myList.find(130)<<endl;


    myList.insertBeg(12);
    myList.display();
    cout<<myList.length()<<endl; 

    myList.reverse();
    myList.display();
    myList.reverse();
    myList.display();


    LinkedList<char> charList;
    for(int i =0; i<5; i++){
        charList.insertBeg('a'+i);
    }
    charList.display();
    charList.deleteEnd();
    charList.display();

    LinkedList<float> flist;
    for(int i =0; i<5; i++){
        flist.insertBeg(i*1.4);
        flist.insertEnd(i*12.77);
    }
    flist.display();

    LinkedList<string> mystring;
    mystring.insertBeg("hello");
    mystring.insertEnd("BYe");
    mystring.display();

    return 0;
}