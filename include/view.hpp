#pragma once
#include <string>
#include <iostream>


namespace MWC{


class View{
    private:
        static View* view;

    protected:

    public:
        virtual ~View(){}

        static View* get(std::string s = "text");

        virtual int draw() = 0;

};

}