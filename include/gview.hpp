#pragma once
#include <string.h>
#include <iostream>
#include "view.hpp"


namespace MWC
{

class Gview: public View{
    private:

    public:
        Gview(){}

        ~Gview(){}
        

        int draw(std::string& name){
            std::cout << name << "\n";
        }
};
    
}
