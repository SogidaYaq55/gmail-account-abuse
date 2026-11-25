// state.cpp — part of gmail-account-abuse.

#include "gmailaccountabuse/state.h"

#include <cstdio>

namespace gmailaccountabuse {

State::State(const std::string& config_path)
    : config_path_(config_path) {}

void State::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool State::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-account-abuse] state: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailaccountabuse
