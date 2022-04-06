#ifndef SPINBOX_HPP
#define SPINBOX_HPP

#include "widget.hpp"

class Spinbox : public Widget
{
public:
    Spinbox(int x, int y, int sx, int sy);
    void draw() override;
    void handle(genv::event ev) override;
};

#endif // SPINBOX_HPP
