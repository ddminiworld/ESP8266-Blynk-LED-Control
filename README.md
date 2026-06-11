# ESP8266 Built-in LED Control using Blynk IoT

## Overview

This project demonstrates how to control the built-in LED of an ESP8266 Wi-Fi module using the Blynk IoT platform. The LED can be turned ON and OFF remotely through the Blynk mobile application using a virtual button widget.

## Features

* Remote LED control using Blynk Cloud
* Wi-Fi connectivity with ESP8266
* Real-time LED status monitoring through Serial Monitor
* Simple and beginner-friendly implementation
* Uses ESP8266 built-in LED (GPIO2 / D4)

## Hardware Requirements

* ESP8266 NodeMCU or ESP8266 Development Board
* USB Cable
* Wi-Fi Network
* Smartphone with Blynk IoT App installed

## Software Requirements

* Arduino IDE
* ESP8266 Board Package
* Blynk Library for Arduino

## Circuit Diagram

No external LED is required.

| ESP8266 Pin | Function     |
| ----------- | ------------ |
| GPIO2 (D4)  | Built-in LED |

## Blynk Configuration

### Step 1: Create a Template

Create a new template in the Blynk IoT Console and note the following details:

```cpp
#define BLYNK_TEMPLATE_ID "TMPLxxxxxx"
#define BLYNK_TEMPLATE_NAME "ESP8266_LED"
#define BLYNK_AUTH_TOKEN "YourAuthToken"
```

### Step 2: Create a Datastream

* Name: LED Control
* Virtual Pin: V0
* Data Type: Integer
* Minimum Value: 0
* Maximum Value: 1

### Step 3: Add Widget

Add a Button Widget in the Blynk mobile dashboard.

Configure:

* Datastream: V0
* Mode: Switch

## Working Principle

1. ESP8266 connects to the configured Wi-Fi network.
2. Device connects to the Blynk Cloud Server.
3. When the button in the Blynk App is pressed:

   * Value 1 → LED turns ON
   * Value 0 → LED turns OFF
4. LED status is displayed in the Serial Monitor.

## Code Explanation

### LED Pin Definition

```cpp
#define LED_PIN 2
```

GPIO2 controls the built-in LED of the ESP8266.

### Blynk Virtual Pin Handler

```cpp
BLYNK_WRITE(V0)
```

This function executes whenever the value of Virtual Pin V0 changes.

### LED ON

```cpp
digitalWrite(LED_PIN, LOW);
```

The ESP8266 built-in LED is Active LOW.

### LED OFF

```cpp
digitalWrite(LED_PIN, HIGH);
```

Setting the pin HIGH turns the LED OFF.

## Uploading the Code

1. Open Arduino IDE.
2. Install ESP8266 Board Package.
3. Install Blynk Library.
4. Update:

   * Wi-Fi SSID
   * Wi-Fi Password
   * Blynk Template ID
   * Blynk Template Name
   * Blynk Auth Token
5. Select the correct COM Port.
6. Upload the code.

## Serial Monitor Output

```text
Connected to Blynk
LED ON
LED OFF
```

## Applications

* Smart Home Automation
* Remote Device Control
* IoT Learning Projects
* Educational Demonstrations
* ESP8266 and Blynk Experiments

## Author

ddminiworld

## License

This project is open-source and available under the MIT License.
