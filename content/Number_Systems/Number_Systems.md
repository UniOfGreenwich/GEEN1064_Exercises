# Number Systems Exercises

The **Number System** lab is designed for you to practice converting between different bases.

## Binary Numbers

Binary is a base 2 numbering system. There are only two symbols used, 0 and 1.

**Binary Positional Values**

|     MSB |         |         |          |          |         |          |         |         |         |     LSB|
|---------|---------|---------|----------|----------|---------|----------|---------|---------|---------|--------|
|$$2^{10}$$ | $$2^{9}$$ | $$2^{8}$$ |  $$2^{7}$$ |  $$2^{6}$$ | $$2^{5}$$ | $$2^{4}$$  | $$2^{3}$$ | $$2^{2}$$ | $$2^{1}$$ | $$2^{0}$$|
|  1024   |   512   |   256   |    128  |    64   |   32   |   16   |    8    |   4    |   2   |   1  | 

## Binary to Decimal Conversion 

To convert from binary to decimal, we need to add together the positional values for all the columns containing a 1. We ignore the columns with a 0, as they have nothing in them.

|     MSB |         |         |          |          |         |          |         |         |         |     LSB|
|---------|---------|---------|----------|----------|---------|----------|---------|---------|---------|--------|
|$$2^{10}$$ | $$2^{9}$$ | $$2^{8}$$ |  $$2^{7}$$ |  $$2^{6}$$ | $$2^{5}$$ | $$2^{4}$$  | $$2^{3}$$ | $$2^{2}$$ | $$2^{1}$$ | $$2^{0}$$|
|  1024   |   512   |   256   |    128  |    64   |   32   |   16   |    8    |   4    |   2   |   1  | 
| **0**   |  **0**  |  **0**  |  **1**  |  **0**  |  **0** |  **1** |  **0**  |  **1** | **1** | **0**|

In the above example, there are 1s in the \\(2^7\\), \\(2^4\\), \\(2^2\\) and \\(2^1\\) columns.

Therefore the decimal equivalent value is:

<p>
   <span class="math display">
      \[
         \begin{aligned}
            2^7 &amp;= 128\\
            2^4 &amp;=  \hspace{0.5em}16 \\
            2^2 &amp;=  \hspace{1em} 4 \\
            2^1 &amp;=   \hspace{1em} 2 \hspace{0.5em}+ \\
            \hline
            000 1001 0110 &amp; \equiv  150_{10}
         \end{aligned}
      \]
   </span>
</p>

## Binary to Decimal Conversion Exercises 
Convert the following binary numbers into decimal:

|   $$2^7$$ |  $$2^6$$ |  $$2^5$$ |  $$2^4$$ |  $$2^3$$ |  $$2^2$$ |  $$2^1$$ |  $$2^0$$|  Decimal  | 
|---------|--------|--------|--------|--------|--------|--------|-------|----------|
|    128  |   64   |   32   |   16   |    8   |    4   |    2   |    1  |           |
|     0   |    1   |    0   |    1   |    0   |    1   |    0   |    1  |           |
|     1   |    1   |    1   |    1   |    1   |    1   |    0   |    1  |           |
|     1   |    0   |    0   |    0   |    0   |    0   |    1   |    0  |           |
|     0   |    0   |    0   |    0   |    1   |    1   |    1   |    0  |           |
|     1   |    1   |    0   |    0   |    1   |    0   |    0   |    1  |           |
|     0   |    0   |    1   |    0   |    0   |    0   |    1   |    0  |           |
|     1   |    1   |    0   |    1   |    1   |    1   |    0   |    1  |           |
|     1   |    0   |    1   |    0   |    1   |    1   |    0   |    1  |           |
|     0   |    0   |    1   |    1   |    0   |    0   |    1   |    0  |           |

<p></p>

---
<details>
<summary><b>Click for solutions</b></summary>
<p></p>

