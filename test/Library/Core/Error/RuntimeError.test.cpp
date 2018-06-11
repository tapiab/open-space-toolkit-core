////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Core
/// @file           Library/Core/Error/RuntimeError.test.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Global.test.hpp>

#include <Library/Core/Error/RuntimeError.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TEST (Library_Core_Error_RuntimeError, DefaultConstructor)
{

    using library::core::error::RuntimeError ;

    EXPECT_THROW(throw RuntimeError("This is a test."), RuntimeError) ;
    EXPECT_THROW(throw RuntimeError("This is a scope.", "This is a test."), RuntimeError) ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////