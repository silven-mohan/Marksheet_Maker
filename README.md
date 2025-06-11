# Marsheet_Maker
This is a simple terminal-based C program designed to generate an intermediate (Class 11–12) marksheet for students based on their stream. It only uses basic C constructs (`printf`, `scanf`, `if-else`, and `strcmp`) and demonstrates how conditional logic can handle multiple user scenarios cleanly.

---

## 🚀 Features

- Accepts input for:
  - Student’s full name, hall ticket number, parent names.
  - Stream of study: `MPC`, `BiPC`, `CEC`, `HEC`, or other.
  - Subject-wise marks for both First Year and Second Year.
  - Practical marks (if applicable).
- Calculates:
  - Year-wise total marks.
  - Practical total (if applicable).
  - Overall percentage.
  - Grade (A/B/C/D based on percentage).
- Outputs a formatted mark sheet with aligned subject scores.

---

## 🎓 Supported Streams

- **MPC**: Math, Physics, Chemistry
- **BiPC**: Botany, Zoology, Physics, Chemistry
- **CEC**: Civics, Economics, Commerce
- **HEC**: History, Economics, Commerce
- **MEC**: Math, Economics, Commerce

---

## 🛠 Technologies Used

- Language: **C**
- Compiler: Works with any standard C compiler (tested on GCC, Dev-C++, Turbo C++)
- Platform: Designed for Windows (uses `system("cls")` to clear the screen)

---

## ⚠️ Limitations

- No input validation for mark ranges.
- Not portable to Linux/macOS due to `system("cls")`.
- Code repetition due to restricted use of advanced features.
- No support for multiple student entries or file storage.

---

## ✍️ Author

**Silven Mohan**  

---

## 💬 Run Instructions

1. Compile the code:
   ```bash
   gcc Marksheet_Maker.c -o Marksheet_Maker.exe
   ```
2. Run the program:
   ```bash
   ./marksheet.exe
   ```  
