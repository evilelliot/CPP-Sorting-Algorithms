#include "../include/Node.hpp"
#include "../include/QuickSort.hpp"
#include <iostream>
#include <string>
using namespace std;


int main(){
    // Variables
    int size  = 0;
    int _key  = 0;
    string _data;
    cout << "Schedule list size: "; cin >> size;

    Node* data; 

    data = new Node[size];
    Node tmp;
    for(int i = 0; i < size; i++){
        cout << "["<<i<<"] Key: "; cin >> _key;
        cout << "["<<i<<"] Data: "; cin >> _data;

        tmp = Node(_key, _data);
        data[i] = tmp;
    }
    cout << endl << "Original data: " << endl;
    QuickSort::show(data, size);
    cout << endl << "Sorted data: " << endl;
    QuickSort::sort(data, 0, size - 1);
    QuickSort::show(data, size);

    return 0;
}