//#include <BlynkSimpleEsp32.h>  // Include Blynk library for ESP32
//#include <Servo.h>             // Include Servo library

// Replace with your own Blynk Template ID and Auth Token

#define BLYNK_TEMPLATE_ID "TMPL6n-RGOiXi"   // Replace with your template ID
#define BLYNK_TEMPLATE_NAME "Something"  // Replace with your template name
#define BLYNK_AUTH_TOKEN "fqebtyflCuDVnO29HtB26Z1mm-xABW1C"  // Replace with your authentication token

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


// Wi-Fi credentials
const char *ssid = "Redmi 110A";        // Replace with your Wi-Fi SSID
const char *password = "99999999";      // Replace with your Wi-Fi password

// Define virtual pins for the LEDs, button, and servo
#define LED1_PIN V1
#define LED2_PIN V2
#define LED3_PIN V3
#define LED4_PIN V4
#define BUTTON_PIN V5
#define SLIDER_PIN V6

// Define actual hardware pins for LEDs (use any free GPIO pin)
#define LED1_GPIO 4    // D4
#define LED2_GPIO 5    // D5
#define LED3_GPIO 19   // D19
#define LED4_GPIO 22   // D22

//Servo myServo;  // Create a Servo object

void setup() {
  // Start Serial Monitor
  Serial.begin(115200);  // Use 115200 for faster serial communication

  // Connect to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);

  // Set up the LED pins as OUTPUT
  pinMode(LED1_GPIO, OUTPUT);
  pinMode(LED2_GPIO, OUTPUT);
  pinMode(LED3_GPIO, OUTPUT);
  pinMode(LED4_GPIO, OUTPUT);

  // Attach the servo to pin 9 (you can change this to your servo pin)
//  myServo.attach(9);  
}

BLYNK_WRITE(V1) {
  int pinValue = param.asInt();  // Get the switch state (0 or 1)
  digitalWrite(LED1_GPIO, pinValue);  // Control LED1
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();
  digitalWrite(LED2_GPIO, pinValue);  // Control LED2
}

BLYNK_WRITE(V3) {
  int pinValue = param.asInt();
  digitalWrite(LED3_GPIO, pinValue);  // Control LED3
}

BLYNK_WRITE(V4) {
  int pinValue = param.asInt();
  digitalWrite(LED4_GPIO, pinValue);  // Control LED4
}

BLYNK_WRITE(V5) {
  int buttonState = param.asInt();  // Get the button state (0 or 1)
  if (buttonState == 1) {
    Blynk.virtualWrite(V5, "Pressed");  // Indicate button press on the app
  } else {
    Blynk.virtualWrite(V5, "Released");  // Indicate button release
  }
}

BLYNK_WRITE(V6) {
  int sliderValue = param.asInt();  // Get the slider value (-90 to +90)
//  myServo.write(sliderValue + 90);  // Map slider value to servo angle (-90 to +90)
}

void loop() {
  Blynk.run();  // Run Blynk's internal code to maintain communication with the app
}
