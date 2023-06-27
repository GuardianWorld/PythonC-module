#include <iostream>
#include "../libraries/pybind11/pybind11.h"

#ifdef _WIN32
    const std::string CLEAR_COMMAND_OUTPUT = " > nul 2>&1";
#else
    const std::string CLEAR_COMMAND_OUTPUT = " > /dev/null 2>&1";
#endif

class pythonLinker{
    private:
        bool usePython;
        bool hasPython;
        bool checkPython();
    public:
        pythonLinker(bool pythonEnabled);
};