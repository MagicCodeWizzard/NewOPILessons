#include <gtest/gtest.h>

#include "utils.hpp"
#include <vector>
#include <numeric>
#include <algorithm>

TEST(GeneralTests, CheckInvalidValues)
{
    ASSERT_EQ(loadConfiration(""), false);
    ASSERT_FALSE(loadConfiration(""));
}

TEST(GeneralTests, CheckFileDoesntExists)
{
    ASSERT_FALSE(
        loadConfiration("C:\\Users\\Student\\Desktop\\ОПАМ НЕ ТРОГАТЬ")
    );
}

TEST(GeneralTests, CheckFileEmpty)
{
    ASSERT_FALSE(
        loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_empty.txt")
    );
}

TEST(GeneralTests, CheckFileOnlyFirstLine)
{
    ASSERT_FALSE(
        loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_firstLine.txt")
    );
}

TEST(GeneralTests, CheckFileTwoLines)
{
    ASSERT_FALSE(
        loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_secondLine.txt")
    );
}

TEST(GeneralTests, CheckFileFirstInvalidLine)
{
    ASSERT_FALSE(
        loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_firstInvalidLine.txt")
    );
}

TEST(GeneralTests, CheckFileExists)
{
    using namespace testing;

    ASSERT_TRUE(
        loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_ok.txt")
    );
}
