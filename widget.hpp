#ifndef WIDGET_HPP
#define WIDGET_HPP

#include "graphics.hpp"

class Widget
{
protected:
    int x, y, size_x, size_y;
public:
    Widget(int _x, int _y, int _size_x, int _size_y);
    virtual bool selected(genv::event);
    virtual void draw() = 0;
    virtual void handle(genv::event ev) = 0;
};

#endif // WIDGET_HPP
