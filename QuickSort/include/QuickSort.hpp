#ifndef QuickSort_hpp
#define QuickSort_hpp

class QuickSort{
    public:
        static void swap(int* , int*);
        static void sort(int*, int, int);
        static void show(int*, int);
        static int separate(int*, int, int);
        static int size(int data[]);
};

#endif