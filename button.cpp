#include "button.hpp"

Button::Button(Spinbox* _parent, int _x, int _y, int _sx, int _sy): parent(_parent), x(_x), y(_y), size_x(_sx), size_y(_sy) {}

void Button::handle(genv::event ev) {
    if (this->in_focus(ev))
        this->down = true;
    else if (!this->in_focus(ev) || ev.button == -btn_left)
        this->down = false;
}

bool Button::in_focus(genv::event ev) {
    return ev.pos_x > x && ev.pos_y > y &&
           ev.pos_x < x + size_x && ev.pos_y < y + size_y;
}


ButtonUp::ButtonUp(Spinbox* _parent, int _x, int _y, int _sx, int _sy): Button(_parent, _x, _y, _sx, _sy) {}

void ButtonUp::draw() {
    if (down) {
        gout << color(100, 100, 100) << move_to(x, y) << box(size_x, size_y);
        for (int i = 0; i < 5; i++)
            gout << color(50, 50, 50) << move_to(x + 5 + i, y + 12 - i) << line(10 - 2*i, 0);
    } else {
        gout << color(150, 150, 150) << move_to(x, y) << box(size_x, size_y);
        for (int i = 0; i < 5; i++)
            gout << color(50, 50, 50) << move_to(x + 5 + i, y + 12 - i) << line(10 - 2*i, 0);
    }
}


ButtonDown::ButtonDown(Spinbox* _parent, int _x, int _y, int _sx, int _sy): Button(_parent, _x, _y, _sx, _sy) {}

void ButtonDown::draw() {
    if (down) {
        gout << color(100, 100, 100) << move_to(x, y) << box(size_x, size_y);
        for (int i = 0; i < 5; i++)
            gout << color(50, 50, 50) << move_to(x + 5 + i, y + 8 + i) << line(10 - 2*i, 0);
    } else {
        gout << color(150, 150, 150) << move_to(x, y) << box(size_x, size_y);
        for (int i = 0; i < 5; i++)
            gout << color(50, 50, 50) << move_to(x + 5 + i, y + 8 + i) << line(10 - 2*i, 0);
    }
}

