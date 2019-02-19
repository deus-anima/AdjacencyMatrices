#include <QCoreApplication>
#include "graph.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    graph *g = new graph;
    g->inputMatrix();
    g->outputMatrix();
    if(g->compareMatrix()){
       qDebug() << "Равны";
    }else {
        qDebug() << "Не равны";
    };
    delete g;
    return a.exec();
}
