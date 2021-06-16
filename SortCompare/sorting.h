#ifndef SORTING_H
#define SORTING_H
#include <vector>
#include <iostream>

class Sorting
{
public:
    Sorting();
    Sorting(const std::vector<int>& tmp): value(tmp) {}

    void insert(const std::vector<int>& tmp);
    void quicksort(int low, int high);
    void bubblesort();
    void insertionSort();
    void selectionsort();
    void merge(std::vector<int>& buffer, int left, int middle, int right);
    void mergeSort(std::vector<int>& buffer, int left, int right);
    int size();
    std::vector<int> get_massive();
    void clear();

private:
    std::vector<int> value;
};

#endif // SORTING_H
