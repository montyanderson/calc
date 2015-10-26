# Square root of 2

Calculating the square root of 2 to 18 decimal places, using the [Decimal for C++ library](https://github.com/vpiotr/decimal_for_cpp), and the [Babylonian method](https://en.wikipedia.org/wiki/Square_root_of_2#Computation_algorithms).

![Maths notation for Babylonian method](https://upload.wikimedia.org/math/4/6/4/464b434e09739f052d56f44ee3e50a2c.png)

The function uses a self-iteration function, with the assumption that a<sub>0</sub> = 1.

## Running

* Install the [Decimal for C++ library](https://github.com/vpiotr/decimal_for_cpp).

```
wget https://raw.githubusercontent.com/vpiotr/decimal_for_cpp/master/include/decimal.h
```

* Compile and run!

```
$ g++ sqrt-two.cpp -std=c++11 && ./a.out
1.500000000000000000
1.416666666666666667
1.414215686274509804
1.414213562374689911
1.414213562373095049
1.414213562373095049
1.414213562373095049
1.414213562373095049
1.414213562373095049
```
