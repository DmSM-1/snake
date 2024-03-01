#pragma once
#include <iostream>
#include <string>
#include "logic.hpp"


namespace MWC{


class Control{
    private:
        const size_t name_size = 1024;
        std::string game_name;
        MWC::Logic& logic;


    public:
        Control(MWC::Logic& new_logic)
            :logic(new_logic){}

        void Get_name(){
            std::cin >> game_name;
        }

        void Send_name(){
            logic.Set_and_Send_Name(game_name);
        }
};


}