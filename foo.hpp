#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> vec(people.size());
    auto it = vec.rbegin();
    for(auto& h : people)
    {
        h.birthday();
        if(h.isMonster())
        {
            *it = 'n';
        }
        else
        {
            *it = 'y';
        }
        it++;
    }

    return vec;
}
