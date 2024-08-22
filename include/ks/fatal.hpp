#pragma once

#include <source_location>

#include <ks/fatal/detail/symbol_visibility.hpp>

namespace ks::fatal {
inline namespace abiv1 {

[[noreturn]] void KS_FATAL_EXPORT
panic(char const* reason,
      std::source_location const& location =
          std::source_location::current()) noexcept;

} // namespace abiv1
} // namespace ks::fatal
