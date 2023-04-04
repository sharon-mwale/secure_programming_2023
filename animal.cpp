#include "animal.h"

std::ostream &operator<<(std::ostream &out, Animal &oparand)
{
    oparand.print_info(out);
    return out;
};
