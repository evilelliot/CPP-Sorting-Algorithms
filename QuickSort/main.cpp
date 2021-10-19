#include "include/QuickSort.hpp"
#include <ctime>
#include <iostream>
using namespace std;

int main(){ 
    int data[] = {4,5,345,4,6,23,4,4,34,3,53,4,3,5,3,53,6,4,6,4,74,76,4,42,4,5,36,86,8,4,54,6,4,43,43,5,35,5,745,74,35,23,4,3,54,5,43,635,7,56,78,457,5,645,6,43,63,45,34,7,89,42,84,72,47,99};
    int n = sizeof(data)/sizeof(data[0]);

    // Meassuring how much did it take to sort the initial data
    clock_t begin = clock();

    // cout << n << endl;
    QuickSort::sort(data, 0, n-1);
    QuickSort::show(data, n);

    clock_t end = clock();

    cout << n << " numbers where sorted." << endl;
    cout << "Time elapsed: " << double(end - begin) / CLOCKS_PER_SEC << "s" << endl;
    return 0;
}