|   $$2^7$$ |  $$2^6$$ |  $$2^5$$ |  $$2^4$$ |  $$2^3$$ |  $$2^2$$ |  $$2^1$$ |  $$2^0$$|  Decimal  | 
|---------|--------|--------|--------|--------|--------|--------|-------|----------|
|    128  |   64   |   32   |   16   |    8   |    4   |    2   |    1  |           |
|     0   |    1   |    0   |    1   |    0   |    1   |    0   |    1  |   **85** |
|     1   |    1   |    1   |    1   |    1   |    1   |    0   |    1  |   **253**|
|     1   |    0   |    0   |    0   |    0   |    0   |    1   |    0  |   **130** |
|     0   |    0   |    0   |    0   |    1   |    1   |    1   |    0  |   **14** |
|     1   |    1   |    0   |    0   |    1   |    0   |    0   |    1  |   **201** |
|     0   |    0   |    1   |    0   |    0   |    0   |    1   |    0  |   **34** |
|     1   |    1   |    0   |    1   |    1   |    1   |    0   |    1  |   **221** |
|     1   |    0   |    1   |    0   |    1   |    1   |    0   |    1  |   **173** |
|     0   |    0   |    1   |    1   |    0   |    0   |    1   |    0  |    **50**|

</details>

---

## Decimal to Binary Conversion

To convert from decimal to Binary, we have two options. The first of these involves continually dividing by two, and is explained in the PowerPoint presentation. The shorter way involves dividing through by the positional values rather than two. For example:

**$$171_{10}$$**

The largest positional value which will divide into \\(171_{10}\\) once is \\(2^7\\) which is \\(128_{10}\\). We therefore place a 1 in the \\(2^7\\) column, and subtract \\(128_{10}\\) from \\(171_{10}\\):
                                                           
|     MSB |         |         |          |          |         |          |         |         |         |     LSB|
|---------|---------|---------|----------|----------|---------|----------|---------|---------|---------|--------|
|$$2^{10}$$ | $$2^{9}$$ | $$2^{8}$$ |  $$2^{7}$$ |  $$2^{6}$$ | $$2^{5}$$ | $$2^{4}$$  | $$2^{3}$$ | $$2^{2}$$ | $$2^{1}$$ | $$2^{0}$$|
|  1024   |   512   |   256   |    128  |    64   |   32   |   16   |    8    |   4    |   2   |   1  | 
|    |   |   |  **1**  |   |   |   |    |   |  | |
<p>
   <span class="math display">
      \[
         \begin{aligned}
            & 171_{10}\\
            &  128_{10} \hspace{1em} - \\
            \hline
            & \hspace{0.5em}43_{10}
         \end{aligned}
      \]
   </span>
</p>

 - 43 is less than 64, so we put a 0 in the \\(2^6\\) column and move on to the \\(2^5\\) column. 43 is greater than 32, so we put a 1 in the \\(2^5\\) column and subtract 32 from 43:


|     MSB |         |         |          |          |         |          |         |         |         |     LSB|
|---------|---------|---------|----------|----------|---------|----------|---------|---------|---------|--------|
|$$2^{10}$$ | $$2^{9}$$ | $$2^{8}$$ |  $$2^{7}$$ |  $$2^{6}$$ | $$2^{5}$$ | $$2^{4}$$  | $$2^{3}$$ | $$2^{2}$$ | $$2^{1}$$ | $$2^{0}$$|
|  1024   |   512   |   256   |    128  |    64   |   32   |   16   |    8    |   4    |   2   |   1  | 
|    |   |   |  **1**  |  **0** | **1**  |   |    |   |  | |
                                          
<p>
   <span class="math display">
      \[
        \begin{aligned}
             & 43_{10}\\
             &  32_{10} \hspace{1em} - \\
            \hline
             & 11_{10}
        \end{aligned}
      \]
   </span>
</p>

 - 11 is less than 16, so we put a 0 in the \\(2^4\\) column and move on to the \\(2^3\\) column. 11 is greater than 8, so we put a 1 in the \\(2^3\\) column and subtract 8 from 11:



