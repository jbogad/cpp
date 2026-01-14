/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assistant <assistant@localhost>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:00:00 by assistant          #+#    #+#             */
/*   Updated: 2026/01/11 00:00:00 by assistant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    int _value;
    static const int _bits = 8;

    /* helper to build from raw value */
    static Fixed fromRaw(int raw) { Fixed f; f._value = raw; return f; }

public:
    Fixed(): _value(0) {}
    Fixed(const Fixed &o): _value(o._value) {}
    ~Fixed() {}
    Fixed &operator=(const Fixed &o) { _value = o._value; return *this; }

    int getRawBits() const { return _value; }
    void setRawBits(int r) { _value = r; }

    Fixed(int v): _value(v << _bits) {}
    Fixed(float f): _value(static_cast<int>(roundf(f * (1 << _bits)))) {}
    float toFloat() const { return static_cast<float>(_value) / (1 << _bits); }
    int toInt() const { return _value >> _bits; }

    /* comparisons use raw int (faster and exact) */
    bool operator>(const Fixed &o) const { return _value > o._value; }
    bool operator<(const Fixed &o) const { return _value < o._value; }
    bool operator>=(const Fixed &o) const { return _value >= o._value; }
    bool operator<=(const Fixed &o) const { return _value <= o._value; }
    bool operator==(const Fixed &o) const { return _value == o._value; }
    bool operator!=(const Fixed &o) const { return _value != o._value; }

    /* + and - on raw values are exact */
    Fixed operator+(const Fixed &o) const { return fromRaw(_value + o._value); }
    Fixed operator-(const Fixed &o) const { return fromRaw(_value - o._value); }

    /* * and / using integer math to avoid float conversion where possible */
    Fixed operator*(const Fixed &o) const { long long r = (long long)_value * o._value; return fromRaw(static_cast<int>(r >> _bits)); }
    Fixed operator/(const Fixed &o) const { long long r = ((long long)_value << _bits) / o._value; return fromRaw(static_cast<int>(r)); }

    /* increments/decrements operate on raw representation */
    Fixed &operator++() { ++_value; return *this; }
    Fixed operator++(int) { Fixed tmp = *this; _value++; return tmp; }
    Fixed &operator--() { --_value; return *this; }
    Fixed operator--(int) { Fixed tmp = *this; _value--; return tmp; }

    static Fixed &min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
    static const Fixed &min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
    static Fixed &max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
    static const Fixed &max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }
};

inline std::ostream &operator<<(std::ostream &o, const Fixed &f) { o << f.toFloat(); return o; }

#endif
