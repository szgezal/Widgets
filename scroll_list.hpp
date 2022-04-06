#ifndef SCROLL_LIST_HPP
#define SCROLL_LIST_HPP

#include "widget.hpp"

class Scroll_list : public Widget
{
public:
    Scroll_list(int x, int y, int sx, int sy);
    void draw() override;
    void handle(genv::event ev) override;
};

#endif // SCROLL_LIST_HPP
