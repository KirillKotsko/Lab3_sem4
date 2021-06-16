#include "sorting.h"
#include <QDebug>

using namespace std;

void Sorting::clear(){
    value.clear();
}

int Sorting::size(){
    return value.size();
}

void Sorting::insert(const vector<int>& tmp){
    value = tmp;
}

Sorting::Sorting(){

}

vector<int> Sorting::get_massive(){
    return value;
}

void Sorting::quicksort(int low, int high){
    int i = low;
    int j = high;
    int pivot = value[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (value[i] < pivot)
            i++;
        while (value[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = value[i];
            value[i] = value[j];
            value[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quicksort(low, j);
    if (i < high)
        quicksort(i, high);
}

void Sorting::bubblesort(){
    bool swapped = true;
    int j = 0;
    int temp;

    while (swapped)
    {
        swapped = false;
        j++;
        for (int i = 0; i < value.size() - j; ++i)
        {
            if (value[i] > value[i + 1])
            {
                temp = value[i];
                value[i] = value[i + 1];
                value[i + 1] = temp;
                swapped = true;
            }
        }
    }
}

void Sorting::selectionsort(){
    int temp;
    int min;

    for (int i = 0; i < value.size(); ++i)
    {
        min = i;
        for (int j = i + 1; j < value.size(); ++j)
        {
            if (value[j] < value[min])
                min = j;
        }
        if (min != i)
        {
            temp = value[i];
            value[i] = value[min];
            value[min] = temp;
        }
    }
}

void Sorting::merge(vector<int>& buffer, int left, int middle, int right)
{
    int it_left = 0;
    int it_right = 0;

    while (left + it_left < middle && middle + it_right < right)
    {
        if (value[left + it_left] < value[middle + it_right])
        {
            buffer[it_left + it_right] = value[left + it_left];
            it_left++;
        }
        else
        {
            buffer[it_left + it_right] = value[middle + it_right];
            it_right++;
        }
    }

    while (left + it_left < middle)
    {
        buffer[it_left + it_right] = value[left + it_left];
        it_left++;
    }

    while (middle + it_right < right)
    {
        buffer[it_left + it_right] = value[middle + it_right];
        it_right++;
    }

    for (int i = 0; i < it_left + it_right; i++)
        value[left + i] = buffer[i];

}

void Sorting::mergeSort(vector<int>& buffer, int left, int right)
{
    if (right - left <= 1)
    {
        return;
    }
    int middle = left + (right - left) / 2;
    mergeSort(buffer, left,  middle);
    mergeSort(buffer, middle, right);
    merge(buffer, left, middle, right);
}

void Sorting::insertionSort()
{
    int j;
    int temp;

    for (int i = 0; i < value.size(); ++i)
    {
        j = i;
        while (j > 0 && value[j] < value[j - 1])
        {
            temp = value[j];
            value[j] = value[j - 1];
            value[j - 1] = temp;
            j--;
        }
    }
}
