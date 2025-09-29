#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( hello() == "Hello World!" );
}

TEST_CASE( "it finds a substring in a string" ) {
    REQUIRE( findString("hello", "lo") == 4 );
    REQUIRE( findString("hello", "he") == 1 );
    REQUIRE( findString("hello", "l") == 3 );
    REQUIRE( findString("hello", "hello") == 1 );
    REQUIRE( findString("hello", "world") == -1 );
    REQUIRE( findString("hello", "") == 1 );
}

TEST_CASE( "it finds a character in a string" ) {
    REQUIRE( findString("hello", 'h') == 1 );
    REQUIRE( findString("hello", 'e') == 2 );
    REQUIRE( findString("hello", 'l') == 3 );
    REQUIRE( findString("hello", 'o') == 5 );
    REQUIRE( findString("hello", 'z') == -1 );
}

TEST_CASE( "it works with single character strings" ) {
    REQUIRE( findString("a", "a") == 1 );
    REQUIRE( findString("a", "b") == -1 );
    REQUIRE( findString("a", 'a') == 1 );
    REQUIRE( findString("a", 'b') == -1 );
}

TEST_CASE( "it works with special characters" ) {
    REQUIRE( findString("!@#$%^&*()", "@#") == 2 );
    REQUIRE( findString("!@#$%^&*()", "a") == -1 );
    REQUIRE( findString("!@#$%^&*()", '@') == 2 );
    REQUIRE( findString("!@#$%^&*()", 'a') == -1 );
}
