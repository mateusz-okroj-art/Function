#pragma once

#include <functional>
#include <type_traits>

namespace Function
{
    template <typename ReturnType, typename... Args>
    struct Function
    {
        using Return = ReturnType;
        using Arguments = std::tuple<Args...>;
        using ArgumentsCount = std::tuple_size<Arguments>;

        template <size_t Index>
        using Argument = typename std::tuple_element_t<Index, Arguments>;

        
    };


}