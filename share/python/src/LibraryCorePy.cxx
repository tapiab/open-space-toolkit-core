////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Core
/// @file           Library/Core/LibraryCorePy.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <boost/python.hpp>

// #include <boost/numpy.hpp>

// #include <eigen_numpy.h>

#include <LibraryCorePy/Types.cpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOST_PYTHON_MODULE (LibraryCorePy)
{

	// boost::numpy::initialize() ;

	// boost::python::numeric::array::set_module_and_type("numpy", "ndarray") ;

	// SetupEigenConverters() ;

	boost::python::object package = boost::python::scope() ;
	
	package.attr("__path__") = "Library" ;

	LibraryCorePy_Types() ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////