|     MSB |         |         |          |          |         |          |         |         |         |     LSB|
|---------|---------|---------|----------|----------|---------|----------|---------|---------|---------|--------|
|$$2^{10}$$ | $$2^{9}$$ | $$2^{8}$$ |  $$2^{7}$$ |  $$2^{6}$$ | $$2^{5}$$ | $$2^{4}$$  | $$2^{3}$$ | $$2^{2}$$ | $$2^{1}$$ | $$2^{0}$$|
|  1024   |   512   |   256   |    128  |    64   |   32   |   16   |    8    |   4    |   2   |   1  | 
|    |   |   |  **1**  |  **0** | **1**  | **0**  | **1**   |   |  | |

<p>
   <span class="math display">
      \[
         \begin{aligned}
            & 11_{10}\\
            &  \hspace{0.5em}8_{10} \hspace{1em}- \\
            \hline
            & \hspace{0.5em}3_{10}
         \end{aligned}
      \]
   </span>
</p>

- 3 is less than 4, so we put a 0 in the \\(2^2\\) column and move on to the \\(2^1\\) column. 3 is greater than 2, so we put a 1 in the \\(2^1\\) column and subtract 2 from 3:


|     MSB |         |         |          |          |         |          |         |         |         |     LSB|
|---------|---------|---------|----------|----------|---------|----------|---------|---------|---------|--------|
|$$2^{10}$$ | $$2^{9}$$ | $$2^{8}$$ |  $$2^{7}$$ |  $$2^{6}$$ | $$2^{5}$$ | $$2^{4}$$  | $$2^{3}$$ | $$2^{2}$$ | $$2^{1}$$ | $$2^{0}$$|
|  1024   |   512   |   256   |    128  |    64   |   32   |   16   |    8    |   4    |   2   |   1  | 
|    |   |   |  **1**  |  **0** | **1**  | **0**  | **1**   |  **0** | **1** |**1** |

<p>
   <span class="math display">
      \[
         \begin{aligned}
            & 1_{10}\\
            &  1_{10} \hspace{1em}- \\
            \hline
            & 0_{10}
         \end{aligned}
      \]
   </span>
</p>

## Decimal to Binary Conversion Exercises

Convert the following decimal numbers into binary:

| Decimal  | $$2^7$$  | $$2^6$$  | $$2^5$$  | $$2^4$$  | $$2^3$$  | $$2^2$$  | $$2^1$$  | $$2^0$$ |
| ---------| -------| -------| -------| -------| -------| -------| -------| -------|
|          |   128  |   64   |   32   |   16   |    8   |    4   |    2   |    1   |
|    165   |       |       |       |       |     |      |      |    |
|    242   |       |       |       |       |     |      |      |    |
|     7    |       |       |       |       |     |      |      |    |
|    92    |       |       |       |       |     |      |      |    |
|    63    |       |       |       |       |     |      |      |    |
|    12    |       |       |       |       |     |      |      |    |
|    129   |       |       |       |       |     |      |      |    |
|    71    |       |       |       |       |     |      |      |    |
|    45    |       |       |       |       |     |      |      |    |

---
<details>
<summary><b>Click for solutions</b></summary>
<p></p>

| Decimal  | $$2^7$$  | $$2^6$$  | $$2^5$$  | $$2^4$$  | $$2^3$$  | $$2^2$$  | $$2^1$$  | $$2^0$$ |
| ---------| -------| -------| -------| -------| -------| -------| -------| -------|
|          |   128  |   64   |   32   |   16   |    8   |    4   |    2   |    1   |
|    165   |    **1**   |    **0**   |    **1**  |    **0**   |    **0**   |    **1**   |    **0**   |   **1** |
|    242   |    **1**   |    **1**   |    **1**  |    **1**   |    **0**   |    **0**   |    **1**   |   **0** |
|     7    |    **0**   |    **0**   |    **0**  |    **0**   |    **0**   |    **1**   |    **1**   |   **1** |
|    92    |    **0**   |    **1**   |    **0**  |    **1**   |    **1**   |    **1**   |    **0**   |   **0** |
|    63    |    **0**   |    **0**   |    **1**  |    **1**   |    **1**   |    **1**   |    **1**   |   **1** |
|    12    |    **0**   |    **0**   |    **0**  |    **0**   |    **1**   |    **1**   |    **0**   |   **0** |
|    129   |    **1**   |    **0**   |    **0**  |    **0**   |    **0**   |    **0**   |    **0**   |   **1** |
|    71    |    **0**   |    **1**   |    **0**  |    **0**   |    **0**   |    **1**   |    **1**   |   **1** |
|    45    |    **0**   |    **0**   |    **1**  |    **0**   |    **1**   |    **1**   |    **0**   |   **1** |

