#ifndef WIDGET_HPP
#define WIDGET_HPP

#include "graphics.hpp"
#include "application.hpp"

class Widget
{
protected:
    Application* parent;
    int x, y, size_x, size_y;
public:
    Widget(Application*, int, int, int, int);
    virtual bool on_widget(genv::event);
    virtual void draw() = 0;
    virtual void handle(genv::event, Widget*) = 0;
};

#endif // WIDGET_HPP
