#include "graph.h"
#include <QDebug>

graph::graph()
{
    int graphs;
    int node;
    int
        graphNum = 0,
        i = 0,
        j = 0,
        a[10][10][10];
    bool result = true;

    cout << "Введите количество графов: ";
    cin >> graphs;
    cout << "Введите количество узлов: ";
    cin >> node;

    //Input
    for (graphNum=0;graphNum<graphs;graphNum++) {
        cout<<"Заполните матрицy смежности "<< graphNum+1 <<" графа построчно! \n";
        for (i=0; i<node; i++){
            for (j=0; j<node; j++)
            cin>>a[graphNum][i][j];
        }
    }

    //Output
    for(graphNum=0;graphNum<graphs;graphNum++){
        cout<<"Матрица смежности "<< graphNum+1 << " графа \n";
        for (i=0; i<node; i++) {
            for (j=0; j<node; j++) {
            cout<<a[graphNum][i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    //Compare
    for (i=0; i<node; i++) {
        for (j=0; j<node; j++) {
                if (a[0][j][i] != a[1][j][i]) {
                    result = false;
                }
        }
    }

    if (result == true) {
        qDebug() << "Равны";
    } else {
        qDebug() << "Не равны";
    }
}
