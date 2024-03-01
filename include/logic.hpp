#pragma once
#include <iostream>
#include "view.hpp"



namespace MWC{


class Logic{
    private:
        const size_t name_size = 1024;
        std::string name;
        MWC::View& viev;

    public:
        Logic(MWC::View& new_viev): viev(new_viev){}

        ~Logic(){}


        void Set_and_Send_Name(std::string& str){
            name = str;
            viev.draw();
            
        }

};


}