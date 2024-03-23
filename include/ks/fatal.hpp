#pragma once

#include <ks/fatal/detail/symbol_visibility.hpp>

namespace ks::fatal {

[[noreturn]] void KS_FATAL_EXPORT
panic() noexcept;

} // namespace ks::fatal
