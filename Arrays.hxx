#ifndef ARRAYS_HXX_INCLUDED
#define ARRAYS_HXX_INCLUDED

#include "Basic.hxx"

#include <array>

extern std::array<byte, 256> const Rcon;
extern std::array<byte, 256> const SBox;
extern std::array<byte, 256> const InverseSBox;

word getRcon(size_t i);

byte SubByte( byte b );

word SubWord(word w);

byte InvSubByte( byte b );

#endif // ARRAYS_HXX_INCLUDED
