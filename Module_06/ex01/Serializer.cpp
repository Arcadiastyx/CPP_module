/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:20:19 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/31 17:20:26 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"
#include <cstdint>

class Serializer {
private:
    Serializer(); // Private constructor to prevent instantiation

public:
    static uintptr_t serialize(Data* ptr) {
        return reinterpret_cast<uintptr_t>(ptr);
    }

    static Data* deserialize(uintptr_t raw) {
        return reinterpret_cast<Data*>(raw);
    }
};
