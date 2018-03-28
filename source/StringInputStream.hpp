/*
 * Copyright 2018 Frangou Lab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LIBGENE_IO_STREAMS_STRINGINPUTSTREAM_HPP_
#define LIBGENE_IO_STREAMS_STRINGINPUTSTREAM_HPP_

#include <string>
#include <memory>

#include "StringStream.hpp"

class StringInputStream : public StringStream {
 public:
    virtual ~StringInputStream() = default;
    
    virtual std::string ReadLineAndAdd(char ch) = 0;
    virtual std::string ReadLine() = 0;
    virtual char PeekNextCharacter() = 0;
    virtual void ResetFilePointer() = 0;
    bool empty() const;
};

#endif  // LIBGENE_IO_STREAMS_STRINGINPUTSTREAM_HPP_
