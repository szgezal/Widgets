#include "widget.hpp"
#include "graphics.hpp"

Widget::Widget(Application* parent, int _x, int _y, int _size_x, int _size_y): x(_x), y(_y), size_x(_size_x), size_y(_size_y)
{
    parent->add_widget(this);
}

bool Widget::on_widget(genv::event ev)
{
    return ev.pos_x > x && ev.pos_x < x + size_x &&
           ev.pos_y > y && ev.pos_y < y + size_y;
}
