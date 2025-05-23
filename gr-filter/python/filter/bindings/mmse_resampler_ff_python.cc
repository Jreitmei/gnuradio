/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(mmse_resampler_ff.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(de0e58d3cd04d2e7ab7526a60ff7546a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/mmse_resampler_ff.h>
// pydoc.h is automatically generated in the build directory
#include <mmse_resampler_ff_pydoc.h>

void bind_mmse_resampler_ff(py::module& m)
{

    using mmse_resampler_ff = ::gr::filter::mmse_resampler_ff;


    py::class_<mmse_resampler_ff,
               gr::block,
               gr::basic_block,
               std::shared_ptr<mmse_resampler_ff>>(
        m, "mmse_resampler_ff", D(mmse_resampler_ff))

        .def(py::init(&mmse_resampler_ff::make),
             py::arg("phase_shift"),
             py::arg("resamp_ratio"),
             D(mmse_resampler_ff, make))


        .def("mu", &mmse_resampler_ff::mu, D(mmse_resampler_ff, mu))


        .def("resamp_ratio",
             &mmse_resampler_ff::resamp_ratio,
             D(mmse_resampler_ff, resamp_ratio))


        .def("set_mu",
             &mmse_resampler_ff::set_mu,
             py::arg("mu"),
             D(mmse_resampler_ff, set_mu))


        .def("set_resamp_ratio",
             &mmse_resampler_ff::set_resamp_ratio,
             py::arg("resamp_ratio"),
             D(mmse_resampler_ff, set_resamp_ratio))

        ;
}
