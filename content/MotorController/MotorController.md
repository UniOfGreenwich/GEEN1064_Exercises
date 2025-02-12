# Motor Control Board using TinkerCad

## 1. Introduction 

In today’s activity we will use an Arduino and a H-bridge controller to engage a DC motor to move in a postive or negative direction based on a temperature value. This could be useful to move plants, canopy in response to heat from the Sun.

~~~admonish note

- The primary tool for this project will be TinkerCad -> https://www.tinkercad.com

~~~

-------------------

## 2. RPM, Rad/s, Angular Velocity(Deg/s)

This section provides a quick recap on Revolution Per Minute, Radians Per Second and Degrees per second. Being able to interchange between these values will help visualise.

**RPM:**
- the number of complete turns (full revolutions) the engine or wheel makes in a one-minute time
period
- remember that this is only per minute, not per second like many other measures of rotation.

**Rad/s:**
- A radian is a measure of an angle
- defined in terms of π
- 2π radians (rad) in a complete revolution
- You can relate this to degrees by noting that 360 degrees = 2π rad, so 1 radian = 57.3 degrees.

So lets assume that we have a RPM of 1000, and that this needs to be converted to Rad/s. The two main steps in the conversion are converting RPM to revolutions per second (RPS), then converting total revolutions to the angle covered in radians. The first step is simple: Divide the number in RPM by 60 to find the number of revolutions per second as shown in the **equation 1**:

<p>
   <span class="math display">
      \[
         \begin{aligned}
            RPS  &amp;= \frac{RPM}{60 seconds/minute} \\ \\
            \Rightarrow 16.67 RPS &amp;= \frac{1000}{60} 
         \end{aligned}\tag{Eqn:1}
      \]
   </span>
</p>

Now we need to convert the RPS to Rad/s,you take RPS and convert to radians by multiplying by 2π, as seen in the **equation 2**:

<p>
   <span class="math display">
      \[
         \begin{aligned}
            rad/s &amp;= RPS \cdot 2\pi  \\ \\
            \Rightarrow   104.72 rad/s &amp;= 16.67 \cdot 2\pi
         \end{aligned}\tag{Eqn:2}
      \]
   </span>
</p>


Therefore we can combine **equations 1** and **2** above into one **equation 3** below:

<p>
   <span class="math display">
      \[
         \begin{aligned}
            rad/s &amp;= RPM \cdot \frac{2\pi}{60} \\
            104.72 rad/s &amp;= 1000 \cdot \frac{2\pi}{60}
         \end{aligned}\tag{Eqn:3}
      \]
   </span>
</p>

Now that we rad/s we can calculate the angular velocity (deg/s). There are two ways to achieve this both methods are shown below in **equations 4** and **5**.

**Equation 4** first takes the approach using the knowledge that \\(1 rad/s = 57.2958^{\circ}\\) and you have precalulated using **equation 3**.

<p>
   <span class="math display">
      \[
         \begin{aligned}
            deg/s &amp;= rad/s \cdot 57.2958^{\circ} \\ 
            \Rightarrow  628.32^{\circ}/s  &amp;= 104.72 rad/s \cdot 57.2958^{\circ}
         \end{aligned}\tag{Eqn:4}
      \]
   </span>
</p>

**Equation 5** replaces the \\(2\pi\\) with 360 in ***Equation 3**


<p>
   <span class="math display">
      \[
         \begin{aligned}
            deg/s &amp;= RPM \cdot \frac{360}{60} \\
            628.32^{\circ}/s  &amp;= 1000 \cdot \frac{360}{60} \cdot 57.2958^{\circ}
         \end{aligned}\tag{Eqn:5}
      \]
   </span>
</p>

~~~admonish question title="Question: Convert 53 RPM to Angular velocity to 2 decimal places" collapsible=true

\\(318^\circ\\)

~~~

~~~admonish question title="Question: Convert 4242 RPM to Angular velocity to 2 decimal places" collapsible=true

\\(25452^{\circ}\/s\\)

~~~

-----------------------------

## 3. Setting up the circuit

Once loaded login to TinkerCad and then click on **Circuits** > **Create new Circuit**

