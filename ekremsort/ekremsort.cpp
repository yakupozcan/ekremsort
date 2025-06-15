// ekremsort.cpp
#include <iostream>   // For console output
#include <vector>     // For std::vector
#include <string>     // For string manipulations
#include <thread>     // For std::this_thread::sleep_for
#include <chrono>     // For std::chrono::milliseconds
#include <cstdlib>    // For system("cls") function (Windows-specific)

#include "esort.h"    // To use our esort class

// -----------------------------------------------------------
// Visualization Callback Function Implementation
// -----------------------------------------------------------
// This function will be called by the sorting algorithm at each significant step.
void VisualizeSortingStep(const std::vector<double>& data, const std::string& description) {
    // Clear the console screen (Windows-specific command)
    system("cls"); // THIS LINE REMAINS HERE TO CLEAR FOR EACH SORTING STEP

    std::cout << "-------------------------------------------\n";
    std::cout << "Operation: " << description << "\n";
    std::cout << "Current State:\n";

    // Simple bar visualization for each double value in the vector
    // Bar length is proportional to the value.
    // Assuming values are between 1.0 and 100.0 as per GenerateRandomDoubles call.
    for (double val : data) {
        int barLength = static_cast<int>(val); // Cast double to int for bar length

        // Cap bar length to avoid extremely long lines in console
        if (barLength > 100) barLength = 100;

        std::cout << "[";
        for (int i = 0; i < barLength; ++i) {
            std::cout << "#"; // Character for the bar
        }
        std::cout << "] " << val << "\n";
    }
    std::cout << "-------------------------------------------\n\n";

    // Short pause to observe the visualization
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Wait for 50 milliseconds
}

// -----------------------------------------------------------
// Main Program (main function)
// -----------------------------------------------------------
int main() {
    // 1. Generate random numbers
    int dataSize = 20; // A vector with 20 elements
    double minVal = 1.0;
    double maxVal = 100.0; // Max 100 is suitable for bar visualization
    std::vector<double> numbers = esort::GenerateRandomDoubles(dataSize, minVal, maxVal);

    // Initial state visualization
    VisualizeSortingStep(numbers, "Initial State");

    // 2. Call the Bubble Sort algorithm and pass the visualization callback
    esort::BubbleSort(numbers, VisualizeSortingStep);

    // --- NEW LOGIC STARTS HERE ---

    // After sorting is complete, ensure the final bar visualization is shown.
    // The last call from BubbleSort's internal callback will already have cleared the screen
    // and displayed the final sorted bars. We just need to make sure it stays for a bit.
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Wait 1 second to observe the final bars

    // Now, clear the screen ONE LAST TIME before printing the raw numbers
    system("cls");

    // Print the final sorted data as raw numbers
    std::cout << "\nFinal Sorted Data (Raw Numbers):\n";
    for (double val : numbers) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    // --- NEW LOGIC ENDS HERE ---

    // Keep console open until user presses a key (useful for observing final output)
    std::cout << "\nPress Enter to exit...";
    std::cin.ignore(); // Consume any leftover newline characters
    std::cin.get();    // Wait for a character input

    return 0;
}