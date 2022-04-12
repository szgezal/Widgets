#include "graphics.hpp"
#include "widget.hpp"
#include "application.hpp"
#include "spinbox.hpp"
#include "scroll_list.hpp"
#include <vector>
#include <time.h>

using namespace genv;


const int width = 800, height = 600;


class App : public Application {
protected:
    Spinbox* sb1;
    Spinbox* sb2;
    Scroll_list* sl1;
    Scroll_list* sl2;

public:
    App(int width, int height) : Application(width, height) {
        sb1 = new Spinbox(this, 20, 20, 200, 40, -20, 20);
        sb2 = new Spinbox(this, 20, 100, 200, 40, -30, 30);
        sl1 = new Scroll_list(this, 300, 100, 200, 40);
        sl2 = new Scroll_list(this, 550, 100, 200, 40);
    }
};


int main()
{
    srand(time(NULL));

    App app(width, height);

    app.eventloop();

    return 0;
}