Change the circuit name, located top-left hand side of the screen to **Direction_Control_DC_Motor\_TMP36**, see below.

<div align=center>

![](./figures/step3.png)

</div>


Next you need to add an Arduino Uno and a breadboard that need to be connected together from the 5V and GND pins of the Arduino to the power and ground rails of the breadboard.

Next you need to add an Arduino Uno and a breadboard that need to be connected together from the 5V and GND pins of the Arduino to the power and ground rails of the breadboard. 

This can be achieved by either selecting the Arduino Uno and the breadboard from\ **Components** > **Basic** components or by changing **Components** > **Basic** to **Components** > **Starter** and choosing Arduino Uno and the Breadboard starter. Please refer the image below.

<div align=center>

![](./figures/step3-1.png)

</div>

If you have chosen the Arduino and breadboard template from the **Components** > **Starter** then these two components are already connected with a corresponding 5V line(red) and GND line. 

**You now need to add:**

1. 1 x TMP36 sensor, **Components** > **Basic** at the bottom or alternatively use the search box
2. 1 x resistor, set at 1k\\(\Omega\\) or 1000\\(\Omega\\),  **Components** > **Basic** first component in the list
3. 1 x L293D, H-bridge Motor Driver, **Components** > **All** in the last item in Power control section of the list or alternatively use the search box
4. 1 x DC Motor, **Components** > **Basic**, 14th item in the list, or alternatively use the search box
5. 1 x 9V D-Cell Battery, **Components** > **Basic**, 7th item in the list, or alternatively use the search box.


Placing components (refer to the image below): 

1. Place the TMP36 so that the **Power** and **GND** is in row **4** and **6** column **h** respectively. Take a wire from the **Vout** to on row **5** column **g** to pin **A0** of the Arduino Uno. 
   
2. Place the L293D chip so that the white dot (**enable 1 & 2** pin) is in row **12** and column **e**, therefore the pin labeled **Power 2** should be in row **19** column **e**. You should have bridge between both sides of the breadboard. 
   
3. Staying with L293D, create a red wire at row **12** column **j** into the **+** line the same row, this connects L293D **Power 1** pin to the Arduino 5V line. 
   
4. Next create a black wire at row **15** column **j** into the **-** of the same row, so this connects the L293D **Ground** pin to the Arduino GND line.
   
5. Create a new red wire just below the **Enable 1 & 2** pin of the L293D at row **12** column **d**, to pin **10** of the Ardunio Uno. 
   
6. Create an orange wire at row **13** column **c**, below **Input 1** pin of the L293D, to pin **9** of the Arduino Uno. 

7. Create an orange wire at row **18** column **d**, below **Input 2** pin of the L293D, to pin **8** of the Arduino Uno.
   
8. Get the 9V Battery and places it in vertical alignment using the rotate button top left of the control panel, so that it is parallel to the breadboard on the opposite side the Arduino Uno. 
   
9.  Create a red wire from the **Positive** terminal of the battery and connect it to row **19** column **d**, just below the L293D **Power 2** pin.
    
10. Similarly create a black wire from the **Negative** terminal of the battery and connect it to row **16** column **g**, just above the other L293D **Ground** pin.
    
11. Now place the DC motor underneath the breadboard, between rows **13** and **25**
    
12. Continuing with the DC motor, take a black wire from **Terminal 1** of the DC motor and connect it to row **14** column **a**, inline with L293D **Output 1**.

13. Similarly take a red wire from **Terminal 2** of the DC motor and connect it to row **20** column **a**

14. Lastly, take the resistor set to \\(1k\Omega\\), and rotate so that it lies horizontally, and connect **Terminal 1** pin to the row **17** column **c**, inline with L293D **Output 2**, therefore **Terminal 2** of the resistor should be connected to row **21** column **c**

For reference look at the below image for L293D functional block diagram and pin layout.

<div align=center>

![](./figures/step3-2.png)

</div>

<div align=center>

<img src="./figures/step3-3.png" style="transform:rotate(90deg);" width=50%>

</div>


## 4. Programming The Circuit

1. Once you have completed the circuit you will need to programme the Arduino Uno. Located above **Components** click the **Code Text**. 

