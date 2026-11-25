// rotate — part of gmail-account-abuse.

#pragma once

#include <string>
#include <vector>

namespace gmailaccountabuse {

class Rotate {
public:
    explicit Rotate(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace gmailaccountabuse
