// Simple tests
//
// Copyright (c) 2013  Vlad Riscutia
#include "../test.hpp"

// Defines a test group
TEST_GROUP(group1)
{
    // Fixture setup
    TEST_SETUP()
    {
        printf("setup\n");
    }

    // A test
    TEST(foo)
    {
        printf("tests foo!\n");
    }

    // Another test
    TEST(bar)
    {
        printf("tests bar!\n");
    }
}

// Defines another test group
TEST_GROUP(group2)
{
    // A test
    TEST(baz)
    {
        printf("tests baz!\n");
    }

    // A test that throws an arbitrary exception
    TEST(throws)
    {
        throw 1;
    }

    // Fixture teardown
    TEST_TEARDOWN()
    {
        printf("teardown\n");
    }
}