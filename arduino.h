///////////////////////////////////
////// DO NOT EDIT THIS FILE //////
///////////////////////////////////

//
// Johnny705 robot simulator for TU705 Engineering Computing 2.1
// Written by Ted Burke - last updated 17-Oct-2021
// arduino.h - Header file for simulated Arduino
//

#ifndef ARDUINO_H_INCLUDED
#define ARDUINO_H_INCLUDED

#include <iostream>
#include <ctime>

class Robot
{
public:
    Robot();

    int Ax[8];     // analog input state
    int Dx[13];    // digital i/o pin state
    int Dmode[13]; // pin mode

    double x, y;
    double angle; // radians
    double speedLeft, speedRight, maxSpeed;
    double w, h;

    int baudrate;

    // motor pin connections
    const int LMF = 2;
    const int LMR = 3;
    const int RMF = 4;
    const int RMR = 5;

    // analog sensor pin connections
    const int FLS = 0;
    const int FRS = 1;
    const int BLS = 2;
    const int BRS = 3;

    clock_t startClockTime;
};

extern bool g_running;

extern Robot g_robot;

extern void robot_thread_function();

// Define some constants
// Note: this INPUT definition clashes with the INPUT struct definition in windows.h
#define LOW 0
#define HIGH 1
#define INPUT 0
#define OUTPUT 1

// Analog pins
static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
static const uint8_t A2 = 2;
static const uint8_t A3 = 3;
static const uint8_t A4 = 4;
static const uint8_t A5 = 5;
static const uint8_t A6 = 6;
static const uint8_t A7 = 7;

extern void pinMode(uint8_t pin, uint8_t mode);
extern int digitalRead(uint8_t pin);
extern void digitalWrite(uint8_t pin, uint8_t val);
extern int analogRead(uint8_t pin);
extern void analogWrite(uint8_t pin, int val);
extern void delay(unsigned long ms);
extern unsigned long millis();
extern unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout);
extern long random(long);
extern long random(long, long);
extern void randomSeed(unsigned long);

// Serial object
class SerialClass
{
public:
    static void begin(int b) {g_robot.baudrate = b;}
    static void print(std::string s) {if (g_robot.baudrate > 0) std::cout << s;}
    static void print(int n) {if (g_robot.baudrate > 0) std::cout << n;}
    static void print(double x) {if (g_robot.baudrate > 0) std::cout << x;}
    static void println(std::string s) {if (g_robot.baudrate > 0) std::cout << s << std::endl;}
    static void println(int n) {if (g_robot.baudrate > 0) std::cout << n << std::endl;}
    static void println(double x) {if (g_robot.baudrate > 0) std::cout << x << std::endl;}
};

extern SerialClass Serial;

#endif // ARDUINO_H_INCLUDED
