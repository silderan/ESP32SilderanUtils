#ifndef Esp32Utils_h
#define Esp32Utils_h

#include <Arduino.h>
#include <vector>

namespace Esp32Utils
{
    void setupSerial();
    std::vector<String> splitString(const String &s, char token);
}
#endif