2. Once sketch has appeared reproduce the following code:

   ~~~admonish code

   ```C++
   void setup()
   {

   }

   void loop()
   {

   }
   ```

   ~~~

### 4.1 Globale variables

1. Now you are ready to set up all the Sketch up as follows.

      ~~~admonish code

      ```C++
      #define en 10
      #define in1 9
      #define in2 8
      #define temp A0

      void setup()
      {

      }

      void loop()
      {

      }
      ```

      ~~~

      ~~~admonish example title="Explanation"

      - Firstly the variables are declared and initialised using the `#define` keyword.

      - Lines 1 to 3, define the variables `en 10`, `in1 9` and `in2 8` will reference the physical connections of the L293D Enable 1 & 2, **Input 1** and **Input 2** respectively.

      - Line 4, define the variable `temp A0` will reference the physical connection of the TMP36 `Vout` pin.

      ~~~


2. Now declare the following dynamic variables are declared and initialise them using data types `int`, `float` and `bool`.

      ~~~admonish code

      ```C++
      ...
      #define temp A0

      int pwmOutput = 12;
      float tempValue;
      float temperature;
      float rads = 0.0;
      float degrees = 0.0;
      bool movedRight = false;
      bool movedLeft = false;

      ...
      void setup()
      ```
      ~~~

      ~~~admonish example title="Explanation"

      - Line 6, `int pwmOutput = 12;`, will stores the value that will be used in the `analogWrite()` function.

      - Lines 7 and 8, variables `float tempValue; float temperature;` will store the `analogRead()` value and the converted temperature value respectively. 

      - Lines 9 and 10, variables `float rads =0.0;` and `float degrees = 0.0;` will store the calculated values for radians per second and degrees per second respectively.

      - Lines 11 and 12, variables `bool movedRight = false;` and `bool movedLeft = false;` are used to stop the motor turning continuously.

      ~~~

3. Script should now look like the below:

      ~~~admonish code collapsible=true

      ```C++
      #define en 10
      #define in1 9
      #define in2 8
      #define temp A0

      int pwmOutput = 12;
      float tempValue;
      float temperature;
      float rads = 0.0;
      float degrees = 0.0;
      bool movedRight = false;
      bool movedLeft = false;

      void setup()
      {

      }

      void loop()
      {

      }
      ```
      ~~~

      ~~~admonish todo

      - Add inline comments on lines 6 - 12 for what each variable is for, using the // comment symbols

      ~~~

### 4.2 void setup

1. The `void setup()` will be used to set the pin modes and initialise the serial.

      ~~~admonish code

      ```C++
      void setup()
      {
      Serial.begin(9600);
      pinMode(en, OUTPUT);
      pinMode(in1, OUTPUT);
      pinMode(in2, OUTPUT);
      }
      ```

      ~~~

      ~~~admonish example title="Explanation"

      - Line 16's code, `Serial.begin(9600);`, sets the Serial speed at 9600 bits per second (bps)

      - Line 17's code, `pinMode(en, OUTPUT);`, sets pin 10 on the Arduino Uno as an output so that a signal can be sent to the **Enable 1 & 2** pin of the L293D chip.

      - Line 18's and 19's code, `pinMode(in1, OUTPUT);` `pinMode(in2, OUTPUT)`, sets pin 9 and 8 on the Arduino Uno as an output so that a signal can be sent to the **Input 1 & 2** pin of the L293D chip respectively.

      ~~~

2. Script should now look like the below:

      ~~~admonish code collapsible=true

      ```C++
      #define en 10
      #define in1 9
      #define in2 8
      #define temp A0

      int pwmOutput = 12;
      float tempValue;
      float temperature;
      float rads = 0.0;
      float degrees = 0.0;
      bool movedRight = false;
      bool movedLeft = false;

      void setup()
      {
      Serial.begin(9600);
      pinMode(en, OUTPUT);
      pinMode(in1, OUTPUT);
      pinMode(in2, OUTPUT);
      }

      void loop()
      {

      }
      ```
      ~~~

      ~~~admonish todo

      - Add inline comments on lines 16 - 19 for what each variable is for, using the // comment symbols

      ~~~


