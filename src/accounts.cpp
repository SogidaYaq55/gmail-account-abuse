// accounts.cpp — part of gmail-account-abuse.

#include "gmailaccountabuse/accounts.h"

#include <cstdio>

namespace gmailaccountabuse {

Accounts::Accounts(const std::string& config_path)
    : config_path_(config_path) {}

void Accounts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Accounts::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-account-abuse] accounts: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailaccountabuse
