#include "llogg.h"

int main() {
    // Wywołanie funkcji z biblioteki
    print_logg("Something is wrong in program!");

    llogg_trace("Trace msg");
    llogg_debug("Debug msg");
    llogg_info("Info msg");
    llogg_warn("Warn msg");
    llogg_error("Error msg");
    llogg_fatal("Fatal msg");

    return 0;
}
