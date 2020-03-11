#include <QApplication>
#include <QLabel>

int main(int argc, char * argv[])
{
	QApplication myApp(argc, argv);
	QLabel label("Qt Hello world");
	label.show();

	return myApp.exec();
}
