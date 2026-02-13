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


TEST_CASE( "No contents inside the string" ) {
    REQUIRE( strcmp_case_insensitive("","f") < 0 );
    REQUIRE( strcmp_case_insensitive("","") == 0 );
    REQUIRE( strcmp_case_insensitive("f","") > 0 );
}

TEST_CASE( "First string is great than second string" ) {
    REQUIRE( strcmp_case_insensitive("cat","example") > 0 );
    REQUIRE( strcmp_case_insensitive("heart","Six") > 0 );
    REQUIRE( strcmp_case_insensitive("fes","fer") == 0 );
}

TEST_CASE( "No characters (non-alphabet)" ) {
    REQUIRE( strcmp_case_insensitive("C2","c2") == 0 );
    REQUIRE( strcmp_case_insensitive("G-1","G-1") == 0 );
    REQUIRE( strcmp_case_insensitive("bird6","bird7") > 0 );
}
