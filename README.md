![pipeline](https://github.com/TheRealPad/creditCardValidator/actions/workflows/pipeline.yml/badge.svg)

![text](https://img.shields.io/badge/Docker-2CA5E0?style=for-the-badge&logo=docker&logoColor=white)
![text](https://img.shields.io/badge/CMake-064F8C?style=for-the-badge&logo=cmake&logoColor=white)

# CreditCardValidator

C++ library to validate a given credit card number

## How to use

1. Create a directory ```build```
```bash
mkdir build
```

2. Inside ```build```, build the cmake
```bash
 cd build/ && cmake ..
```

3. Build the shared library
```bash
make # the binary will be libcreditCardValidator.1.0.0.dylib
```

4. (Optionnal) run the unit test
```bash
./test_creditCardValidator
```

## How to use in another project

If you want to see how to use it, go to [example](example/)
