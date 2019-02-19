#include "graph.h"
#include <QDebug>

graph::graph()
{
};

//Input
void graph::inputMatrix(){
    cout << "Введите количество узлов: ";
    cin >> node;
    for (graphNum=0;graphNum<graphs;graphNum++) {
        cout<<"Заполните матрицy смежности "<< graphNum+1 <<" графа построчно! \n";
        for (i=0; i<node; i++){
            for (j=0; j<node; j++)
            cin>>a[graphNum][i][j];
        }
    }
};

//Output
void graph::outputMatrix(){
for(graphNum=0;graphNum<graphs;graphNum++){
    cout<<"Матрица смежности "<< graphNum+1 << " графа \n";
    for (i=0; i<node; i++) {
        for (j=0; j<node; j++) {
        cout<<a[graphNum][i][j]<<"\t";
        }
        cout<<endl;
    }
}
};

//Compare
bool graph::compareMatrix(){
    for (i=0; i<node; i++) {
        for (j=0; j<node; j++) {
                if (a[0][j][i] != a[1][j][i]) {
                    result = false;
                }
        }
    }
    return result;
};
