#ifndef HANABI_GUI_CARD_HPP
#define HANABI_GUI_CARD_HPP

#include "gui/card.fwd.hpp"
#include "logic/game.hpp"

#include <QWidget>

namespace hanabi {
namespace gui {

class Card : public QWidget
{
   Q_OBJECT
public:
   explicit Card(QWidget *parent = 0);

signals:

public slots:
};

} // namespace gui
} // namespace hanabi

#endif // HANABI_GUI_CARD_HPP
