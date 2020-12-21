/*
 *  Copyright (C) 2020 FISCO BCOS.
 *  SPDX-License-Identifier: Apache-2.0
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 * @file Common.cpp
 * @author chaychen asherli
 * @date 2018
 */

#include "Common.h"
#include "BlockHeader.h"
#include "Exceptions.h"
#include <libdevcrypto/Hash.h>
#include <boost/throw_exception.hpp>

using namespace std;
using namespace bcos;
using namespace bcos::protocol;

namespace bcos
{
namespace protocol
{
Address toAddress(std::string const& _address)
{
    auto address = fromHexString(_address);
    if (address->size() == 20)
    {
        return Address(*address);
    }
    BOOST_THROW_EXCEPTION(InvalidAddress());
}
}  // namespace protocol
}  // namespace bcos