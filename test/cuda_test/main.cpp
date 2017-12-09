#include <QtCore/QtCore>

// This is the 'elder trick of the...' - Tell the compiler this function is defined in other place
extern "C"
void runCudaPart();

int main(int argc, char *argv[]) {

QCoreApplication a(argc, argv);

runCudaPart();

return a.exec();

}
