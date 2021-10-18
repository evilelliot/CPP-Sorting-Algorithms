#include "../include/Bubble.hpp"
#include <iostream>
using namespace std;

void Bubble::swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void Bubble::sort(int *data, int size, bool flag){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(flag){
                if(data[j] > data[j+1]){
                    swap(&data[j], &data[j+1]);
                }
            }else if(!flag){
                if(data[j] < data[j+1]){
                    swap(&data[j], &data[j+1]);
                }
            }
            
        }
    }
}
void Bubble::show(int *data, int size){
    for(int i = 0; i < size; i++){
        cout << "[" << i << "] -> " << data[i] << endl;
    }
}