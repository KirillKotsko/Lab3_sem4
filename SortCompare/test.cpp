#include "test.h"
#include <algorithm>

void TestSortingAlgo(){
    {
        std::vector<int> a = {7,8,3,12,3,1,6,8,9,5};
        std::vector<int> b = {1,3,3,5,6,7,8,8,9,12};
        Sorting c(a);
        c.quicksort(0, a.size()-1);
        ASSERT_EQUAL(c.get_massive(),b);
    }
    {
        std::vector<int> a = {7,8,3,12,3,1,6,8,9,5};
        std::vector<int> b = {1,3,3,5,6,7,8,8,9,12};
        Sorting c(a);
        c.bubblesort();
        ASSERT_EQUAL(c.get_massive(),b);
    }
    {
        std::vector<int> a = {7,8,3,12,3,1,6,8,9,5};
        std::vector<int> b = {1,3,3,5,6,7,8,8,9,12};
        Sorting c(a);
        std::vector<int> buff(a.size());
        c.mergeSort(buff,0, a.size());
        ASSERT_EQUAL(c.get_massive(),b);
    }
    {
        std::vector<int> a = {7,8,3,12,3,1,6,8,9,5};
        std::vector<int> b = {1,3,3,5,6,7,8,8,9,12};
        Sorting c(a);
        c.insertionSort();
        ASSERT_EQUAL(c.get_massive(),b);
    }
    {
        std::vector<int> a = {7,8,3,12,3,1,6,8,9,5};
        std::vector<int> b = {1,3,3,5,6,7,8,8,9,12};
        Sorting c(a);
        c.selectionsort();
        ASSERT_EQUAL(c.get_massive(),b);
    }

}
