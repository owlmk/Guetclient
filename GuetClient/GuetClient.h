#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GuetClient.h"

class GuetClient : public QMainWindow
{
	Q_OBJECT

public:
	GuetClient(QWidget *parent = Q_NULLPTR);

private:
	Ui::GuetClientClass ui;
};
