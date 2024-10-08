/*  Section 7
    Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements in vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements in vector_2d again using the at() method
    
    Display the elements in vector1 
    
    What did you expect? Did you get what you expected? What do you think happended?
*/
    
#include <iostream>
#include <vector>

int main() {
    std:: vector<int> vector1;
    std:: vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << "Vector 1" << std::endl;
    std::cout << "Element at index 0: " << vector1.at(0) << std::endl;
    std::cout << "Element at index 0: " << vector1.at(1) << std::endl;
    std::cout << "Vector's size is: " << vector1.size() << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << "Vector 2" << std::endl;
    std::cout << "Element at index 0: " << vector2.at(0) << std::endl;
    std::cout << "Element at index 1: " << vector2.at(1) << std::endl;
    std::cout << "Vector's size is: " << vector2.size() << std::endl;

    std::vector<std::vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display the elements of vector_2d
    std::cout << "\nvector_2d:" << std::endl;
    std::cout << "Row 0, Column 0: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Row 0, Column 1: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Row 1, Column 0: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Row 1, Column 1: " << vector_2d.at(1).at(1) << std::endl;

    // Change vector1.at(0) to 1000
    vector1.at(0) = 1000;

    // Display the elements of vector_2d again
    std::cout << "\nvector_2d after modifying vector1:" << std::endl;
    std::cout << "Row 0, Column 0: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Row 0, Column 1: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Row 1, Column 0: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Row 1, Column 1: " << vector_2d.at(1).at(1) << std::endl;

    // Display the elements of vector1 after modification
    std::cout << "\nvector1 after modification:" << std::endl;
    std::cout << "Element at index 0: " << vector1.at(0) << std::endl;
    std::cout << "Element at index 1: " << vector1.at(1) << std::endl;
    float numbers[0];  // Allowed in GCC as a non-standard extension
    std::cout << "Array size: " << sizeof(numbers) << std::endl;  // Output: 0
    return 0;
}

