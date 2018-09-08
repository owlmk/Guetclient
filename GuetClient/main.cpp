#include "GuetClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GuetClient w;
	w.show();
	return a.exec();
}
