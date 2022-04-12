#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <vector>
#include "graphics.hpp"
using namespace genv;

class Widget;

class Application {
protected:
    std::vector<Widget*> widgets;
    Widget* focused;

public:
    Application(int, int);
    void eventloop();
    void add_widget(Widget*);
};


#endif // APPLICATION_HPP
