#include "gui/mainwindow.hpp"
#include "logic/game.hpp"
#include "logic/deck.hpp"
#include "gui/card.hpp"

#include <QPushButton>

namespace hanabi {
namespace gui {

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent)
{
   QPushButton * button = new QPushButton("New Game", this);
   m_centralWidget.reset(button);
   QObject::connect(button, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
   setCentralWidget(m_centralWidget.get());
}

void MainWindow::on_pushButton_clicked() {
   m_curentGame.reset(new logic::Game());
   m_centralWidget.reset();
   repaint();
}

}
}

