#ifndef Bubble_hpp
#define Bubble_hpp

class Bubble{
    int* _bucket;
    public:
        static void swap(int*, int*);
        static void sort(int*, int, bool);
        static void show(int*, int);
};


#endif