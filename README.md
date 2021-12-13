# Arzu

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Development](#development)

## Introduction
Arzu is a C++ library to deal with program options or arguments through CLI
invocation easily. It can be used to get the argument, determine whether the
argument exists or not, and get the index of the argument.

## Features
- Constructor
```cpp
Arzu(const int &argc, char** argv);
```
Construct the library with passing the `main(int argc, char* argv[])` arguments.

- Get the index of the argument
```cpp
int index(const char* argv);
```
It is used to get the index of the argument. Pass the argument key, then the
index of the argument will be returned. If the argument doesn't exist, `-1` will
be returned.

- Determine the existance of the argument
```cpp
bool exists(const char* argv);
```
Pass the argument name to determine whether the argument exists or not.

- Get the value of the argument
```cpp
const char* getValue(const char* key);
```
Get the argument value by passing the key, then the value will be returned (the
next item in argument list). If the argument key doesn't exist, the empty string
will be returned. If the argument key doesn't have a value and it appears in the
end of argument list, the empty string will be returned as well.

## Building
The library can be built using CMake version 3.22.1. You just need to run
theese commands.
```
$ ./configure
$ ./makelib
```
Then, the library (static and shared) would be generated in `lib/` directory.

## Usage
To use this library, you could choose the shared or static version. Make sure to
include the header file (`Arzu.h`) and link the library.
The supported program argument will looks like this,
```
$ myprogram --one aaa --two bbb -t -f --five ccc
```

## Development
In case you want to make change to the library and test it, you could uncomment
one last row in `CMakeLists.txt` and test the library through the `stc/main.cpp`
file. The binary would be generated as `testing/testing`.