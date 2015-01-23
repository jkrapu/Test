#include <QApplication>
#include <QQmlApplicationEngine>


/* 
Testing testing...
Testing 2
*/

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
