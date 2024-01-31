/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:18:30 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/31 17:23:22 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"
#include "Serializer.cpp"
#include <iostream>

int main() {
    Data myData;
    myData.value = 42;

    uintptr_t raw = Serializer::serialize(&myData);
    Data* deserializedData = Serializer::deserialize(raw);

    if (&myData == deserializedData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Error in serialization/deserialization." << std::endl;
    }

    return 0;
}
