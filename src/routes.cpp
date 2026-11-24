// routes.cpp — part of ping-optimizer-gaming.

#include "pingoptimizergaming/routes.h"

#include <cstdio>

namespace pingoptimizergaming {

Routes::Routes(const std::string& config_path)
    : config_path_(config_path) {}

void Routes::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Routes::run() {
    if (verbose_) std::fprintf(stderr, "[ping-optimizer-gaming] routes: run\n");
    // core logic lives here
    return true;
}

}  // namespace pingoptimizergaming
