#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include "../logic/game.hpp"

#include <QMainWindow>

#include <memory>

namespace hanabi {
namespace gui {

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = 0);

private slots:
   void on_pushButton_clicked();

private:
   std::unique_ptr<logic::Game> m_curentGame;
   std::unique_ptr<QWidget> m_centralWidget;
};

}
}

#endif // MAINWINDOW_HPP
