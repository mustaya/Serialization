//
// Created by mustafayanikdorugu on 20.06.2024.
//

#pragma once

#include <iostream>

namespace utilities {

    class Print {

    public:
        /**
         * @brief Default Constructor.
         */
        Print() = default;

        /**
         * @brief Default Destructor.
         */
        ~Print() = default;

        template<typename... Args>
        void print(Args... args) {

            ((std::cout << args), ...);
        }
    };

}