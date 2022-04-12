#ifndef SCROLL_LIST_HPP
#define SCROLL_LIST_HPP

#include "widget.hpp"

class Scroll_list : public Widget
{
public:
    Scroll_list(Application*, int, int, int, int);
    void draw() override;
    void handle(genv::event, Widget*) override;
};

#endif // SCROLL_LIST_HPP
