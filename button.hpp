#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "widget.hpp"

class Spinbox;

class Button
{
protected:
    Spinbox* parent;
    int x, y, size_x, size_y;
    bool down = false;
public:
    Button(Spinbox*, int, int, int, int);
    virtual void draw() = 0;
    virtual void handle(genv::event ev);
    bool in_focus(genv::event ev);
};

class ButtonUp : public Button {
public:
    ButtonUp(Spinbox*, int, int, int, int);
    void draw() override;
};

class ButtonDown : public Button {
public:
    ButtonDown(Spinbox*, int, int, int, int);
    void draw() override;
};

#endif // BUTTON_HPP
