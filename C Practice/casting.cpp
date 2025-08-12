#include <stdio.h>

int main() {
    // Write your code here
    int smallNumber = 42;
    float mediumNumber = 123.456;
    double largeNumber;

    largeNumber = smallNumber;
    printf("\nSmall to large: %.1f", largeNumber);
    
	largeNumber = mediumNumber;
    printf("\nMedium to large: %.1f", largeNumber);

    
   
    
    return 0;
}

//Declare an int variable named smallNumber with value 42
//Declare a float variable named mediumNumber with value 123.456
//Declare a double variable named largeNumber
//Use implicit casting to convert smallNumber to largeNumber
//Print largeNumber with the message "Small to large: " using printf and 1 decimal place
//Use implicit casting to convert mediumNumber to largeNumber
//Print largeNumber with the message "Medium to large: " using printf and 1 decimal place
