#include "widget.hpp"
#include "application.hpp"

Application::Application(int width, int height) {
    gout.open(width, height);
    gout.load_font("LiberationSans-Regular.ttf");
}

void Application::eventloop() {
    for (Widget* w: widgets) {
        w->draw();
    }
    gout << refresh;
    focused = widgets[0];

    event ev;
    bool selected = false;
    while (gin >> ev && ev.keycode != key_escape) {
        if (ev.type == ev_mouse && ev.button == btn_left) {
            selected = false;
            for (Widget* w: widgets) {
                if (w->on_widget(ev)) {
                    focused = w;
                    selected = true;
                }
            }
        }
        if (selected) {
            focused->handle(ev, focused);
            focused->draw();
        }

        gout << refresh;
    }
}

void Application::add_widget(Widget* w) {
    widgets.push_back(w);
}
