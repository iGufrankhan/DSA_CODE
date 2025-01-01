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
        size = 0;  
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
};

int main() {
    Maxheap h1(6);

    h1.insert(3);
    h1.insert(67);
    h1.insert(38);
    h1.insert(21);
    h1.insert(6);

    h1.print();

    return 0;
}
