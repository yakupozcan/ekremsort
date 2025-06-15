# ekremsort - C++ Sorting Algorithm Explorer

## Project Overview

`ekremsort` is a C++ project dedicated to exploring and developing various sorting algorithms. This repository serves as a sandbox for implementing, testing, and visualizing different sorting techniques, with a focus on console-based, step-by-step graphical representation. The primary goal is to provide a clear and interactive way to understand how sorting algorithms function, while also serving as a foundation for future performance optimization and research into novel sorting approaches.

## Features

* **Console-Based Visualization:** Witness the sorting process in real-time with a dynamic console visualization that displays changes at each significant step. This helps in understanding the mechanics of algorithms like swaps and comparisons.
* **Modular Design:** Sorting algorithms are encapsulated within a dedicated `esort` class, promoting clean code and easy integration of new algorithms.
* **Random Data Generation:** Includes a utility to generate random `double` arrays for testing, allowing for diverse input scenarios.
* **Double Type Support:** Initially designed to sort `double` precision floating-point numbers, providing a basis for generalizing to other data types using C++ templates.
* **Bubble Sort Implementation:** The current version features a basic implementation of the Bubble Sort algorithm, serving as a starting point for further algorithm additions.

## Getting Started

To get this project up and running on your local machine, follow these steps:

### Prerequisites

* **C++ Compiler:** A C++11 (or newer) compatible compiler (e.g., GCC, Clang, MSVC).
* **Visual Studio (Recommended for Windows):** The project is structured to work seamlessly with Visual Studio.

### Building and Running

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/yakupozcan/ekremsort.git](https://github.com/yakupozcan/ekremsort.git)
    ```
    (Replace `YourUsername` with your actual GitHub username.)
2.  **Open in Visual Studio:**
    * Navigate to the cloned directory.
    * Open the `.sln` (solution) file with Visual Studio.
3.  **Build the Project:**
    * From the Visual Studio menu, go to `Build` > `Build Solution` (or press `Ctrl+Shift+B`).
4.  **Run the Executable:**
    * Go to `Debug` > `Start Without Debugging` (or press `Ctrl+F5`) to run the console application.

The console will display the initial unsorted array, then proceed to visualize the Bubble Sort process step-by-step, clearing the screen for each update. Finally, it will display the fully sorted array.

## Code Structure

* `ekremsort.cpp`: Contains the `main` function, handles data generation, calls the sorting algorithm, and sets up the visualization callback.
* `esort.h`: Declares the `esort` class, including static methods for data generation, sorting algorithms, and the `VisualizationCallback` type.
* `esort.cpp`: Provides the implementation details for the methods declared in `esort.h`, including the core Bubble Sort logic.

## Contributing

Your contributions are welcome! If you would like to contribute to this project, please:
1.  Fork the repository.
2.  Create your feature branch (`git checkout -b feature/AmazingFeature`).
3.  Commit your changes (`git commit -m 'Add some AmazingFeature'`).
4.  Push to the branch (`git push origin feature/AmazingFeature`).
5.  Open a Pull Request.

**Please note:** All submitted code and contributions will fall under the existing project's terms, with all rights and ownership remaining with the original author.

## License

All rights reserved. This project is not licensed for unauthorized use, distribution, or sale without explicit permission from the author.

## Contact

Ekrem ([My Github](https://github.com/yakupozcan)) - (You can add your email or LinkedIn if you wish)

Project Link: [https://github.com/yakupozcan/ekremsort](https://github.com/yakupozcan/ekremsort)
