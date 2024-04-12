module;

#include "h.hpp"

class X {
private:
    inline static auto s = S<'x'>::s;
public:
    static void x(X) {
    }
};

export module bar;
