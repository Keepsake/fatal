#include <ks/fatal.hpp>

#include <cinttypes>
#include <cstdio>
#include <cstdlib>

namespace ks::fatal {
inline namespace abiv1 {

void
panic(char const* reason, std::source_location const& location) noexcept
{
  std::fprintf(stderr,
               "fatal %s:%" PRIuLEAST32 " (%s) %s\n",
               location.file_name(),
               location.line(),
               location.function_name(),
               reason);

  if (std::getenv("KS_ABORT_ON_PANIC") != nullptr)
    std::abort();

  std::exit(EXIT_FAILURE);
}

} // namespace abiv1
} // namespace ks::fatal
