#pragma once


template <char... c>
struct S {
    inline static constexpr char s[]{c...};
};

class X;

template <class>
struct P {
    P() {}
};


namespace {
inline P<X *> p;
}  // namespace
