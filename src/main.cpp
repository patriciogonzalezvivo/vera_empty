#include "vera/app.h"
#include "vera/ops/string.h"

#include "libopz/opz_rtmidi.h"
#include "libopz/tools.h"

class VeraApp : public vera::App {

    void setup() {
    }

    void update() {
    }

    void draw() {
    }
};

int main(int argc, char **argv) {
    VeraApp app;
    app.run();
    return 1;
}
