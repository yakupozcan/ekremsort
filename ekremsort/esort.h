// esort.h
#pragma once

#include <vector>     // For std::vector
#include <functional> // For std::function (for visualization callback)
#include <string>     // For std::string

class esort {
public:
    // Callback function type definition for visualization.
    // This function will be called whenever the sorting algorithm changes its state.
    // Parameters: current vector, description of the last operation
    using VisualizationCallback = std::function<void(const std::vector<double>&, const std::string&)>;

    // -----------------------------------------------------------
    // Random Number Generation Method
    // -----------------------------------------------------------
    // Generates a vector of random double values of the specified count.
    // Numbers are generated within the range [minValue, maxValue].
    static std::vector<double> GenerateRandomDoubles(int count, double minValue, double maxValue);

    // -----------------------------------------------------------
    // Sorting Algorithms
    // -----------------------------------------------------------

    // Bubble Sort Algorithm
    // data: Reference to the vector of doubles to be sorted (modified in-place).
    // callback: (Optional) Function to be called for visualization after each significant step.
    static void BubbleSort(std::vector<double>& data, VisualizationCallback callback = nullptr);

    // // Future sorting algorithms can be added here:
    // // static void QuickSort(std::vector<double>& data, VisualizationCallback callback = nullptr);
    // // static void MergeSort(std::vector<double>& data, VisualizationCallback callback = nullptr);

private:
    // Helper (private) functions for algorithms like QuickSort can be placed here.
    // For example:
    // static size_t partition(std::vector<double>& data, size_t low, size_t high, VisualizationCallback callback);
    // static void quickSortRecursive(std::vector<double>& data, size_t low, size_t high, VisualizationCallback callback);
};