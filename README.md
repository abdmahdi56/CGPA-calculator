# 🎓 CGPA Calculator (C Language)

A flexible and user-friendly **CGPA (Cumulative Grade Point Average) calculator** built in C. This tool allows students to calculate their CGPA by entering the number of subjects, marks, and corresponding credit hours. The application follows a standard university grading system.

---

## 📌 Features

- ✅ Dynamic subject input — supports any number of subjects  
- 🎯 Accurate grade point mapping based on university standards  
- 🤝 Clean, human-readable interaction design  
- 📊 Displays final CGPA with two decimal precision  
- 💡 Written in pure C, with no external libraries  

---

## 🧮 Grading Policy

| Marks Range | Grade Point |
|-------------|-------------|
| 80 – 100    | 4.00        |
| 75 – 79     | 3.75        |
| 70 – 74     | 3.50        |
| 65 – 69     | 3.25        |
| 60 – 64     | 3.00        |
| 55 – 59     | 2.75        |
| 50 – 54     | 2.50        |
| 45 – 49     | 2.25        |
| 40 – 44     | 2.00        |
| Below 40    | 0.00 (Fail) |

---

## 🛠️ How to Use

### Requirements
- A C compiler (e.g., GCC)

### Steps to Run

```bash
gcc cgpa_calculator.c -o cgpa
./cgpa
🎓 Welcome to the CGPA Calculator!
📚 How many subjects do you want to calculate CGPA for? 3

➡️ Subject 1:
   Enter mark (out of 100): 85
   Enter credit (e.g., 3 or 1.5): 3

➡️ Subject 2:
   Enter mark (out of 100): 70
   Enter credit (e.g., 3 or 1.5): 3

➡️ Subject 3:
   Enter mark (out of 100): 58
   Enter credit (e.g., 3 or 1.5): 3

📊 Calculating your CGPA...
🎉 Your CGPA is: 3.42

cgpa_calculator.c   // Main source code
README.md           // Project description and usage

🚀 Future Improvements
Add letter grade display

Save results to a file

Web or GUI version (C++/Python/JavaScript)

Validation for input ranges
```

##👨‍💼 Author
Abdullah Al Mahdi
Student, BSc in Computer Science & Engineering
Leading University
---

📃 License
This project is open-source and free to use under the MIT License.
---
