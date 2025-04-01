#include <iostream>
#include "calculator.h"
#include "fraction.h"
#include "math.h"

void Calculator::run() {
    // Exemplo de utilização dos módulos fraction e math
    Fraction f1(1, 2), f2(1, 3);
    Fraction resultado = f1.add(f2);
    
    std::cout << "Resultado da soma: " << resultado.getNumerator() 
              << "/" << resultado.getDenominator() << std::endl;
    
    // Exemplo com função matemática
    double valor = 9.0;
    std::cout << "Raiz quadrada de " << valor << " é " 
              << math::squareRoot(valor) << std::endl;
}