</details>

---

## Hexadecimal Numbers

Hexadecimal is a base 16 numbering system. It uses 0 to 9, like decimal, plus A to F:

0 1 2 3 4 5 6 7 8 9 A B C D E F

\\(A_{16}\\) = \\(10_{10}\\)

\\(B_{16}\\) = \\(11_{10}\\)

\\(C_{16}\\) = \\(12_{10}\\)

\\(D_{16}\\) = \\(13_{10}\\)

\\(E_{16}\\) = \\(14_{10}\\)

\\(F_{16}\\) = \\(15_{10}\\)


**Hexadecimal Positional Values**

|MSB       |           |            | LSB |
|----------| ----------| ---------- |----------| 
|$$16^{3}$$| $$16^{2}$$|  $$16^{1}$$|   $$16^{0}$$|
|4096      | 256       | 16         |1|

## Hexadecimal to Decimal Conversion

To convert a number from hexadecimal to decimal, you need to multiply each digit in the hexadecimal number by the positional value of the column it is in, then add these all together. It is usual to work from left to right. 

For example:

|MSB       |           |            | LSB |
|----------| ----------| ---------- |----------| 
|$$16^{3}$$| $$16^{2}$$|  $$16^{1}$$|   $$16^{0}$$|
|4096      | 256       | 16         |1|
|     1    |      3    |      B     |     5|

<p>
   <span class="math display">
      \[
         \begin{aligned}
            1 * 4096   &= 4096\\
            3 * 256    &= \hspace{0.5em} 768 \\
            B(11) * 16 &= \hspace{0.5em}176 \\
            5 * 1      &= \hspace{1.5em}5  \hspace{1em}+\\
            \hline
            & \hspace{0.5em}5045_{10}
         \end{aligned}
      \]
   </span>
</p>

## Hexadecimal to Decimal Conversion Exercises 

Convert the following hexadecimal numbers to decimal:

|   $$16^3$$|   $$16^2$$|   $$16^1$$  | $$16^0$$  |Answer|
|--------|----------|------|------|-------------|
|    4096   |  256      | 16 |      1  |          |
|     0     |   5       | F  |      9  |   |
|     2     |   C       | A  |      D  |   |
|     1     |   9       | 5  |      5  |   |
|     A     |   8       | 6  |      4  |   |
|     7     |   6       | 2  |      B  |   |
|     1     |   4       | B  |      E  |   |
|     0     |   E       | D  |      C  |   |
|     5     |   7       | 0  |      A  |   |
|     1     |   B       | 3  |      2  |   |
|     2     |   D       | C  |      6  |   |

---
<details>
<summary><b>Click for solutions</b></summary>
<p></p>

|   $$16^3$$|   $$16^2$$|   $$16^1$$  | $$16^0$$  |Answer|
|--------|----------|------|------|-------------|
|    4096   |  256      | 16 |      1  |          |
|     0     |   5       | F  |      9  |   **1529**  |
|     2     |   C       | A  |      D  |   **11437**  |
|     1     |   9       | 5  |      5  |   **6485**  |
|     A     |   8       | 6  |      4  |   **43108**  |
|     7     |   6       | 2  |      B  |   **30251**  |
|     1     |   4       | B  |      E  |   **5310**  |
|     0     |   E       | D  |      C  |   **3804**  |
|     5     |   7       | 0  |      A  |   **22282**  |
|     1     |   B       | 3  |      2  |   **6962**  |
|     2     |   D       | C  |      6  |   **11718**  |

