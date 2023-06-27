#include "pythonCaller.h"

pythonLinker::pythonLinker(bool pythonEnabled){
    this->usePython = pythonEnabled;
    this->hasPython = checkPython();
}

bool pythonLinker::checkPython(){
    std::string checkerCall = "python --version" + CLEAR_COMMAND_OUTPUT;
    int result =  system(checkerCall.c_str());
    if(result == 0){
        std::cout << "Python found!\n";
        return true;
    }
    std::cout << "Python not found!\n";
    return false;
}