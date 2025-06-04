#include <iostream>
#include <cassert>

#include "utils.hpp"

void testCase_CheckInvalidValues()
{
    assert(false == loadConfiration("") && "Test failed =(!!!");

    std::cout << "Test passed!!!" << std::endl;
}

void testCase_CheckFileDoesntExists()
{
    if (false == loadConfiration("C:\\Users\\Student\\Desktop\\ОПАМ НЕ ТРОГАТЬ")) {
        std::cout << "Test passed!!!" << std::endl;
    } else {
        std::cerr << "Test failed =(!!!" << std::endl;
    }
}

void testCase_CheckFileEmpty()
{
    if (false == loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_empty.txt")) {
        std::cout << "Test passed!!!" << std::endl;
    } else {
        std::cerr << "Test failed =(!!!" << std::endl;
    }
}

void testCase_CheckFileOnlyFirstLine()
{
    if (false == loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_firstLine.txt")) {
        std::cout << "Test passed!!!" << std::endl;
    } else {
        std::cerr << "Test failed =(!!!" << std::endl;
    }
}

void testCase_CheckFileTwoLines()
{
    if (false == loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_secondLine.txt")) {
        std::cout << "Test passed!!!" << std::endl;
    } else {
        std::cerr << "Test failed =(!!!" << std::endl;
    }
}

void testCase_CheckFileFirstInvalidLine()
{
    if (false == loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_firstInvalidLine.txt")) {
        std::cout << "Test passed!!!" << std::endl;
    } else {
        std::cerr << "Test failed =(!!!" << std::endl;
    }
}

void testCase_CheckFileExists()
{
    assert(loadConfiration("C:\\Users\\Student\\OPI\\NewOPILessons\\game\\test\\config_ok.txt"));
    std::cout << "Test passed!!!" << std::endl;
}

int main(int argc, char* argv[])
{
    testCase_CheckInvalidValues();
    testCase_CheckFileDoesntExists();
    testCase_CheckFileEmpty();
    testCase_CheckFileOnlyFirstLine();
    testCase_CheckFileTwoLines();
    testCase_CheckFileFirstInvalidLine();

    testCase_CheckFileExists();

    return 0;
}