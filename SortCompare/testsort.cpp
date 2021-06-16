#include "testsort.h"

using namespace std;

TestSort::TestSort(QObject *parent) : QObject(parent)
{

}

Sorting TestSort::data() const
{
    return m_data;
}

void TestSort::run()
{
    if (variant == 1){
        switch(index){
        case 0:
        {
            m_data.bubblesort();
            break;
        }
        case 1:
        {
            m_data.quicksort(0,m_data.size()-1);
            break;
        }
        case 2:
        {
            m_data.selectionsort();
            break;
        }
        case 3:
        {
            vector<int>buff(m_data.size());
            m_data.mergeSort(buff, 0, m_data.size());
            break;
        }
        case 4:
        {
            m_data.insertionSort();
            break;
        }
        }
        ofstream f("output1.txt");
        for (auto x: m_data.get_massive()) f<<x<<" ";
        f.close();
        emit enableButtonRes1();
        emit timeCount1();
    }
    else {
        switch(index){
        case 0:
        {
            m_data.bubblesort();
            break;
        }
        case 1:
        {
            m_data.quicksort(0,m_data.size()-1);
            break;
        }
        case 2:
        {
            m_data.selectionsort();
            break;
        }
        case 3:
        {
            vector<int>buff(m_data.size());
            m_data.mergeSort(buff, 0, m_data.size());
            break;
        }
        case 4:
        {
            m_data.insertionSort();
            break;
        }
        }
        ofstream f("output2.txt");
        for (auto x: m_data.get_massive()) f<<x<<" ";
        f.close();
        emit enableButtonRes2();
        emit timeCount2();
    }
    emit enableRunButton();
    emit finished();
}

void TestSort::setData(Sorting data)
{

    m_data = data;
    emit dataChanged(m_data);
}

void TestSort::setVariant(int i)
{
    variant = i;
}

void TestSort::setIndex(int i)
{
    index = i;
}
