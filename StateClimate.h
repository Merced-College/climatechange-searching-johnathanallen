// StateClimate.h
#ifndef STATECLIMATE_H
#define STATECLIMATE_H

#include <iostream>

class StateClimate {
private:
    int fips;
    int year;
    double temp;
    double tempc;

public:
    // Constructor
    StateClimate(int f, int y, double t, double tc);

    // Getters
    int getFips() const;
    int getYear() const;
    double getTemp() const;
    double getTempC() const;

    // Setters
    void StateClimate::setFips(int f) { fips = f; }
    void StateClimate::setYear(int y) { year = y; }
    void StateClimate::setTemp(double t) { temp = t; }
    void StateClimate::setTempC(double tc) { tempc = tc; }

    // Display function
    void StateClimate::display() const {
        std::cout << "FIPS: " << fips << ", Year: " << year
                  << ", Temp (F): " << temp << ", Temp (C): " << tempc << std::endl;
}