</details>

---

## Decimal to Hexadecimal Conversion 

Converting a decimal number to hexadecimal involves repeatedly dividing it by 16, until the dividend equals 0. Each time, the remainder goes in the empty column nearest the right (least significant number). 

An example should hopefully make this clearer:

**$$4591_{10}$$**

|   $$16^{3}$$| $$16^{2}$$| $$16^{1}$$| $$16^{0}$$|
|-------------|-----------|------------|----------|
|     4096    |   256     |  16        |     1    |
                                   

$$286 \hspace{0.5em}r 15= \frac{4591}{16}$$

15 = F, so put an F in the \\(16^0\\) column and divide the dividend (286) by 16

|   $$16^{3}$$ |  $$16^{2}$$  |$$16^{1}$$ |  $$16^{0}$$ |
|------------|------------|----------|-----------|
|     4096   |    256     |    16    |     1     |
|            |            |          |     F     |

$$17 \hspace{0.5em}r 14= \frac{286}{16}$$

14 = E, so put an E in the \\(16^1\\) column and divide the dividend (17) by 16:

|   $$16^{3}$$ |  $$16^{2}$$  |$$16^{1}$$ |  $$16^{0}$$ |
|------------|------------|----------|-----------|
|     4096   |    256     |    16    |     1     |
|            |            |     E    |     F     |

$$1 \hspace{0.5em}r 1= \frac{17}{16}$$

Put the remainder 1 in the \\(16^2\\)column and divide the dividend (1) by 16:

|   $$16^{3}$$ |  $$16^{2}$$  |$$16^{1}$$ |  $$16^{0}$$ |
|------------|------------|----------|-----------|
|     4096   |    256     |    16    |     1     |
|            |     1      |     E    |     F     |

$$0 \hspace{0.5em}r 1= \frac{1}{16}$$

Put the remainder in the \\(16^3\\) column. The dividend is 0, so our conversion is completed:

|   $$16^{3}$$ |  $$16^{2}$$  |$$16^{1}$$ |  $$16^{0}$$ |
|------------|------------|----------|-----------|
|     4096   |    256     |    16    |     1     |
|      1     |      1     |     E    |     F     |

## Decimal to Hexadecimal Conversion Exercises

Convert the following decimal numbers to hexadecimal:

|  Decimal | $$16^3$$ | $$16^2$$ | $$16^1$$ | $$16^0$$ |          
| ---------| --------| --------| --------| --------| 
|          |   4096  |   256   |    16   |    1    |          
|   4015   |    |    |    |    |          
|    231   |    |    |    |    |          
|    590   |    |    |    |    |          
|   20371  |    |    |    |    |          
|    32    |    |    |    |    |          
|    926   |    |    |    |    |          
|   15995  |    |    |    |    |          
|   17612  |    |    |    |    |          
|   8000   |    |    |    |    |          
|    745   |    |    |    |    |          

---
<details>
<summary><b>Click for solutions</b></summary>
<p></p>


|  Decimal | $$16^3$$ | $$16^2$$ | $$16^1$$ | $$16^0$$ |          
| ---------| --------| --------| --------| --------| 
|          |   4096  |   256   |    16   |    1    |          
|   4015   |  **0**  |  **F**  |  **A**  |  **F**  |          
|    231   |  **0**  |  **0**  |  **E**  |  **7**  |          
|    590   |  **0**  |  **2**  |  **4**  |  **E**  |          
|   20371  |  **4**  |  **F**  |  **9**  |  **3**  |          
|    32    |  **0**  |  **0**  |  **2**  |  **0**  |          
|    926   |  **0**  |  **3**  |  **9**  |  **E**  |          
|   15995  |  **3**  |  **E**  |  **7**  |  **B**  |          
|   17612  |  **4**  |  **4**  |  **C**  |  **C**  |          
|   8000   |  **1**  |  **F**  |  **4**  |  **0**  |          
|    745   |  **0**  |  **2**  |  **E**  |  **9**  | 

