#include<iostream>

using namespace std;


struct Queue{
    int s, cap;
    int *arr;
    Queue(int c){
        cap = c;
        s = 0;
        arr = new int[cap];
    }

    void showQueue(){
        for(int k = 0; k < s; k++){
            cout<<arr[k]<<" ";
        }
    }

    bool isEmpty(){
        return (s == 0);
    }
    bool isFull(){
        return (s == cap);
    }

    void enqueue(int x){
        if(isFull()){
            cout<<"Queue is Full"<<endl;

        }else{
            arr[s] = x;
            s++;
        }
    }

    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return 0;
        }else{
            for(int i = 0; i < s-1; i++){
                arr[i] = arr[i+1];
            }
            s--;
        }
    }

    int getFront(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }else{
            return 0;
        }
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }else{
            return s-1;
        }
    }

};

int main(){

    struct Queue q1(10);
    q1.showQueue();
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.showQueue();

	return 0;
}
