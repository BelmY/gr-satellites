/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(encode_rs.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(2fffbad3d096f4c788e149994d275a78)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <satellites/encode_rs.h>
// pydoc.h is automatically generated in the build directory
#include <encode_rs_pydoc.h>

void bind_encode_rs(py::module& m)
{

    using encode_rs    = ::gr::satellites::encode_rs;


    py::class_<encode_rs, gr::block, gr::basic_block,
        std::shared_ptr<encode_rs>>(m, "encode_rs", D(encode_rs))

        .def(py::init(py::overload_cast<bool, int>(&encode_rs::make)),
           py::arg("dual_basis"),
           py::arg("interleave") = 1//, TODO: fix docstrings
	   //D(encode_rs,make)
        )
        

        .def(py::init(py::overload_cast<int, int, int, int, int, int>(&encode_rs::make)),
           py::arg("symsize"),
           py::arg("gfpoly"),
           py::arg("fcr"),
           py::arg("prim"),
           py::arg("nroots"),
	   py::arg("interleave")//,
           //D(encode_rs,make)
        )



        ;




}








