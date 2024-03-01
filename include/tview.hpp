#pragma once
#include <string.h>
#include <iostream>
#include "view.hpp"


namespace MWC
{

class Tview: public View{
    private:

    public:
        Tview(){}

        ~Tview(){}
        

        int draw(std::string& name){
            std::cout << name << "\n";
        }
};
    
}
