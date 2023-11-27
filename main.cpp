/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*   				Main.cpp 			              */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "aspect.ah"
#include "ContaClass.hpp"

int main() {
    ContaCorrente cc(1000.0);
    ContaSalario cs(500.0);

    cc.realizarSaque(800.0);
    cs.realizarSaque(600.0);

    return 0;
}

