//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#include <boost/python/def.hpp>
#include <boost/python.hpp>

#include <pxr/pxr.h>
#include <pxr/base/tf/pyResultConversions.h>

#include <mayaUsd/utils/query.h>

using namespace std;
using namespace boost::python;
using namespace boost;

PXR_NAMESPACE_USING_DIRECTIVE

void wrapQuery()
{
    def("GetPrim", UsdMayaQuery::GetPrim);
    def("ReloadStage", UsdMayaQuery::ReloadStage);
}
