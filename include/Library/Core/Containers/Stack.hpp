////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Open Space Toolkit ▸ Core
/// @file           Library/Core/Containers/Stack.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __OpenSpaceToolkit_Core_Containers_Stack__
#define __OpenSpaceToolkit_Core_Containers_Stack__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace library
{
namespace core
{
namespace ctnr
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @brief                      First-in, last-out (FILO) container

class Stack
{

    public:

                                Stack                                       ( ) = delete ;

                                Stack                                       (   const   Stack&                      aStack                                      ) ;

                                ~Stack                                      ( ) ;

        Stack&                  operator =                                  (   const   Stack&                      aStack                                      ) const ;

        friend std::ostream&    operator <<                                 (           std::ostream&               anOutputStream,
                                                                                const   Stack&                      aStack                                      ) ;

        bool                    isDefined                                   ( ) const ;

        static Stack            Empty                                       ( ) ;

        static Stack            Object                                      (   const   Object&                     anObject                                    ) ;

    private:

        // [TBI]

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
