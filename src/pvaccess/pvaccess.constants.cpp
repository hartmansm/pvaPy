// Copyright information and license terms for this software can be
// found in the file LICENSE that is included with the distribution

#include "boost/python/scope.hpp"

using namespace boost::python;

//
// Various constants
// 
void wrapConstants()
{

scope().attr("ALL_FIELDS_REQUEST") = "field()";
scope().attr("FIELD_VALUE_REQUEST") = "field(value)";

} // wrapConstants()

