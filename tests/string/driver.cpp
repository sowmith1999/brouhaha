#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(string_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/string/answer");
    std::string desugar_res = readFileToString("../../../tests/string/output/string_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(string_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/string/answer");
    std::string alphatize_res = readFileToString("../../../tests/string/output/string_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(string_Test, anf)
{
    std::string answer = readFileToString("../../../tests/string/answer");
    std::string anf_res = readFileToString("../../../tests/string/output/string_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(string_Test, closure)
{
    std::string answer = readFileToString("../../../tests/string/answer");
    std::string closure_res = readFileToString("../../../tests/string/output/string_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(string_Test, cps)
{
    std::string answer = readFileToString("../../../tests/string/answer");
    std::string cps_res = readFileToString("../../../tests/string/output/string_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(string_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/string/answer");
    std::string output = executeAndGetOutput("./string_exec");
    writeStringToFile("../../../tests/string/output/string_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}