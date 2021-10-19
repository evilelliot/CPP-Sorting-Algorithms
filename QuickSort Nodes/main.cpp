#include "include/Node.hpp"
#include "include/QuickSort.hpp"
#include <ctime>
#include <iostream>
using namespace std;

int main(){
    Node my_node(232, "Rammstein");
    Node nx(42, "Chrome");
    Node x(342, "Montserrat");
    Node data[] = {my_node, nx, x};
    int  n = sizeof(data)/sizeof(data[0]);
    
    // Showing original data
    cout << "Original data: " << endl;
    QuickSort::show(data, n);
    // Starting to sort and meassuring time elapsed
    clock_t begin = clock();
    QuickSort::sort(data, 0, n-1);
    clock_t end = clock();
    // Showing the sorted original data
    cout << "Sorted data: " << endl;
    QuickSort::show(data, n);
    // Info messages
    cout << n << " numbers where sorted." << endl;
    cout << "Time elapsed: " << double(end - begin) / CLOCKS_PER_SEC << "s" << endl;
    
    return 0;
}