ifneq ("$(MAKECMDGOALS)", "clean")
ifeq ("$(GOOGLE_TEST_HOME)", "")
$(error "Please define GOOGLE_TEST_HOME, ie. `make GOOGLE_TEST_HOME=~/googletest-release-1.12.1'")
endif
endif

GMOCK_INCLUDE_PATH = $(GOOGLE_TEST_HOME)/googlemock
GTEST_INCLUDE_PATH = $(GOOGLE_TEST_HOME)/googletest

GMOCK_LIBRARY_PATHS = -L$(GOOGLE_TEST_HOME)/googlemock
GTEST_LIBRARY_PATHS = -L$(GOOGLE_TEST_HOME)/googlemock/gtest -L$(GOOGLE_TEST_HOME)/lib

# 'override' allows you to pass in extra flags when invoking `make', ie.
# make CPPFLAGS=-std=c++14
override CPPFLAGS += -std=c++17 -W -Wall -g -pthread -I $(GTEST_INCLUDE_PATH)/include -I $(GMOCK_INCLUDE_PATH)/include
override LDFLAGS += $(GTEST_LIBRARY_PATHS) $(GMOCK_LIBRARY_PATHS)
override LDLIBS += -lgtest_main -lgtest -lgmock

.PHONY : all clean

all: test

_template: _template.cpp

test: _template
	./$<

clean:
	rm -rf *.o _template
