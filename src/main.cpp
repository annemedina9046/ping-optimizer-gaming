// main.cpp — entry point. Wires config and subsystems together.

#include "pingoptimizergaming/settings.h"
#include "pingoptimizergaming/routes.h"
#include "pingoptimizergaming/tweaks.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    pingoptimizergaming::Settings settings = pingoptimizergaming::Settings::load_default();
    pingoptimizergaming::Routes routes(settings.store_path);
    pingoptimizergaming::Tweaks tweaks(settings.store_path);
    std::fprintf(stderr, "[ping-optimizer-gaming] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
