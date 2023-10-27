#include <QApplication>
#include "MyWindow.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    MyWindow mainWindow;
    mainWindow.setWindowTitle("Fereastra mea");
    mainWindow.show();

    return app.exec();
}
//acesta este un comentariu taskA
//acesta e un comentariu din taskB
//task13