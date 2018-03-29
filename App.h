#ifndef _APP_H_
#define _APP_H_

#include "Module.h"

class App {
public:
    App() : App(0, 0) {}
    App(int argc, char **argv);
    ~App();

    int run();
};

#endif
