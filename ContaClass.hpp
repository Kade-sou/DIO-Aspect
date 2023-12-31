/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*   				ContaClass.hpp 			              */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACLASS_HPP
# define CONTACLASS_HPP
# include <iostream>

class ContaBancaria {
public:
    ContaBancaria(double saldoInicial) : saldo(saldoInicial) {}

    virtual void realizarSaque(double valor) {
        double valorDoSaque = valor;
    }

    double getSaldo() const {
        return saldo;
    }

private:
    double saldo;
};

class ContaCorrente : public ContaBancaria {
public:
    ContaCorrente(double saldoInicial) : ContaBancaria(saldoInicial) {}
};

class ContaSalario : public ContaBancaria {
public:
    ContaSalario(double saldoInicial) : ContaBancaria(saldoInicial) {}
};

#endif
