#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <QVector>
using namespace std;

class graph
{
public:
    graph();
    void inputMatrix();
    void outputMatrix();
    bool compareMatrix();

private:
    int graphs = 2;
    int node;
    int graphNum = 0,
        i = 0,
        j = 0,
        a[10][10][10];
    bool result = true;
};

#endif // GRAPH_H