### 4.3 void loop

1.  Reproduce the following code below: 

      ~~~admonish code

      ```C++
      void loop()
      {
      tempValue = analogRead(temp);
      temperature = ((tempValue*(5.0/1024.0))-0.5)/0.01;

      if( temperature <= 30.0 && movedRight == false)
      {
         motorInstructions();
         debugger();

         digitalWrite(in1, LOW);
         digitalWrite(in2, HIGH);
         delay(1000);
         digitalWrite(in2, LOW);
         movedRight = true;
         movedLeft = false;
      }
      else if ( temperature >= 40.0 && movedLeft == false)
      {
         motorInstructions();
         debugger();

         digitalWrite(in1, HIGH);
         digitalWrite(in2, LOW);
         delay(1000);
         digitalWrite(in1, LOW);
         movedLeft = true;
         movedRight = false;
      }
      }
      ```

      ~~~

      ~~~admonish example title="Explanation"

      - Starting with line 24, the code `tempValue = analogRead(temp);` will read the TMP36 wired to pin A0 of the Arduino, and convert voltage to the Analogue Digital Converted value. 
      
      - Remember the that voltage rang is 0V to 5V and the ADC of the Arduino is 10-bits, so its range is 0 - 1023.

      - Line 25's code, `temperature = ((tempValue*(5.0/1024.0))-0.5)/0.01;}`, converts the the `temp` value, (0 - 358) to Celsius with a range of \\(-40^{\circ}C\\) to \\(125^{\circ}C\\), see **equation 6**.

      
      <p>
         <span class="math display">
            \[
               \begin{aligned}
                  temperature = \cfrac{\left(\left(tempValue \cdot \left( \cfrac{5.0V}{1024}\right)\right)-0.5\right)}{0.01}\\ 
                  \Rightarrow 26.17^{\circ}C = \cfrac{\left(\left(156 \cdot \left( \cfrac{5.0V}{1024}\right)\right)-0.5\right)}{0.01} 
               \end{aligned}\tag{Eqn:6}
            \]
         </span>
      </p>

      ~~~

      ~~~admonish todo

      - Add inline comments on lines 24 - 25 for what each variable is for, using the // comment symbols

      ~~~

2. Now that the `temperature` value has been calculated, lines 27 and 39 can be explained.

      ~~~admonish example title="Explanation"
      
      - Line 27's code, `if( temperature <= 30.0 && movedRight == false)`, checks to see if the `temperature` is less than or equal to, `<=`, 30.0. If this condition is `true` then the second part of the conditional statement can be checked, using `&&`. the boolean (true or false) variable `movedRight == false` is compared for equality `==`, remember a single `=` means assign the right hand side to the left hand side. Now if both conditions are true then the code between lines 29 and 37 will be executed. If either statement is false, then then line 39 is executed. 

      - Line 39's code is much the same as line 27's, but the `temperature` has to be greater or equal to, `>=`, 40.0 and `movedLeft` must be false. If both statements are true then lines 41 to 49 are executed, if not then the programme loops back to the line 24, and the process starts again. 

      ~~~

3. Now we can look inside lines 29 to 30 & lines 40 to 49, you probably can see that there are only a few differences between the two blocks of code. We will look at lines 29, 30, 41 and 42 later. 

      ~~~admonish example title="Explanation"
      
      - Lets look at lines 32, 33 and 44 and 45, where the two sets of lines are polar opposites of each other. The `digitalWrite(in1, LOW);` `digitalWrite(in1, HIGH);` & `digitalWrite(in2, LOW);` `digitalWrite(in2, HIGH);`  changes the direction the motor spins. 

      - Looking at the block diagram of the L293D, we can see that Input 1, and Input 2, both pin 3 and 7 on the L293D change the direction of the motor.

         <div align=center>

         ![](./figures/step3-2.png)

         </div>

      - Lines 34 and 46 code, `delay(1000)`,allowing the motor to turn in that direction for 1 second.

      - Lines 36, 37 & 48, 49 both set the `movedLeft` and `movedRight` variables true or false.

      ~~~

      ~~~admonish todo

      - Add inline comments on lines 33 - 35 & 44 - 47 for what each variable is for, using the // comment symbols

      ~~~

