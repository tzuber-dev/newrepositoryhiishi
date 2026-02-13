#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "First string is equal to second string" ) {
    REQUIRE( strcmp_case_insensitive("raCIng","raCIng") == 0 );
    REQUIRE( strcmp_case_insensitive("Wordle","Wordle") == 0 );
    REQUIRE( strcmp_case_insensitive("number","number") == 0 );
}


TEST_CASE( "First string is equal to second string" ) {
    REQUIRE( strcmp_case_insensitive("raCIng","raCIng") == 0 );
    REQUIRE( strcmp_case_insensitive("Wordle","Wordle") == 0 );
    REQUIRE( strcmp_case_insensitive("number","number") == 0 );
}

TEST_CASE( "First string is equal to second string" ) {
    REQUIRE( strcmp_case_insensitive("raCIng","raCIng") == 0 );
    REQUIRE( strcmp_case_insensitive("Wordle","Wordle") == 0 );
    REQUIRE( strcmp_case_insensitive("number","number") == 0 );
}