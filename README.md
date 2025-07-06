# FILE_MANAGEMENT_TOOL
COMPANY NAME - CODTECH IT SOLUTIONS

NAME - Manthan Gupta

INTERN ID - CT06DN1592

DOMAIN NAME - C++ Programming 

DURATION - 6 WEEKS(May 21st to July 6th 2025)

MENTOR - NEELA SANTHOSH KUMAR

Description:

🔍 Overview
This C++ program demonstrates fundamental file operations: writing, appending, and reading using fstream. It interacts with the user via the command line, prompting them for inputs and displaying the file contents.

✅ Key Features of the Program
Write new content to a file (overwriting existing content).
Append new content to the end of an existing file.
Read and display content from a file.
Menu-driven user interface in the terminal.
Simple control structure using do-while and switch-case.

🔁 Function Descriptions
1. void writeToFile(const string& filename)
Opens a file using ofstream in default (write) mode, which overwrites the file.
Prompts the user to enter text and ends input when the # character is entered.
Uses getline(cin >> ws, data, '#'):
cin >> ws: Skips leading whitespace.
getline(..., '#'): Reads until #.
Writes the captured input to the file using file << data.
Closes the file and informs the user.

2. void appendToFile(const string& filename)
Opens the file in append mode using ofstream(filename, ios::app).
Similar to writeToFile, reads input until # and appends it at the end of the file.
Closes the file after writing and confirms to the user.

3. void readFromFile(const string& filename)
Opens the file using ifstream in read mode.
Checks if the file opened successfully.
Reads the file line-by-line using getline(file, line) and prints each line.
Displays the full content of the file in the console.

🧠 Main Function Logic
1. User Inputs File Name
The program first prompts the user to enter a filename (e.g., notes.txt).

2. Menu Display and User Interaction
A do-while loop keeps showing the menu until the user chooses to exit.

Menu Options:
Write to file (overwrites existing contents).
Append to file (preserves existing contents).
Read from file (displays the entire content).
Exit.

3. Switch-Case Structure
Based on the user's choice, it calls the appropriate function:
Case 1: Calls writeToFile(filename)
Case 2: Calls appendToFile(filename)
Case 3: Calls readFromFile(filename)
Case 4: Displays exit message.
Default: Handles invalid input by showing an error.

🛠️ Technical Details
cin.ignore() after reading choice ensures newline characters don’t interfere with getline().
The sentinel character # is used to denote the end of user input for writing/appending.
getline(cin >> ws, data, '#') is a clever use to avoid skipping input after a menu prompt.

📦 Use Cases
Ideal for beginners learning file I/O in C++.
Demonstrates reading/writing text files interactively.
Useful for creating text logs, notes, or basic data persistence in console apps.

✅ Conclusion
This C++ program is a compact and interactive tool that showcases basic file operations through a user-friendly menu. It’s great for educational purposes, illustrating how to open files in different modes, how to handle input with getline, and how to maintain a clean control flow using loops and conditionals.

Output:
<img width="1129" height="768" alt="Image" src="https://github.com/user-attachments/assets/297ad9a6-c7cf-480c-84cd-8b89401c883d" />