</details>

---

## Converting From Hexadecimal to Binary

Converting between binary and hexadecimal is very easy, as \\(2^4\\) = \\(16^1\\).

This means that each hexadecimal character can be represented by a block of 4 binary digits.

To convert from Hexadecimal to Binary, you therefore convert each hexadecimal digit into 4 binary digits. 

For example:

**$$A39C_{16}$$**

\\(A_{16}\equiv 10_{10} \equiv1010_{2}\\)

\\(3_{16}\equiv 0011_{2}\\)

\\(9_{16}\equiv 1001_{2}\\)

\\(C_{16}\equiv 12_{10} \equiv1100_{2}\\)

Putting it together we get: 

- **\\(1010 0011 1010 1100_{2}\\)**

## Hexadecimal to Binary Conversion Exercises 

Convert the following hexadecimal numbers to binary:

1.  \\(0395_{16} \equiv\\) ?

2.  \\(BA92_{16} \equiv\\) ?

3.  \\(46C1_{16} \equiv\\) ?

4.  \\(78DF_{16} \equiv\\) ?

5.  \\(E129_{16} \equiv\\) ?

6. \\(C416_{16} \equiv\\) ?

---
<details>
<summary><b>Click for solutions</b></summary>
<p></p>

1.  \\(0395_{16} \equiv\\) **\\(0000 0011 1001 0101_{2}\\)**

2.  \\(BA92_{16} \equiv\\) **\\(1011 1010 1001 0010_{2}\\)**

3.  \\(46C1_{16} \equiv\\) **\\(0100 0110 1100 0001_{2}\\)**

4.  \\(78DF_{16} \equiv\\) **\\(0111 1000 1101 1111_{2}\\)**

5.  \\(E129_{16} \equiv\\) **\\(1110 0001 0010 1001_{2}\\)**

6. \\(C416_{16} \equiv\\) **\\(1100 0100 0001 0110_{2}\\)**


</details>

---

## Binary to Hexadecimal Conversion 

To convert from binary to hexadecimal, start from the right (least significant bit) and break the binary number into blocks of 4 digits. Then convert each block to its hexadecimal equivalent. 

For example:

**\\(1100 0011 0101 1111_{2}\\)**

\\(1100_{2} \equiv12_{10} \equiv C_{16}\\)

\\(0011_{2} \equiv3_{16}\\)

\\(0101_{2} \equiv5_{16}\\)

\\(1111_{2} \equiv15_{10} \equiv F_{16}\\)

Putting that all together we get **\\(C35F_{16}\\)**

## Binary to Hexadecimal Conversion Exercises

Convert the following binary numbers to hexadecimal:

1.  \\(1101 0011 0110 1101_{2}\equiv\\) ?

2.  \\(0010 1010 0101 0000_{2}\equiv\\) ?

3.  \\(1111 0110 1000 0001_{2}\equiv\\) ?

4.  \\(0001 0110 1001 1011_{2}\equiv\\) ?

5.  \\(1010 1011 0011 0101_{2}\equiv\\) ?

6.  \\(0101 0001 0010 0011_{2}\equiv\\) ?

---
<details>
<summary><b>Click for solutions</b></summary>
<p></p>

1.  \\(1101 0011 0110 1101_{2}\equiv\\) **\\(D36D_{16}\\)**

2.  \\(0010 1010 0101 0000_{2}\equiv\\) **\\(2A50_{16}\\)**

3.  \\(1111 0110 1000 0001_{2}\equiv\\) **\\(F681_{16}\\)**

4.  \\(0001 0110 1001 1011_{2}\equiv\\) **\\(169B_{16}\\)**

5.  \\(1010 1011 0011 0101_{2}\equiv\\) **\\(AB35_{16}\\)**

6.  \\(0101 0001 0010 0011_{2}\equiv\\) **\\(5123_{16}\\)**

</details>

---
