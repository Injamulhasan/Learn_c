# Learn C Programming

<p align="center">
  <a href="https://www.cprogramming.com/">
  <img src="https://github.com/Injamulhasan/Learn_c/assets/102874510/cdb32857-bdae-421d-84e3-33734f7ac0eb" alt="Bootstrap logo" width="400" height="205">  
  </a>
</p>

Welcome to my C Programming repository! This repository is dedicated to helping you learn and master the fundamentals of C programming.

## Contents

### Brief overview of what C programming is and its importance.

#### Features of C

- C is a procedural programming unlike python which is OOP
- C is a middle level language and it is less abstract than python since we can access memory through pointers, bit manipulation using bitwise operators due to these unique features of C, C became a popular choice for developing both system level applications like kernels, device drivers, operating systems etc.

#### First program

**For Windows**

Open Notepad/Notepad++ or in CMD terminal write

- `mkdir MyCPrograms`
- `cd MyCPrograms`
- `notepad hello.c`
- `notepad hello.c` - This will open the Notepad editor. Write a simple "Hello, World!" program in the file hello.c then Save the file and close Notepad.
- `gcc hello.c -o hello`

**For linux**

In your terminal, write

- `mkdir MyCPrograms`
- `cd MyCPrograms`
- `gedit filename.c`
  After writing the code in the text editor, use ctrl + z to exit gedit.
- `nano hello.c`
  Save and Close the File.To save the file in nano, press Ctrl+O, then press Enter to confirm. To exit, press Ctrl+X.
- `gcc hello.c -o hello`
- `./hello`

### Installation instructions for setting up a C development environment on various operating systems. Basics of compiling and running C programs.

**Installing GCC Compiler:**

This README provides step-by-step instructions to install the GCC compiler on both Linux and Windows operating systems.

**Linux:**

1. **Update Package Lists:**
   Open a terminal window and update the package lists of your Linux distribution:

   ```
   sudo apt update
   ```

2. **Install GCC:**
   Use the package manager to install GCC:

   ```
   sudo apt install gcc
   ```

3. **Verify Installation:**
   Confirm that GCC is installed successfully by checking its version:
   ```
   gcc --version
   ```

**Windows:**

1. **Install MinGW-W64:**
   MinGW-W64 is a development environment for Windows. Download the installer from the MinGW-W64 website: https://sourceforge.net/projects/mingw-w64/
2. **Run Installer:**
   Execute the downloaded installer and follow the installation instructions. Choose your architecture (32-bit or 64-bit) and the desired components, including GCC.

3. **Add MinGW-W64 to PATH:**
   After installation, add the MinGW-W64 binaries directory to your system PATH. The default location is typically `C:\mingw-w64\bin`.

4. **Verify Installation:**
   Open Command Prompt and verify that GCC is installed by typing:
   ```
   gcc --version
   ```

**Troubleshooting:**

- If encountering any issues during installation, refer to the documentation provided with your Linux distribution or MinGW-W64 installer.
- Ensure that your system meets the minimum requirements for installing GCC.
- In case of errors, search online forums and communities for solutions specific to your problem.

**Additional Notes:**

- GCC is a powerful compiler suite supporting various programming languages like C, C++, and Fortran.
- Always ensure you have the necessary permissions to install software on your system.
- Keep your compiler updated to benefit from the latest features and bug fixes.
- Refer to the GCC documentation for advanced usage and customization options.

- List of topics covered in this repository, such as variables, data types, control structures, functions, arrays, pointers, and more.

- Collection of well-commented code examples demonstrating various concepts in C programming.

- Set of exercises to practice and reinforce your understanding of C programming concepts.

- Guidelines for contributing to this repository, whether it's reporting issues, suggesting improvements, or adding new content.

- Additional resources, such as books, websites, and tutorials, to further enhance your learning journey in C programming.

### How to Use This Repository

1. Clone the repository to your local machine.

   ```bash
   git clone https://github.com/Injamulhasan/Learn_c.git
   ```

2. Explore the contents based on your current level of understanding or the topics you're interested in.
3. Read through the explanations, study the code examples, and attempt the exercises provided.
4. Experiment with the code, make modifications, and observe the results to deepen your understanding.
5. Contribute back by reporting issues, suggesting improvements, or adding new content. If you'd like to contribute to this project, feel free to fork the repository and submit a pull request. Any improvements or suggestions are welcome.

## Acknowledgments

- Inspiration for this project was drawn from various online tutorials and resources.

### Getting Help

If you have any questions, encounter issues, or need clarification on any topic, feel free to:

- Open an issue on this repository.
- Reach out to me via email or social media.

## Contact

For any inquiries or feedback, please contact Injamul hasan at -

```
injamulhasanakash@yahoo.com
```

### Happy Coding!

I hope you find this repository helpful in your journey to learn C programming. Remember, practice makes perfect, so keep coding and exploring!
