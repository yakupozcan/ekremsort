// esort.cpp
#include "esort.h" // Include our own header file
#include <random>    // For random number generation
#include <chrono>    // For time-based seeding
#include <algorithm> // For std::swap (used in Bubble Sort)
#include <string>    // For std::to_string and std::string
#include <iostream>  // For potential debug output

// -----------------------------------------------------------
// Implementation of Random Number Generation Method
// -----------------------------------------------------------
std::vector<double> esort::GenerateRandomDoubles(int count, double minValue, double maxValue) {
    std::vector<double> data;
    data.reserve(count); // Reserve memory to improve performance

    // Random number generator setup
    // std::mt19937_64: Mersenne Twister engine, produces high-quality random numbers.
    // std::chrono::high_resolution_clock::now().time_since_epoch().count(): Time-based seed.
    std::mt19937_64 rng(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    // std::uniform_real_distribution: Produces double numbers within the specified range.
    std::uniform_real_distribution<double> dist(minValue, maxValue);

    for (int i = 0; i < count; ++i) {
        data.push_back(dist(rng)); // Add generated number to the vector
    }
    return data;
}

// -----------------------------------------------------------
// Implementation of Bubble Sort Algorithm
// -----------------------------------------------------------
void esort::BubbleSort(std::vector<double>& data, VisualizationCallback callback) {
    size_t n = data.size();
    bool swapped; // Flag to check if any swap occurred

    for (size_t i = 0; i < n - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < n - i - 1; ++j) {
            // If the current element is greater than the next, swap them
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]); // Swap elements
                swapped = true;

                // Call the visualization callback after each swap
                if (callback) {
                    // Convert doubles to string using std::to_string (C++11)
                    callback(data, "Swap: " + std::to_string(static_cast<long long>(data[j + 1])) + " and " + std::to_string(static_cast<long long>(data[j])));
                    // Note: static_cast<long long> is used here for simpler visualization output.
                    // For precise double values, just use std::to_string(data[j+1]).
                }
            }
        }
        // If no two elements were swapped by inner loop, then array is sorted
        if (!swapped) {
            break;
        }
    }
    // Notify completion after sorting is done
    if (callback) {
        callback(data, "Sorting complete.");
    }
}