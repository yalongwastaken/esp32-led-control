# ESP32 LED Control

A collection of ESP32 LED control implementations demonstrating various programming approaches, from basic blocking code to advanced RTOS multi-tasking with UART communication. Additionally, logging functionality is implemented in separate functions for potential modularity and reuse in subsequent ESP32 development.

## Project Structure

### Arduino Framework (`arduino/`)
- **`blinking_led_1/`** - Simple blocking LED toggle implementation
- **`blinking_led_2/`** - Non-blocking LED toggle using timer-based approach  
- **`blinking_led_3/`** - Non-blocking LED control with serial communication for speed adjustment
- **`logging/`** - Logging functionality for modularity and reuse in future Arduino-based ESP32 projects

### ESP-IDF Framework (`esp-idf/`)
- **`blinking_led_1/`** - Simple non-blocking LED implementation
- **`blinking_led_2/`** - Advanced RTOS multi-tasking implementation with UART communication and multiple LED states/rates
- **`logging/`** - Logging functionality for modularity and reuse in future ESP-IDF-based ESP32 projects

## Development Environment

**Primary Development:** PlatformIO IDE

**Compatibility:**
- **Arduino projects:** Compatible with Arduino IDE
- **ESP-IDF projects:** Compatible with native `idf.py` toolchain

**Hardware Tested:** ESP32-WROOM-32E module

## Potential Improvements & Add-ons

- Multiple LED control (RGB LEDs, LED strips)
- WiFi web interface for remote control
- Custom LED patterns (SOS, rainbow, chase effects)
- Push button controls and external sensors
- Configuration persistence using NVS storage
- Over-the-air (OTA) firmware updates
- Power management and deep sleep modes

## Author

Anthony Yalong