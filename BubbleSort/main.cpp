#include "include/Bubble.hpp"
#include <iostream>
using namespace std;


int main(){
    int data[] = {5,3,5,624,245,6,7,3,23,4};
    Bubble::sort(data, 10, true);
    Bubble::show(data, 10);
    return 0;
}