//
//  Точка входа в программу
//

#include "application/application.h"

int main(int argc, char** argv) {
    Application app(argc, argv);
    return app.exec();
}