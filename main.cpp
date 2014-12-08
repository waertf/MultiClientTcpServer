#include <QCoreApplication>
#include <iostream>
#include <QTcpServer>
#include "multiclientserver.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MultiClientServer *b=new MultiClientServer() ;
    b->start();
    return a.exec();
}



