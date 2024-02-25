#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to replace "pi" with "3.14" recursively

void replace_pi(string &ans, int i = 0)
{
    if (i == ans.size())
        return;
    if (ans[i] == 'p' and ans[i + 1] == 'i')
    {
        ans.resize(ans.size() + 2);
        for (int j = ans.size(); j >= i; j--)
        {
            ans[j + 2] = ans[j];
        }

        ans[i] = '3';
        ans[i + 1] = '.';
        ans[i + 2] = '1';
        ans[i + 3] = '4';
    }
    replace_pi(ans, i + 1);
}

// Function to generate test cases
vector<pair<string, string>> generateTestCases() {
    vector<pair<string, string>> testCases;
    
    // Add test cases here
    testCases.push_back({"", ""}); // Empty string
    testCases.push_back({"piabc", "3.14abc"}); // "pi" at the beginning
    testCases.push_back({"abpicd", "ab3.14cd"}); // "pi" in the middle
    testCases.push_back({"abcdpi", "abcd3.14"}); // "pi" at the end
    testCases.push_back({"pipipi", "3.143.143.14"}); // Multiple occurrences of "pi"
    testCases.push_back({"apiepi", "apiepi"}); // "pi" as part of a larger substring
    testCases.push_back({"p i", "p i"}); // "p" and "i" separated
    testCases.push_back({"p1i", "p1i"}); // "p" and "i" separated by other characters
    
    return testCases;
}

int main() {
    // Generate test cases
    vector<pair<string, string>> testCases = generateTestCases();
    
    // Test the function with each test case and print the results
    for (const auto &testCase : testCases) {
        string input = testCase.first;
        string expectedOutput = testCase.second;
        
        // Call the function to modify the input string
        replace_pi(input);
        
        // Print the input string and the modified string
        // cout << "Input: " << testCase.first << ", Expected Output: " << testCase.second << ", Actual Output: " << input << endl;
        if()
    }
    
    return 0;
}
