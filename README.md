# Task_2_Code_Alpha
Login & Registration System (C++)

Description:
This is a simple console-based Login and Registration System written in C++. 
It allows users to create an account and log in using saved credentials.

Features:
- User registration (username & password)
- Duplicate username checking
- Login authentication
- Data stored in a text file (users.txt)
- Simple menu-driven program

Technologies Used:
- C++
- File Handling (fstream)

How It Works:
- New users register and their data is saved in users.txt
- Existing users log in using their credentials
- The program checks the file to verify login details

How to Run:
1. Compile the code:
   g++ Task 2.cpp -o program

2. Run the program:
   ./program

Note:
- Make sure users.txt file is in the same folder
- Passwords are stored in plain text (no encryption)

Purpose:
This project is for learning:
- File handling in C++
- Functions and conditions
- Basic login system logic
