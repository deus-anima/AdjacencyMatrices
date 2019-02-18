#include "graph.h"
#include <QDebug>

graph::graph()
{
    int graphs;
    int node;
    int
        z = 0,
        i = 0,
        j = 0,
        a[10][10][10];

    cout << "Введите количество графов: ";
    cin >> graphs;
    cout << "Введите количество узлов: ";
    cin >> node;

    for (z=0;z<graphs;z++) {
        cout<<"Заполните матрицy смежности "<< z+1 <<" графа построчно! \n";
        for (i=0; i<node; i++){
            for (j=0; j<node; j++)
            cin>>a[z][i][j];
        }
    };

    for(z=0;z<graphs;z++){
        cout<<"Матрица смежности "<< z+1 << " графа \n";
        for (i=0; i<node; i++) {
            for (j=0; j<node; j++)
            cout<<a[z][i][j]<<"\t";
            cout<<endl;
        }
    };

    if (a[z][0][0] == a[z][0][0]) {
        qDebug()<<"GOOD";
    }else{
        qDebug()<<"GOOD NIGHT";
    }

//    qDebug()<<a[0][0][0];  //1
//    qDebug()<<a[0][0][1];  //2
//    qDebug()<<a[0][0][2];  //3
//    qDebug()<<a[0][1][0];  //4     3х3
//    qDebug()<<a[0][1][1];  //5
//    qDebug()<<a[0][1][2];  //6
//    qDebug()<<a[0][2][0];  //7
//    qDebug()<<a[0][2][1];  //8
//    qDebug()<<a[0][2][2];  //9

    qDebug()<<a[0][0][0];  //5
    qDebug()<<a[0][0][1];  //6
    qDebug()<<a[0][1][0];  //7    2х2
    qDebug()<<a[0][1][1];  //8
    cout<<endl;
    qDebug()<<a[1][0][0];  //5
    qDebug()<<a[1][0][1];  //6
    qDebug()<<a[1][1][0];  //7    2х2
    qDebug()<<a[1][1][1];  //8
}
