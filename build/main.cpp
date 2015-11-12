#include "../gui/mainwindow.hpp"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   hanabi::gui::MainWindow w;
   w.show();

   return a.exec();
}
