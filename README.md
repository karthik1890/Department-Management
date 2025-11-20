# department management
ABSTRACT
The Department Management System is a simple console-based application developed in the C programming language. The main objective of this project is to manage university departments efficiently by offering essential operations such as adding department details, displaying all departments, and updating the number of faculty members.
This program uses structures and arrays to store important department information such as Department ID, Department Name, Number of Faculty, and Number of Students. It supports up to 10 departments and uses a menu-driven interface for easy user interaction.
This project demonstrates core C programming concepts including structures, arrays, loops, functions, and conditional statements. It is an ideal mini-project for beginners who want practical experience building real-world C applications.

FUNCTIONAL REQUIREMENTS

Add Department
Allows the user to add a new university department.
Input required:


Department ID


Department Name


Number of Faculty


Number of Students


The department is stored in the department array.

Display All Departments
Displays the entire list of departments in the system.
Shows:


Department ID


Department Name


Faculty Count


Student Count



Update Faculty Count
User enters an existing Department ID.
The program searches for the department.
If found:


Prompts user to enter updated faculty count


Updates the value in the record


If not found:


Displays “Department not found.”



Exit Program
Safely terminates the application.

PROJECT FEATURES

Structured Data Storage
Uses
struct department

to store department attributes.

Fixed Department Capacity
Can store up to 10 departments (adjustable by modifying
#define max_length 10
```).

---

### **Menu-Driven Interface**
Easy navigation using numbered options for smooth user interaction.

---

### **Input Validation**
Provides proper messages for:

- Department list full  
- No departments stored  
- Invalid Department ID  

---

### **Modular Programming**
Function-based structure:

- `addDepartment()`  
- `displayDepartments()`  
- `updateFacultyCount()`  

---

# **SCREENSHOTS OF OUTPUT (TEXT SIMULATION)**  
(These simulate typical console output.)

### **screenshot 1:main menu**
<img width="665" height="286" alt="Screenshot 2025-11-20 212729" src="https://github.com/user-attachments/assets/413ca871-52b7-4a85-b80b-23796fe3e533" />


### **Screenshot 2: Add Departement**  


<img width="616" height="483" alt="Screenshot 2025-11-20 213010" src="https://github.com/user-attachments/assets/5f17783f-8370-400b-a5fa-094d6102ccb6" />



### **Screenshot 2:  Display Departement**  

<img width="617" height="535" alt="Screenshot 2025-11-20 213046" src="https://github.com/user-attachments/assets/6d7c4407-6414-4034-9a42-c72ce5c82032" />



### **Screenshot 3:Search Department List**  


<img width="602" height="557" alt="Screenshot 2025-11-20 213148" src="https://github.com/user-attachments/assets/c639e4a7-d59c-467d-bf77-f1508cb8addd" />




### **Screenshot 4: Updating Departement**


<img width="625" height="472" alt="Screenshot 2025-11-20 213340" src="https://github.com/user-attachments/assets/e65516fe-1364-4476-83d3-a350e048e93a" />




### **Screenshot 5:  Delete Department**  


<img width="623" height="341" alt="Screenshot 2025-11-20 213417" src="https://github.com/user-attachments/assets/7980de2b-e9dc-499d-a4e2-d6bcdcf6c2a2" />





### **Screenshot 6: Exit Program**  

<img width="605" height="309" alt="Screenshot 2025-11-20 213519" src="https://github.com/user-attachments/assets/ce853276-ac62-4ccf-9589-b039a4b3f8e6" />





---

