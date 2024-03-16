#include <ks/fatal.hpp>

#include <cstdlib>

namespace ks::fatal {

void
panic() noexcept
{
  if (std::getenv("KS_ABORT_ON_PANIC") != nullptr)
    std::abort();

  std::exit(EXIT_FAILURE);
}

} // namespace ks::fatal
