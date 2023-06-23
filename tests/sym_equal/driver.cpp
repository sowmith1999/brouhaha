#include <prelude.hpp>
#include <testing.hpp>
#include <filesystem>
#include <gtest/gtest.h>
#include <iostream>

TEST(sym_equal_Test, desugar)
{
    std::string answer = readFileToString("../../../tests/sym_equal/answer");
    std::string desugar_res = readFileToString("../../../tests/sym_equal/output/sym_equal_alphatize_res.out");
    ASSERT_EQ(answer, desugar_res);
}

TEST(sym_equal_Test, alphatize)
{
    std::string answer = readFileToString("../../../tests/sym_equal/answer");
    std::string alphatize_res = readFileToString("../../../tests/sym_equal/output/sym_equal_alphatize_res.out");
    ASSERT_EQ(answer, alphatize_res);
}

TEST(sym_equal_Test, anf)
{
    std::string answer = readFileToString("../../../tests/sym_equal/answer");
    std::string anf_res = readFileToString("../../../tests/sym_equal/output/sym_equal_anf_res.out");
    ASSERT_EQ(answer, anf_res);
}

TEST(sym_equal_Test, closure)
{
    std::string answer = readFileToString("../../../tests/sym_equal/answer");
    std::string closure_res = readFileToString("../../../tests/sym_equal/output/sym_equal_closure_res.out");
    ASSERT_EQ(answer, closure_res);
}

TEST(sym_equal_Test, cps)
{
    std::string answer = readFileToString("../../../tests/sym_equal/answer");
    std::string cps_res = readFileToString("../../../tests/sym_equal/output/sym_equal_cps_res.out");
    ASSERT_EQ(answer, cps_res);
}

TEST(sym_equal_Test, CPP_test)
{
    std::string answer = readFileToString("../../../tests/sym_equal/answer");
    std::string output = executeAndGetOutput("./sym_equal_exec");
    writeStringToFile("../../../tests/sym_equal/output/sym_equal_cpp_res.out",output);
    ASSERT_EQ(answer, output);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}