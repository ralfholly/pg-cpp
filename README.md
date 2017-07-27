# PG CPP
A Playground for C++ Projects.

## Description
This playground for C++ projects lets you try out C++ features and programming ideas by setting up a safe try-out area super-fast. It is based on the idea described in [this blog post](https://www.approxion.com/?p=97).

## Dependencies
You need to have [Google Test/Google Mock](https://github.com/google/googletest) installed. An easy way to obtain it is through [get-me-gtest](https://github.com/ralfholly/get-me-gtest). Make sure that you define an evironment variable called `GOOGLE_TEST_HOME` that points to the directory containing the version of Google Test you have installed, eg:
```
echo "export GOOGLE_TEST_HOME=~/get-me-gtest/googletest-release-1.8.0" >> .bashrc
```

## Usage
Enter the directory of the cloned repository and start a new topic:
```
cd ~/pg-cpp
. pg-setup default_construction_of_members
```
This will create a directory named `default_construction_of_members` that is equipped with a Makefile and a C++ source code file named `default_construction_of_members.cpp`. If you have defined the `EDITOR` environment variable, `default_construction_of_members.cpp` will be opened in your favorite editor. Make your experiments and execute `make` to build and test them.

