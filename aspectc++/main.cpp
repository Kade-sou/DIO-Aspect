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
//#include <ac++/aspect.h>
#include "ContaClass.ah"

aspect SaldoAspect {
    pointcut todasAsContas() : execution(".* ContaBancaria::realizarSaque(double)");

    advice todasAsContas() : before() {
        if (valorDoSaque > thisJoinPoint->target()->getSaldo()) {
            std::cout << "Saldo insuficiente para realizar o saque de $" << valorDoSaque << "." << std::endl;
            abort();  
	}
    }

private:
    double valorDoSaque;
};


int main() {
    ContaCorrente cc(1000.0);
    ContaSalario cs(500.0);

    cc.realizarSaque(800.0);
    cs.realizarSaque(600.0);

    return 0;
}

