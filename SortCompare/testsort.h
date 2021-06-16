#ifndef TESTSORT_H
#define TESTSORT_H

#include <QObject>
#include <fstream>
#include "sorting.h"

class TestSort : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Sorting data READ data WRITE setData NOTIFY dataChanged)
    Sorting m_data;
    int variant;
    int index;

public:
    explicit TestSort(QObject *parent = nullptr);

    Sorting data() const;

signals:
    void finished();
    void enableButtonRes1();
    void enableButtonRes2();
    void enableRunButton();
    void dataChanged(Sorting data);
    void timeCount1();
    void timeCount2();

public slots:
    void run();
    void setData(Sorting data);
    void setVariant(int i);
    void setIndex(int i);
};

#endif // TESTSORT_H
