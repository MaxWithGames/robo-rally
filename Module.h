#ifndef _MODULE_H_
#define _MODULE_H_

class Module {
private:
    Module() {}
    Module(const Module &) {}
    ~Module() {}

public:
    virtual bool init() = 0;
    virtual bool exec() = 0;
};

#endif
