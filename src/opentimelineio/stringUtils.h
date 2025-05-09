// SPDX-License-Identifier: Apache-2.0
// Copyright Contributors to the OpenTimelineIO project

#pragma once

#include "opentime/stringPrintf.h"
#include "opentimelineio/version.h"
using opentime::string_printf;

#include <any>
#include <string>

namespace opentimelineio { namespace OPENTIMELINEIO_VERSION {

/// @name String Utilities
///@{

void fatal_error(std::string const& errMsg);

std::string type_name_for_error_message(std::type_info const&);
std::string type_name_for_error_message(std::any const& a);
std::string type_name_for_error_message(class SerializableObject*);

template <typename T>
std::string
type_name_for_error_message()
{
    return type_name_for_error_message(typeid(T));
}

bool split_schema_string(
    std::string const& schema_and_version,
    std::string*       schema_name,
    int*               schema_version);

///@}

}} // namespace opentimelineio::OPENTIMELINEIO_VERSION
