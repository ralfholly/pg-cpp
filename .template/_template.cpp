#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstring>
#include <cstdio>
using namespace std;

#include "gmock/gmock.h"
using namespace testing;


namespace testing { 
namespace _template {


TEST(_template, SmokeTest) {
    EXPECT_EQ(3, 1 + 2);
}


TEST(_template, YourTest) {
    cout << "Hello World!" << endl;
}


} // namespace _template
} // namespace testing
