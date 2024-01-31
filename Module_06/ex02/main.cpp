/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:28:05 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/31 17:28:10 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
public:
    virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void) {
    srand(time(nullptr));
    switch (rand() % 3) {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        return nullptr;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
}

void identify(Base& p) {
    if (dynamic_cast<A*>(&p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(&p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(&p))
        std::cout << "C\n";
}

int main() {
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}
