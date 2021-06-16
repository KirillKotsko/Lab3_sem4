/**
*	@file testsort.h
*	@author Kirill Kotsko
*	@version 1.1
*/
#ifndef TESTSORT_H
#define TESTSORT_H

#include <QObject>
#include <fstream>
#include "sorting.h"

/*!
 * @brief Class for testing sorting of arraay
 */
class TestSort : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Sorting data READ data WRITE setData NOTIFY dataChanged)
    /*!
     * @brief data to sort
     */
    Sorting m_data;

    /*!
     * @brief num of stream
     */
    int variant;

    /*!
     * @brief num of sort algo
     */
    int index;

public:
    /*!
     * @brief constructor
     * @param parent
     */
    explicit TestSort(QObject *parent = nullptr);

    /*!
     * @brief return sorting array
     * @return return sorting array
     */
    Sorting data() const;

signals:
    /*!
     * @brief signal that finished stream
     */
    void finished();
    void enableButtonRes1();
    void enableButtonRes2();
    void enableRunButton();
    void dataChanged(Sorting data);
    void timeCount1();
    void timeCount2();

public slots:
    /*!
     * @brief run stream
     */
    void run();
    /*!
     * @brief set array data
     * @param array data
     */
    void setData(Sorting data);
    /*!
     * @brief set variant
     * @param variant
     */
    void setVariant(int i);
    /*!
     * @brief set index
     * @param index
     */
    void setIndex(int i);
};

#endif // TESTSORT_H
