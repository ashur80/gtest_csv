// gtest_csv.cpp: Definiert den Einstiegspunkt für die Anwendung.
//

#include "gtest_csv.h"

using namespace std;

#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
	// Expect two strings not to be equal.
	EXPECT_STRNE("hello", "world");
	// Expect equality.
	EXPECT_EQ(7 * 6, 42);
}

