// limits.cpp — part of gmail-account-abuse.

#include "gmailaccountabuse/limits.h"

#include <cstdio>

namespace gmailaccountabuse {

Limits::Limits(const std::string& config_path)
    : config_path_(config_path) {}

void Limits::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Limits::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-account-abuse] limits: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailaccountabuse
