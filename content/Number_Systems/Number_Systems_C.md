# Number Systems Converter using C

The **Number System converter using C** lab has been developed so you can experience the programming language C whilst converting binary to decimal and decimal to binary. 

It is beneifical that you understand how to convert by hand first so make sure you have been through the [Number System Exercise](/content/Number_Systems/Number_Systems.md)

In this lab you are going to use [JuypterHub](https://jupyterhub.canterbury.ac.uk/) to create two C files, compile and execute them.

## dec2bin.c

Create a new directory and call it `FCC/C` we can do this using the following commands in terminal. 

```sh
$  mkdir -p FCC/C
```
> **Note:**
>> - the `$` symbol used in the above indicates that this is a command that should be entered into the terminal.
>> -  these are shell commands written in `c`. 

Now you are to navigate to this directory using the following command and create your first file:

```sh
$  cd FCC/C
$  touch dec2bin.c
```
> **Note:**
>> - each line should be entered in seperately 

If we use the command `ls` we can list the content of the directory and should see at a file named 'helloworld.c'

```sh
$ ls
```

**Output:**
```sh
dec2bin.c
```

Now we are going to open up and edit the content of the file and write it out: 

```$
nano dec2bin.c
```

Enter the following: 

```c
#include <stdio.h> // we need this library to get access to the input and out put methods for printing to terminal

// declare a function that converts a decimal number to it's binary number
long long convert(int num)
{
    // declare an initialise some global variables
    long long binary = 0;  // long long used to store large binary values
    int remainder, i = 1; // int is 16 bytes by default

    //While the supplied number does not equal 0 do this code
    while(num!=0)
    {
        remainder = num % 2; // get the remainder
        num /= 2; // halve the supplied number
        binary += remainder * i; //get the binary representation
        i *= 10; // moving to next position ex: units -> tens
    }
    return binary; // once finished return long long  (binary number)
}
 
int main()
{   
    int decimal_num = 0;
    printf("Enter any decimal number: "); // let the user know what you want
    scanf("%d",&decimal_num); // capture their input 
    printf("%d in decimal is %lld in binary", decimal_num, convert(decimal_num)); // return the converted value be calling the function convert()
    return 0; // exit the code with no errors.
}
```
You will probably have noticed that at the bottom of the text editor there are a number of actions that can be completed. 

The `^` means <kbd>ctrl</kbd> and the `M` means <kbgetd>alt</kbd> keys + the corresponding symbol.

Once entered use the keyboard shortcut to `writeout` <kbd>ctrl</kbd>+<kbd>o</kbd> and then press the <kbd>Enter</kbd> followed by <kbd>ctrl</kbd>+<kbd>x</kbd> to exit the file.  

Some explanation about the above code:


- All code gets executed inside of `main()`, 

- For the program to terminate the `main()` has to have a returnable value, `int`, 

- The keyword at the end of the `main()` is `return`, this is will return the value preceeding it, 

- A `0` execute means no errors. 

- Similar to `C#` to use libraries `c` programs import with the `#include` keyword instead of `using`. 

- The included library is the standard input out header, `stdio.h`.  

- By including this header file we have access to the `printf()` and `scanf()` functions that enables us to return and capture information using the terminal/console.


Before we compile and test our code, lets make sure we understand the maths that is happening inside the `convert()` function. 

```c
while(num!=0)
    {
        remainder = num % 2; // get the remainder
        num /= 2; // halve the supplied number
        binary += remainder * i; //get the binary representation
        i *= 10; // moving to next position ex: units -> tens
    }
```

Mathematical notation for this would be: 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            remainder &= number \; mod \;  2 \\
            number &= \frac{number}{2} \\
            binary &=  binary + (remainder \cdot i) \\
            i &= i \cdot 10
         \end{aligned}
      \]
   </span>
</p>

Where \\(\%\\) means \; mod \; ulos, and \\(i = 0\\) at initialisation.

---------------------------

## Example 1
So an example, lets convert \\(10_{10}\\) to it's binary equivlences:

**First time around -**
<p>
   <span class="math display">
      \[
         \begin{aligned}
            0 &= 10 \; mod \;  2 \\
            5 &= \frac{10}{2} \\
            binary &=  0 + (0 \cdot 1)) \\
            10 &= 1 \cdot 10
         \end{aligned}
      \]
   </span>
</p>

**Second time around -** 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 5 \; mod \;  2 \\
            2 &= \frac{5}{2} \\
            10 &=  0 + (1 \cdot 10)) \\
            100 &= 10 \cdot 10
         \end{aligned}
      \]
   </span>
</p>


**Third time around -** 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            0 &= 2 \; mod \;  2 \\
            1 &= \frac{2}{2} \\
            10 &=  10 + (0 \cdot 100)) \\
            1000 &= 100 \cdot 10
         \end{aligned}
      \]
   </span>
</p>

**Fourth time around -**

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 1 \; mod \;  2 \\
            0 &= \frac{1}{2} \\
            1010 &=  10 + (1 \cdot 1000)) \\
            10000 &= 1000 \cdot 10
         \end{aligned}
      \]
   </span>
</p>

As the supplied number is now \\(0\\) the `while` loop becomes false, and the `breaks`. 

So our binary representation is prestented as \\(1010_2\\) which poistional 1's show that \\(10 = 8 + 2\\).

------------------------

### Example 2

We can do another one let's try 12:

<p>
   <span class="math display">
      \[
         \begin{aligned}
            remainder &= number \; mod \;  2 \\
            number &= \frac{number}{2} \\
            binary &=  binary + (remainder \cdot i) \\
            i &= i \cdot 10
         \end{aligned}
      \]
   </span>
</p>

Where \\(\%\\) means \; mod \; ulos, and \\(i = 0\\) at initialisation.

So an example, lets convert \\(10_{10}\\) to it's binary equivlences:

**First time around -**
<p>
   <span class="math display">
      \[
         \begin{aligned}
            0 &= 12 \; mod \;  2 \\
            6 &= \frac{12}{2} \\
            0 &=  0 + (0 \cdot 1)) \\
            10 &= 1 \cdot 10
         \end{aligned}
      \]
   </span>
</p>

**Second time around -**

<p>
   <span class="math display">
      \[
         \begin{aligned}
            0 &= 6 \; mod \;  2 \\
            1 &= \frac{6}{2} \\
            0 &=  0 + (0 \cdot 10)) \\
            100 &= 10 \cdot 10
         \end{aligned}
      \]
   </span>
</p>


**Third time around -** 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 3 \; mod \;  2 \\
            1 &= \frac{3}{2} \\
            100 &=  1 + (1 \cdot 100)) \\
            1000 &= 100 \cdot 10
         \end{aligned}
      \]
   </span>
</p>

**Fourth time around -**

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 1 \; mod \; % 2 \\
            0 &= \frac{1}{2} \\
            1100 &=  100 + (1 \cdot 1000)) \\
            10000 &= 1000 \cdot 10
         \end{aligned}
      \]
   </span>
</p>

As the supplied number is now \\(0\\) the `while` loop becomes false, and the `breaks`. 

So our binary representation is prestented as \\(1100_2\\) which poistional 1's show that \\(12 = 8 + 4\\).


### Compliation

Now we are going to use the `gcc` compiler to build our script so we can execute the program.

In the terminal, enter the following:

```sh
$ gcc -s dec2bin.c -o dec2bin.exe
```

The `-s` option is to specify the source file, `dec2bin.c`. The `-o` options specifies the output file or destination.

If you get no errors, the terminal will return a blank line. 

Now lets run the script: 

```sh
$ ./dec2bin.exe
```

**Output:**

```sh 
Enter any decimal number:
```

lets put in 907 and press the return key.

```sh 
Enter any decimal number: 907
907 in decimal is 1110001011 in binary
```

Breaking this down: 

$$[00]11 \ 1000 \ 1011$$
$$...$$
$$907 = 512+256+128+8+2+1$$

**Try another whole number, below 65536.**

## bin2dec.c

Now we are going to make a new file in the same directory: 

```sh
$ touch bin2dec.c
```


again we will edit the file using the following command:

```sh
$ nano bin2dec.c
```

Edit the contents of the file to look like below:

```c
#include <math.h>
#include <stdio.h>

int convert(long num);

int convert(long num) {
  int decimal = 0, i = 0, rem;
  while (num != 0) {
    rem = num % 10;
    num /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }
  return decimal;
}

int main() {
  long num;
  printf("Enter any binary number: ");
  scanf("%ld", &num);
  printf("%ld in binary is %d in decimal\n", num, convert(num));
  return 0;
}

```

Some small changes here:

- a new library has been imported `#include math.h`, this is so we can use the power function `pow()` 

- the `convert()` now has uses \; mod \; ulo 10 and the `pow()`.

Again we are going to follow the mathematics in the code to understand how it works. 

```c
  while (num != 0) {
    rem = num % 10;
    num /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }
```

Equations seen below:

<p>
   <span class="math display">
      \[
         \begin{aligned}
            remainder &= number \; mod \;  10 \\
            number &= \frac{number}{10} \\
            denary &=  denary + (remainder \cdot 2^i) \\
            i &= i + 1
         \end{aligned}
      \]
   </span>
</p>

### Example 1

So an example, lets convert \\(1010_{2}\\) to it's binary equivlences:

**First time around -**
<p>
   <span class="math display">
      \[
         \begin{aligned}
            0 &= 1010 \; mod \;  10 \\
            101 &= \frac{1010}{10} \\
            0 &=  0 + (0 \cdot 2^0) \\
            1 &= 0 + 1
         \end{aligned}
      \]
   </span>
</p>

**Second time around -** 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 101 \; mod \;  10 \\
            10 &= \frac{101}{10} \\
            2 &=  0 + (1 \cdot 2^1) \\
            2 &= 1 + 1
         \end{aligned}
      \]
   </span>
</p>


**Third time around -** 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            0 &= 10 \; mod \;  10 \\
            1 &= \frac{10}{10} \\
            2 &=  0 + (0 \cdot 2^2) \\
            3 &= 2 + 1
         \end{aligned}
      \]
   </span>
</p>

**Fourth time around -**

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 1 \; mod \;  2 \\
            0 &= \frac{1}{10} \\
            10 &=  2 + (1 \cdot 2^3)) \\
            4 &= 3 + 1
         \end{aligned}
      \]
   </span>
</p>

As the supplied number is now \\(0\\) the `while` loop becomes false, and the `breaks`. 

So our binary representation is prestented as \\(10_{10}\\) which poistional 1's show that \\(1010_2 = 8 + 2\\).


### Example 2


So an example, lets convert \\(1111_{2}\\) to it's binary equivlences:

**First time around -**
<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 1111 \; mod \;  10 \\
            111 &= \frac{1111}{10} \\
            1 &=  0 + (1 \cdot 2^0) \\
            1 &= 0 + 1
         \end{aligned}
      \]
   </span>
</p>

**Second time around -** 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 111 \; mod \;  10 \\
            11 &= \frac{111}{10} \\
            3 &=  1 + (1 \cdot 2^1) \\
            2 = 1 + 1
         \end{aligned}
      \]
   </span>
</p>


**Third time around -** 

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 11 \% 10 \\
            1 &= \frac{11}{10} \\
            7 &=  3 + (1 \cdot 2^2) \\
            3 &= 2 + 1
         \end{aligned}
      \]
   </span>
</p>

**Fourth time around -**

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 &= 1 \; mod \;  2 \\
            0 &= \frac{1}{10} \\
            15 &=  7 + (1 \cdot 2^3)) \\
            4 &= 3 + 1
         \end{aligned}
      \]
   </span>
</p>

As the supplied number is now \\(0\\) the `while` loop becomes false, and the `breaks`. 

So our binary representation is prestented as \\(1111_{10}\\) which poistional 1's show that \\(1111_2 = 8 + 4 + 2 + 1\\).

### Compilation

Now we are going to compile the script so that we have our second exectuable:

```sh
$ gcc -s bin2dec.c -o bin2dec.exe

```

**Output:**

```sh
$ /usr/bin/ld: /tmp/cceV5wYg.o: in function `convert':
$ bin2dec.c:(.text+0xa4): undefined reference to `pow'
$ collect2: error: ld returned 1 exit status
```

What happens here?

The error you are seeing: error: `ld returned 1 exit status` is from the linker `ld` (part of `gcc` that combines the object files) because it is unable to find where the function `pow()` is defined.

Let's correct this by running the following command instead:

```sh
$ gcc -s bin2dec.c -lm -o bin2dec.exe
```

`-l` means binary libraries to have in mind when linking. Whatever goes after -l is by default interpreted as part of a filename starting by `lib` and ending in `.a`. Hence `-lm` means link `libm.a`

If you get no errors, the terminal will return a blank line. 

Now lets run the script: 

```sh
$ ./bin2dec.exe
```

**Output:**

```sh 
Enter any binary number:
```

lets put in 1010 1010 1010 and press the return key.

```sh 
Enter any decimal number: 101010101010
101010101010 in binary is 2730 in decimal 
```

Breaking this down: 

$$1010 \ 1010 \ 1010 $$
$$...$$
$$2703 = 2048+512+128+32+8+2$$

**Try another binary number below the value \\(1111111111111111_2\\).**

## Character Symbol conversion

This particular exercise will be valuable to your understanding of the practicle part of the assessment. 

We are going to see how each character or symbol on your keyboard is mapped to the ASCII Table.

Create a new file and call it, `ASCII_Conversion.c`

Reproduce the following:

```c

#include <stdio.h>
int main() {  
    char c;

    printf("Enter a character: ");

    scanf("%c", &c);  
    
    /* %d displays the integer value of a character */
    /* %c displays the actual character */
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}

```

Compile and run:

```sh
$ gcc ASCII_Conversion.c -o ASCII_Conversion.exe

$ ./ASCII_Conversion.exe

Enter a character: G
ASCII value of G = 71
```


Compare as many as you think you need to, to believe the program works:

|Dec|  Char | Dec|Char|Dec |Char|Dec  |Char|Dec  |Char|Dec  |Char|     
|---|-------|----|----|----|----|-----|----|-----|----|-----|----|
|32 | SPACE |50  | 2  |68  | D  | 86  | V  |104 | h | 122 | z  |
|33 | !     |51  | 3  |69  | E  | 87  | W  |105 | i | 123 | {  |
|34 | "     |52  | 4  |70  | F  | 88  | X  |106 | j | 124 | |  |
|35 | #     |53  | 5  |71  | G  | 89  | Y  |107 | k | 125 | }  |
|36 | $     |54  | 6  |72  | H  | 90  | Z  |108 | l | 126 | ~  |
|37 | %     |55  | 7  |73  | I  | 91  | [  |109 | m | 127 | DEL|
|38 | &     |56  | 8  |74  | J  | 92  | \  |110 | n |||
|39 | '     |57  | 9  |75  | K  | 93  | ]  |111 | o |||
|40 | (     |58  | :  |76  | L  | 94  | ^  |112 | p |||
|41 | )     |59  | ;  |77  | M  | 95  | _  |113 | q |||
|42 | *     |60  | <  |78  | N  | 96  | `  |114 | r |||
|43 | +     |61  | =  |79  | O  | 97  | a  |115 | s |||
|44 | ,     |62  | >  |80  | P  | 98  | b  |116 | t |||
|45 | -     |63  | ?  |81  | Q  | 99  | c  |117 | u |||
|46 | .     |64  | @  |82  | R  | 100 | d  |118 | v |||
|47 | /     |65  | A  | 83 | S  | 101 | e  |119 | w |||
|48 | 0     |66  | B  | 84 | T  | 102 | f  |120 | x |||
|49 | 1     |67  | C  | 85 | U  | 103 | g  |121 | y |||line
|||||||||||||

### Task

Develop on the code so that it also prints out the binary equivalent too. 

