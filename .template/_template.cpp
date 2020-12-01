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


TEST(_template, YourTest) {
    EXPECT_EQ(3, 1 + 2);
    cout << "Hello World!" << endl;
    // Your code here...
}


} // namespace _template
} // namespace testing
