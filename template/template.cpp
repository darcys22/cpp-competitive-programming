#include<bits/stdc++.h>

struct complexNumber {
    float real;
    float imag;
};

complexNumber addComplexNumbers(complexNumber, complexNumber);

int main()
{
    complexNumber num1, num2, complexSum;
    char signOfImag;
    char signOfComplexSumImag;

    std::cout << "For 1st complex number," << std::endl;
    std::cout << "Enter real and imaginary parts respectively:" << std::endl;
    std::cin >> num1.real >> num1.imag;

    std::cout << std::endl
         << "For 2nd complex number," << std::endl;
    std::cout << "Enter real and imaginary parts respectively:" << std::endl;
    std::cin >> num2.real >> num2.imag;

    // Call add function and store result in complexSum
    complexSum = addComplexNumbers(num1, num2);

    // Use Ternary Operator to check the sign of the imaginary number
    signOfComplexSumImag = (complexSum.imag > 0) ? '+' : '-';

    // Use Ternary Operator to adjust the sign of the imaginary number
    complexSum.imag = (complexSum.imag > 0) ? complexSum.imag : -complexSum.imag;

    std::vector complexVector = {num1, num2, complexSum};

    std::cout << "Looping over using old loop\n";
    for (size_t i = 0; i < complexVector.size(); ++i)
    {
        signOfImag = (complexVector[i].imag > 0) ? '+' : '-';
        std::cout << i << " = " << complexVector[i].real << signOfImag << complexVector[i].imag << "i";
        std::cout << "\n";
    }

    std::cout << "Looping over using new loop\n";
    for (const auto complexNum : complexVector)
    {
        signOfImag = (complexNum.imag > 0) ? '+' : '-';
        std::cout << "  = " << complexNum.real << signOfImag << complexNum.imag << "i";
        std::cout << "\n";
    }

    std::cout << "Sum = " << complexSum.real << signOfComplexSumImag << complexSum.imag << "i";

    return 0;
}

complexNumber addComplexNumbers(complexNumber num1, complexNumber num2)
{
    complexNumber temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return (temp);
}

