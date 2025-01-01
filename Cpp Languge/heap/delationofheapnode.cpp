#include <iostream>

using namespace std;

class Maxheap
{
    int *arr;
    int size;
    int total_size;

public:
    Maxheap(int n) {
        arr = new int[n];
        size = 0;  // Correctly initialize the member variable
        total_size = n;
    }

 
    // Insertion of node
    void insert(int val) {
        if (size == total_size) {
            cout << "Heap overflow" << endl;
            return;
        }

        arr[size] = val;
        int index = size;
        size++;

        // Fix the heap property by bubbling up the inserted element
        while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }

        cout << val << " is inserted into the heap" << endl;
    }

    void print() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

void Heapify(int index){



    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<size&&arr[left]>arr[largest])largest=left;
    if(right<size&&arr[right]>arr[largest])largest=right;
    if(largest!=index){
        swap(arr[index],arr[largest]);
        Heapify(largest);
    }
}

void Delete(){

if(size==0){
    cout<<"heap underflow"<<endl;
    return ;
}

cout<<arr[0]  <<"  deletedfrom heap"<<endl;
arr[0]=arr[size-1];
size--;
if(size==0)return;
Heapify(0);




}





};

int main() {
    Maxheap h1(6);

    h1.insert(3);
    h1.insert(67);
    h1.insert(38);
    h1.insert(21);
    h1.insert(6);
    h1.Delete();
    h1.insert(56);
   
    h1.print();

    return 0;
}
