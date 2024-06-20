//
// Created by mustafayanikdorugu on 20.06.2024.
//

#pragma once

#include <iostream>

namespace utilities {

    template<typename... Args>
    class Print {

    public:
        /**
         * @brief Default Constructor.
         */
        Print() = delete;

        /**
         * @brief Default Destructor.
         */
        ~Print() = default;

        Print(Args... args) {

            ((std::cout << args), ...);
        }
    };

}