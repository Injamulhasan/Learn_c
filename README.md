# Learn C Programming

<p align="center">
  <a href="https://www.cprogramming.com/">
  <img src="https://github.com/Injamulhasan/Learn_c/assets/102874510/cdb32857-bdae-421d-84e3-33734f7ac0eb" alt="Bootstrap logo" width="400" height="205">  
  </a>
</p>

Welcome to my C Programming repository! This repository is dedicated to helping you learn and master the fundamentals of C programming.

## Contents

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

```c
# include <stdio.h>
int main() {
	printf("Hello world");
	printf("test");
	return 0;
}

```

💡 Here because we are first time we are executing the code therefore Build and Run both are required. Build actually asks the compiler to build the machine code for the source code we had written. And Run simply runs the code and produce the output.

### Explore the contents.

**Size of data types**

```c
#include <stdio.h>
int main()
{
	printf("Size of short int is %ld bytes\n", sizeof(short int));//2
	printf("Size of int is %ld bytes\n", sizeof(int));//4
	printf("Size of long int is %ld bytes\n", sizeof(long int));
	printf("Size of float is %ld bytes\n", sizeof(float));
	printf("Size of double is %ld bytes\n", sizeof(double));
	printf("Size of long double is %ld bytes\n", sizeof(long double));
	printf("Size of char is %ld bytes\n", sizeof(char));
	return 0;
}
```

`%ld` is the placeholder for this variable that simply says take the next argument from the `printf`

**Fundamental Data Types − Integer**

Range of 4 bit data?

- 0000 to 1111 → 0 to 15
- Formula: 0 to 2^n - 1

Therefore, for 4 byte integer:

- `4 * 8 = 32 bits`
- Unsigned range 0 to 2^{n} - 1$
- Signed integer also accommodate `-ve` integers, hence range (2^{n-1}) to +(2^{n-1} - 1)

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // Integral types
    printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of short unsigned integer is from %d to %d\n", 0, USHRT_MAX);

    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned integer is from %u to %u\n", 0, UINT_MAX);


    printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int: %u to %lu\n", 0, ULONG_MAX);
    // Char type
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);

    // Precision of Floating-point types

    printf("Precision of float: %d digits\n", FLT_DIG);
    printf("Precision of double: %d digits\n", DBL_DIG);
    printf("Precision of long double: %d digits\n", LDBL_DIG);

    return 0;
}
```

💡 <float.h> was used to access FLT_DIG, DBL_DIG and LDBL_DIG precision, similarly <limits.h> was used for the range of data types

`2^32 - 1 = 4294967295`

```c
#include <stdio.h>
int main()
{
	unsigned int var = 4294967296;
	printf("%u\n", var);
}
```

What happens when we write an integer value that is outside the range of the data type?

💡 If we write 4294967296 then it starts from 0 again because we cannot represent 4294967296 in 32 bit system.

![Untitled](https://github.com/Injamulhasan/Learn_c/assets/102874510/97ec8c2c-048d-4d9a-9a5a-c24a9d66fc7a)

![Untitled (1)](https://github.com/Injamulhasan/Learn_c/assets/102874510/c26667cc-7b6a-4a45-9194-2610bae495ba)

Suppose in this example when we try to write 9 in a 3 bit system, the 9 cannot be written since we need 4 bits to represent it. The MSB is ignored, hence 1000 becomes 000 and we see 0 being given as output.
Characters

```c
#include <stdio.h>
int main()
{
	char var = 65;
	printf("%c", var);
	return 0;
}
```

Float, Double and Long Double

```c
#include <stdio.h>
int main()
{
    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;

    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", var3);
}
```

Which data type has the best precision?

C Type Conversion

```c
#include <stdio.h>

int main() {

  int number = 34.78;
  printf("%d", number);

  return 0;
}
```

// Output: 34
​
Implicit Type Conversion In C

```c
#include<stdio.h>

int main() {

  // create a double variable
  double value = 4150.12;
  printf("Double Value: %.2lf\n", value);

  // convert double value to integer
  int number = value;
  printf("Integer Value: %d", number);

  return 0;
}
```

````c
#include<stdio.h>

int main() {

  // character variable
  char alphabet = 'a';
  printf("Character Value: %c\n", alphabet);

  // assign character value to integer variable
  int number = alphabet;
  printf("Integer Value: %d", number);

  return 0;
}
​```


Explicit Type Conversion In C

```c
#include<stdio.h>

int main() {

  // create an integer variable
  int number = 35;
  printf("Integer Value: %d\n", number);

  // explicit type conversion
  double value = (double) number;
  printf("Double Value: %.2lf", value);

  return 0;
}
````

```C
#include<stdio.h>
int main() {

  // create an integer variable
  int number = 97;
  printf("Integer Value: %d\n", number);

  // (char) converts number to character
  char alphabet = (char) number;
  printf("Character Value: %c", alphabet);

  return 0;
}
```

### Read through the explanations, study the code examples, and attempt the exercises provided.

### Experiment with the code, make modifications, and observe the results to deepen your understanding.

### Contribute back by reporting issues, suggesting improvements, or adding new content. If you'd like to contribute to this project, feel free to fork the repository and submit a pull request. Any improvements or suggestions are welcome.

### How to Use This Repository

1. Clone the repository to your local machine.

   ```bash
   git clone https://github.com/Injamulhasan/Learn_c.git
   ```

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
