# ESP32SilderanUtils
Handly functions for ESP32 in Arduino IDE programing

This are just functions. So, to not populate and collision with other possible functions, are contained within Esp32Utils namespace.

So, use
```cpp
using namespace Esp32Utils;
void setup() {
  setupSerial();
  for( String s : splitString("Spliting string with their black spaces." ) )
    Serial.println(s);
}
```
or
```cpp
namespace Esp32Utils
{
void setup() {
  setupSerial();
  for( String s : splitString("Spliting string with their black spaces." ) )
    Serial.println(s);
}
}
```
or
```cpp
void setup() {
  Esp32Utils::setupSerial();
  for( String s : Esp32Utils::splitString("Spliting string with their black spaces." ) )
    Serial.println(s);
}
```
