/**
*	@file sorting.h
*	@author Kirill Kotsko
*	@version 1.1
*/
#ifndef SORTING_H
#define SORTING_H
#include <vector>
#include <iostream>

/*!
 * @brief The Sorting class
 */
class Sorting
{
public:
    /*!
     * @brief default constructor
     */
    Sorting();

    /*!
     * @brief constructor
     * @param tmp
     */
    Sorting(const std::vector<int>& tmp): value(tmp) {}

    /*!
     * @brief insert of array
     * @param tmp
     */
    void insert(const std::vector<int>& tmp);

    /*!
     * @brief quick sort
     * @param low
     * @param high
     */
    void quicksort(int low, int high);

    /*!
     * @brief bubble sort
     */
    void bubblesort();

    /*!
     * @brief insertion sort
     */
    void insertionSort();

    /*!
     * @brief selection sort
     */
    void selectionsort();

    void merge(std::vector<int>& buffer, int left, int middle, int right);
    void mergeSort(std::vector<int>& buffer, int left, int right);

    /*!
     * @brief size
     * @return size of array
     */
    int size();

    /*!
     * @brief get array
     * @return array
     */
    std::vector<int> get_massive();

    /*!
     * @brief clear the array
     */
    void clear();

private:
    /*!
     * @brief data array
     */
    std::vector<int> value;
};

#endif // SORTING_H