4. Now it is time to return to lines 29 & 41, both sets of lines do the same things so look below at the code for `motorInstructions();`, add to end of the script after the closing `}` of the `void loop()`.

      ~~~admonish code

      ```C++
      void motorInstructions()
      {
      rads = 53.0 * (2*3.1415926/60.0);
      degrees = rads * 57.2958;
      analogWrite(en, pwmOutput);
      }
      ```

      ~~~

      ~~~admonish example title="Explanation"
   
      - Let's first look at line 55's code, `rads = 53.0 * (2*3.1415926/60.0);`, calculates the radians per second using **equation 3**. Where \\(\pi\\) is shown to 7 decimal places. The `53.0` the average speed the DC motor in response to the resistors value of \\(1k\Omega\\).

      - Line 56's code, `degrees = rads * 57.2958;`, which is taken from **equation 4**, to calculate the degrees per second. 

      - Line 57's code, `analogWrite(en, pwmOutput);`, outputs the PWM signal,`pwmOutput` value of 12 to the `en` pin, to the **Enable 1 & 2** pin of the L293D. The value of `en`, 12, again is preset because of the resistors value of \\(1k\Omega\\).
      
      ~~~

5. So lastly, lets look at the function `debugger();` called on lines 30 and 42 of the `void loop()` function. 


      ~~~admonish code

      ```C++
      void debugger()
      {
      Serial.print("Temperature: ");
      Serial.print(temperature);
      Serial.print("  | RAD/s: ");
      Serial.print(rads);
      Serial.print("   | Degree/s: ");
      Serial.println(degrees);
      }
      ```

      ~~~

      ~~~admonish example title="Explanation"
      
      - So we can see that lines 62 to 67 output information about the variables to the serial montior.

      ~~~

## 5. Extensions     

1. Now you have a better understanding of the circuit and the code ...

      ~~~admonish todo

      - What happens to the motor when the resistance value is changed? Adjust line 55's rpm value to match the motors rpm value. 

      - With the knowledge that each line of code takes *some* time to execute, specifically mathematical functions. Would pre calculating all of the constants in an equation speed up the programme? Try it.

      -  Explore the code, make changes to experiment with different temperature values, timings, conditional statements (if, else if).

      ~~~

## 6 Full code


~~~admonish code title="Code: Full code is seen below" collapsible=true

```C++
#define en 10
#define in1 9
#define in2 8
#define temp A0

int pwmOutput = 12;
float tempValue;
float temperature;
float rads = 0.0;
float degrees = 0.0;
bool movedRight = false;
bool movedLeft = false;

void setup()
{
  Serial.begin(9600);
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop()
{
  tempValue = analogRead(temp);
  temperature = ((tempValue*(5.0/1024.0))-0.5)/0.01;

  if( temperature <= 30.0 && movedRight == false)
  {
    motorInstructions();
    debugger();
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    delay(1000);
    digitalWrite(in2, LOW);
    movedRight = true;
    movedLeft = false;
  }
  else if ( temperature >= 40.0 && movedLeft == false)
  {
    motorInstructions();
    debugger();
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    delay(1000);
    digitalWrite(in1, LOW);
    movedLeft = true;
    movedRight = false;
  }
}

void motorInstructions()
{
  rads = 53.0 * (2*3.1415926/60.0);
  degrees = rads * 57.2958;
  analogWrite(en, pwmOutput);
}

void debugger()
{
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("  | RAD/s: ");
  Serial.print(rads);
  Serial.print("   | Degree/s: ");
  Serial.println(degrees);
}
```
~~~


## 7. Full circuit

~~~admonish tip

- If you have struggled to get there.... here is full project you can tinker with:

  - [https://www.tinkercad.com/things/500whC8fFRJ-directioncontroldcmotortmp36?sharecode=fBubymPvRSDC1KoBmx_MPGvHT6z46C5EhW0etZqKRTc](https://www.tinkercad.com/things/500whC8fFRJ-directioncontroldcmotortmp36?sharecode=fBubymPvRSDC1KoBmx_MPGvHT6z46C5EhW0etZqKRTc)


~~~

