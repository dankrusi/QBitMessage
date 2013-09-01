/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
// CONTRIBUTORS AND COPYRIGHT HOLDERS (c) 2013:
// Dag Robøle (BM-2DAS9BAs92wLKajVy9DS1LFcDiey5dxp5c)

#ifndef BM_BTYPES_H
#define BM_BTYPES_H

#include <vector>
#include <botan/types.h>
#include <botan/bigint.h>
#include <botan/secmem.h>
#include <botan/symkey.h>
#include <QtEndian>

#define big_to_host_16(v) qFromBigEndian(v)
#define big_to_host_32(v) qFromBigEndian(v)
#define big_to_host_64(v) qFromBigEndian(v)
#define host_to_big_16(v) qToBigEndian(v)
#define host_to_big_32(v) qToBigEndian(v)
#define host_to_big_64(v) qToBigEndian(v)

namespace bm {

typedef Botan::byte Byte;
typedef Botan::secure_vector<Byte> SecureVector;
typedef std::vector<Byte> ByteVector;
typedef Botan::OctetString OctetString;
typedef Botan::BigInt BigInteger;

} // namespace bm

#endif
