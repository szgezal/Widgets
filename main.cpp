#include "graphics.hpp"
#include "widget.hpp"
#include "spinbox.hpp"
#include "scroll_list.hpp"
#include <vector>

using namespace genv;


int main()
{
    gout.open(600,600);
    gout.load_font("LiberationSans-Regular.ttf");

    std::vector<Widget*> widgets;
    Spinbox* sb1 = new Spinbox(10,10,200,40);
    Scroll_list* sl1 = new Scroll_list(250,10,200,40);
    Spinbox* sb2 = new Spinbox(10,60,200,40);
    Scroll_list* sl2 = new Scroll_list(250,60,200,40);

    widgets.push_back(sb1);
    widgets.push_back(sl1);
    widgets.push_back(sb2);
    widgets.push_back(sl2);

    for (size_t i = 0; i < widgets.size(); i++) {
        widgets[i]->draw();
    }
    gout << refresh;

    event ev;
    while (gin >> ev && ev.keycode != key_escape) {
        for (Widget* w: widgets)
            if (w->selected(ev)) {
                w->handle(ev);
                w->draw();
            }
        gout << refresh;
    }

    return 0;
}
