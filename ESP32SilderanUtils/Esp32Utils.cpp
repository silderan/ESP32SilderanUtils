#include "Esp32Utils.h"

namespace Esp32Utils
{
  void setupSerial()
  {
    Serial.begin(115200);
    // This wait is needded by serial monitor in host OS (windows, linux, ...) or you'll loose first messages.
    // This only happens after firmware install because while installing it disconnects serial and reconnects
    // when it's installed, but OS don't reconnect to USB/Serial after a while.
    // If you reset ESP32 board, as that procedure didn't discconect USB/Serial, it's not needed.
    delay(1000);
    Serial.println("Serial initialized");
  }

  std::vector<String> splitString(const String &s, char token)
  {
      std::vector<String> rtn;
      int pos = 0;
      int newPos = 0;
      while( (newPos = s.indexOf(token, pos)) >= 0 )
      {
          rtn.push_back( s.substring(pos, newPos) );
          pos = newPos+1;
      }
      rtn.push_back( s.substring(pos) );
      return rtn;
  }
}
