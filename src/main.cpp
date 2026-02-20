#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Krish_choudhary
 * @date 2026-02-20
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */
// TODO 1:
// Define TRIG pin (Use pin 9)
const int TRIG_PIN = 9;

// TODO 2:
// Define ECHO pin (Use pin 10)
const int ECHO_PIN = 10;

// TODO 3:
// Create variable to store duration
long duration = 0;

// TODO 4:
// Create variable to store calculated distance
float distance = 0.0;
