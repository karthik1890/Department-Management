Project Department management

Abstract

The Department Management System is a simple, terminal-based C application designed to manage university department records efficiently. It supports basic functionalities such as adding new department details, displaying all departments, searching for a department by ID, updating existing department information, and deleting records. All department data is stored in memory during program execution using arrays and structures. The program uses a beginner-friendly, menu-driven interface, making it suitable for students learning C programming concepts. This project demonstrates key fundamentals such as structures, arrays, loops, conditional statements, and menu-based program flow in C.

FEATURES OF THE PROGRAM

Add new department records with:

Department ID

Department Name

Head of Department (HOD)

Display all stored department records

Search for departments by ID

Update department name and HOD

Delete department by shifting array elements

Fully terminal-based (CLI) interface

Easy-to-understand and beginner-friendly C program

Simple in-memory data storage using arrays

Basic error handling for invalid options

TECHNICAL REQUIREMENTS
System Requirements

Operating System: Windows / Linux / macOS

Terminal or command-line environment

Minimum RAM: 2–4 MB (very lightweight program)

Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

Any text editor or IDE (VS Code, Code::Blocks, Dev-C++, Vim, etc.)

Programming Requirements

Language: C

Supported Standards: C89 / C99 / C11

Libraries Used:

<stdio.h>

<string.h>

File Handling

(Not used in this version – data stored in memory only)

No external data file created

All data resets when program exits

Compilation Requirements

Code compiles without errors

Recommended flag:

-Wall

FUNCTIONAL REQUIREMENTS
User Interface

Fully command-line interface

Displays clear and structured menu

Accepts and validates input choices

Department Record Operations
Add Department

Allows entering:

Department ID

Department Name

HOD Name

Stores them in the array.

Display All Departments

Shows all saved department records in the format:

ID | Name | HOD

Search Department by ID

User enters Department ID → Program scans the array → Displays matching record.

Update Department

Modify:

Department Name

HOD Name

Uses Department ID to identify record.

Delete Department

Deletes a department by:

Searching ID

Shifting subsequent records left

Decreasing count

Data Management

Uses in-memory storage (array of structures)

Supports up to 100 departments

Data is lost once program exits

Program Flow

Runs in a loop until the user selects Exit

Menu-driven interaction

Shows confirmation messages after each action

Handles invalid choices gracefully

HOW TO RUN THE PROGRAM
Compile the Program

Open the terminal inside the folder and run:

gcc department_management.c -o department_management

Run the Program
Linux/macOS:
./department_management

Windows:
department_management.exe

SCREENSHOTS (Expected Outputs)

Main Menu
<img width="665" height="286" alt="Screenshot 2025-11-20 212729" src="https://github.com/user-attachments/assets/9f6ccca0-831e-4528-bec2-2ed52e9a4004" />


Add Department

<img width="616" height="483" alt="Screenshot 2025-11-20 213010" src="https://github.com/user-attachments/assets/45416a50-336e-4ad2-9f81-b796ac909005" />


Display All Departments
<img width="617" height="535" alt="Screenshot 2025-11-20 213046" src="https://github.com/user-attachments/assets/da7f93a6-8c17-4328-9bc0-3d818c3b598d" />


Search Department
<img width="602" height="557" alt="Screenshot 2025-11-20 213148" src="https://github.com/user-attachments/assets/7608788c-9096-4f4e-9d10-9295a559ae7b" />


Update Department
<img width="625" height="472" alt="Screenshot 2025-11-20 213340" src="https://github.com/user-attachments/assets/ed9e176b-61db-4a4c-8d8e-80b110068daf" />


Delete Department
<img width="623" height="341" alt="Screenshot 2025-11-20 213417" src="https://github.com/user-attachments/assets/66d9f712-26d1-449d-a347-ef71bccdfd29" />


Exit Screen
<img width="605" height="309" alt="Screenshot 2025-11-20 213519" src="https://github.com/user-attachments/assets/c2c9bad9-6076-4773-b8e6-e00246e257a7" />

