////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/Core
/// @file           Library/Core/Error/RuntimeError.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/Core/Error/RuntimeError.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace core
{
namespace error
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                RuntimeError::RuntimeError                  (   const   String&                     aMessage                            )
                                :   Exception(String::Empty()),
                                    message_(aMessage)
{
    
}

                                RuntimeError::RuntimeError                  (   const   String&                     aScope,
                                                                                const   String&                     aMessage                            )
                                :   Exception(aScope),
                                    message_(aMessage)
{
    
}

                                RuntimeError::~RuntimeError                 ( )
{

}

const char*                     RuntimeError::what                          ( ) const noexcept
{
    return message_.data() ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////