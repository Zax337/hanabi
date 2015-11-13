#ifndef HANABI_GUI_MAINWINDOW_HPP
#define HANABI_GUI_MAINWINDOW_HPP

#include "gui/mainwindow.fwd.hpp"
#include "logic/game.fwd.hpp"

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
   std::auto_ptr<logic::Game> m_curentGame;
   std::auto_ptr<QWidget> m_centralWidget;
};

}
}

#endif // HANABI_GUI_MAINWINDOW_HPP
