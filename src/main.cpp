// main.cpp — entry point. Wires config and subsystems together.

#include "gmailaccountabuse/settings.h"
#include "gmailaccountabuse/accounts.h"
#include "gmailaccountabuse/limits.h"
#include "gmailaccountabuse/rotate.h"
#include "gmailaccountabuse/cli.h"
#include "gmailaccountabuse/state.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gmailaccountabuse::Settings settings = gmailaccountabuse::Settings::load_default();
    gmailaccountabuse::Accounts accounts(settings.store_path);
    gmailaccountabuse::Limits limits(settings.store_path);
    gmailaccountabuse::Rotate rotate(settings.store_path);
    gmailaccountabuse::Cli cli(settings.store_path);
    gmailaccountabuse::State state(settings.store_path);
    std::fprintf(stderr, "[gmail-account-abuse] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
