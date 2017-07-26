ifneq ("$(MAKECMDGOALS)", "clean")
ifeq ("$(GOOGLE_TEST_HOME)", "")
$(error "Please define GOOGLE_TEST_HOME, ie. `make GOOGLE_TEST_HOME=~/googletest-release-1.8.0'")
endif
endif

GMOCK_PATH = $(GOOGLE_TEST_HOME)/googlemock
GTEST_PATH = $(GOOGLE_TEST_HOME)/googletest

# 'override' allows you to pass in extra flags when invoking `make', ie.
# make CPPFLAGS=-std=c++14
override CPPFLAGS += -g -pthread -I $(GTEST_PATH)/include -I $(GMOCK_PATH)/include
override LDFLAGS += -L $(GMOCK_PATH)
override LDLIBS += -l gmock_main

.PHONY : all clean

all: test

_template: _template.cpp $(wildcard *.h)

test: _template
	./$<

clean:
	rm -rf *.o _template
