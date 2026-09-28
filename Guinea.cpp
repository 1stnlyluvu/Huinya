#include "pch.h"
#include <gtest/gtest.h>

// Integer9
// Дано трехзначное число.
// Найти первую цифру числа (сотни).
int Integer9(int n) {
    return n / 100;
}


// Integer19
// С начала суток прошло N секунд.
// Найти количество полных минут.
int Integer19(int n) {
    return n / 60;
}


// Integer21
// С начала суток прошло N секунд.
// Найти количество секунд,
// прошедших с начала последней минуты.
int Integer21(int n) {
    return n % 60;
}


// ==================================================
// Integer9
// ==================================================

TEST(Integer9Test, Number123) {

    // Arrange
    int n = 123;

    // Act
    int result = Integer9(n);

    // Assert
    EXPECT_EQ(result, 1);
}


TEST(Integer9Test, Number507) {

    // Arrange
    int n = 507;

    // Act
    int result = Integer9(n);

    // Assert
    EXPECT_EQ(result, 5);
}


TEST(Integer9Test, Number999) {

    // Arrange
    int n = 999;

    // Act
    int result = Integer9(n);

    // Assert
    EXPECT_EQ(result, 9);
}


// ==================================================
// Integer19
// ==================================================

TEST(Integer19Test, LessThanOneMinute) {

    // Arrange
    int n = 59;

    // Act
    int result = Integer19(n);

    // Assert
    EXPECT_EQ(result, 0);
}


TEST(Integer19Test, TwoMinutesAndFiveSeconds) {

    // Arrange
    int n = 125;

    // Act
    int result = Integer19(n);

    // Assert
    EXPECT_EQ(result, 2);
}


TEST(Integer19Test, EndOfDay) {

    // Arrange
    int n = 86399;

    // Act
    int result = Integer19(n);

    // Assert
    EXPECT_EQ(result, 1439);
}


// ==================================================
// Integer21
// ==================================================

TEST(Integer21Test, ExactMinute) {

    // Arrange
    int n = 120;

    // Act
    int result = Integer21(n);

    // Assert
    EXPECT_EQ(result, 0);
}


TEST(Integer21Test, TwoMinutesAndFiveSeconds) {

    // Arrange
    int n = 125;

    // Act
    int result = Integer21(n);

    // Assert
    EXPECT_EQ(result, 5);
}


TEST(Integer21Test, LastSecondOfDay) {

    // Arrange
    int n = 86399;

    // Act
    int result = Integer21(n);

    // Assert
    EXPECT_EQ(result, 59);
}
