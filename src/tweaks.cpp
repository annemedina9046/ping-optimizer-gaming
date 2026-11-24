// tweaks.cpp — part of ping-optimizer-gaming.

#include "pingoptimizergaming/tweaks.h"

#include <cstdio>

namespace pingoptimizergaming {

Tweaks::Tweaks(const std::string& config_path)
    : config_path_(config_path) {}

void Tweaks::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tweaks::run() {
    if (verbose_) std::fprintf(stderr, "[ping-optimizer-gaming] tweaks: run\n");
    // core logic lives here
    return true;
}

}  // namespace pingoptimizergaming
