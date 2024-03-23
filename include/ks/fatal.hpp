#pragma once

#include <ks/fatal/detail/symbol_visibility.hpp>

namespace ks::fatal {

KS_FATAL_EXPORT [[noreturn]] void
panic() noexcept;

} // namespace ks::fatal
