/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
// CONTRIBUTORS AND COPYRIGHT HOLDERS (c) 2013:
// Dag Robøle (BM-2DAS9BAs92wLKajVy9DS1LFcDiey5dxp5c)

#ifndef BM_ENC_H
#define BM_ENC_H

#include <stdint.h>
#include <string>
#include "btypes.h"

namespace bm {

namespace encode {

std::string hex(const SecureVector& v);
std::string hex(const ByteVector& v);
std::string hex(const BigInteger& v);

std::string base58(const BigInteger& src);
std::string base58(const SecureVector& src);

std::string base64(const SecureVector& data);
std::string base64(const ByteVector& data);

SecureVector varint(uint64_t integer);

std::string wif(const SecureVector& key);

} // namespace encode

namespace decode {

SecureVector hex(const std::string& encoded);

BigInteger base58i(const std::string& encoded);
SecureVector base58(const std::string& encoded);

SecureVector base64(const std::string& encoded);

uint64_t varint(const Byte* data, int &nbytes);

SecureVector wif(const std::string& encoded);

} // namespace decode

} // namespace bm

#endif
