#include "widget.hpp"
#include "graphics.hpp"

Widget::Widget(int _x, int _y, int _size_x, int _size_y): x(_x), y(_y), size_x(_size_x), size_y(_size_y)
{

}

bool Widget::selected(genv::event ev)
{
    return ev.pos_x > x && ev.pos_x < x + size_x &&
           ev.pos_y > y && ev.pos_y < y + size_y &&
           ev.type == genv::ev_mouse && ev.button == genv::btn_left;
}
