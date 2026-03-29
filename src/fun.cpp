// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int count = 0;
    bool inWord = false;
    bool hasDigit = false;

    while (*str) {
        if (*str != ' ') {
            if (!inWord) {
                inWord = true;
                hasDigit = false;
            }
            if (*str >= '0' && *str <= '9') {
                hasDigit = true;
            }
        }
        else {
            if (inWord && !hasDigit) {
                count++;
            }
            inWord = false;
        }
        str++;
    }

    if (inWord && !hasDigit) {
        count++;
    }

    return count;
}

unsigned int faStr2(const char *str) {
    int count = 0;
    bool inWord = false;
    bool goodWord = false;

    while (*str) {
        if (*str != ' ') {
            if (inWord == false) {
                inWord = true;
                if (*str >= 'A' && *str <= 'Z')
                    goodWord = true;
                else
                    goodWord = false;
            }
            else {
                if (!(*str >= 'a' && *str <= 'z'))
                    goodWord = false;
            }
        }
        else {
            if (inWord == true && goodWord == true)
                count++;
            inWord = false;
        }
        str++;
    }

    if (inWord == true && goodWord == true)
        count++;

    return count;
}

unsigned int faStr3(const char *str) {
    int wordsCount = 0;
    int totalLength = 0;
    int currentLength = 0;
    bool inWord = false;

    while (*str) {
        if (*str != ' ') {
            if (inWord == false) {
                inWord = true;
                currentLength = 1;
            }
            else {
                currentLength++;
            }
        }
        else {
            if (inWord == true) {
                wordsCount++;
                totalLength += currentLength;
            }
            inWord = false;
        }
        str++;
    }

    if (inWord == true) {
        wordsCount++;
        totalLength += currentLength;
    }

    if (wordsCount == 0)
        return 0;

    return (totalLength + wordsCount / 2) / wordsCount;
}
