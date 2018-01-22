#include <QCoreApplication>
#include "checkerhelper.h"

#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << CheckerHelper().getChecker("ascii")->detect("greedysky");
    qDebug() << CheckerHelper().detect("\xe6\xb5\x8b\xe8\xaf\x95").c_str();
    qDebug() << CheckerHelper().check("utf-8", "\xe6\xb5\x8b\xe8\xaf\x95");

    return a.exec();
}
