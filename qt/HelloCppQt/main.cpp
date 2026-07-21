#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call QCoreApplication::quit() or QCoreApplication::exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to QCoreApplication::exec() or use the Non-Qt Plain C++ Application template.

    //return QCoreApplication::exec();

    cout << "=====================================" << endl;
    cout << "Hello Amit!" << endl;
    cout << "Welcome to CppQt2026 Bootcamp." << endl;
    cout << "Today's date: 21 July 2026" << endl;
    cout << "=====================================";

    // We are not using the Qt event loop yet.
    return 0;
}
