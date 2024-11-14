# Functions:

> -  [`void processCommand()`](#function-void-processcommand)
>
> - [`int whichMotor(String l_Command, String l_Motor)`](#function-int-whichmotorstring-l_command-string-l_motor)
>
> - [`void moveServo(Servo &servo, int &currentPosition, int targetPosition, int stepDelay, int minPosition, int maxPosition, const char *servoName)`](#function-void-moveservoservo-servo-int-currentposition-int-targetposition-int-stepdelay-int-minposition-int-maxposition-const-char-servoname)
>
> - [`void moveBase(int stepDelay, int vBase)`](#function-void-movebaseint-stepdelay-int-vbase)
>
> - [`void moveShoulder(int stepDelay, int vShoulder)`](#function-void-moveshoulderint-stepdelay-int-vshoulder)
>
> - [`void moveElbow(int stepDelay, int vElbow)`](#function-void-moveelbowint-stepdelay-int-velbow)
>
> - [`void moveWrist_Ver(int stepDelay, int vWrist_Ver)`](#function-void-movewrist_verint-stepdelay-int-vwrist_ver)
>
> - [`void moveWrist_Rot(int stepDelay, int vWrist_rot)`](#function-void-movewrist_rotint-stepdelay-int-vwrist_rot)
>
> - [`void moveGripper(int stepDelay, int vgripper)`](#function-void-movegripperint-stepdelay-int-vgripper)

## Functions Documentation:

### Function: `void initialiseRoboticArm()`

```c
void initialiseRoboticArm()
```
#### Attention:
`initialiseRoboticArm` invokes the `roboticArmBegin()` function and displays operational information to user via the command line


------------

### Function: `void processCommand()`

```c
void processCommand()
```
#### Attention:
`processCommand` actions the `String l_Command` by finding the indentifier and then the angle ie B60


------------

### Function: `int whichMotor(String l_Command, String l_Motor)`

```c
int whichMotor(String l_Command, String l_Motor)
```
Indetifies the supplied motor to move by searching the String Command and checking against the input motor

#### Attention:
Indetifies the supplied motor to move by searching the String Command and checking against the input motor

*Parameters:*

- `l_Command` is the Command received from the serail montior

- `l_motor` is the motor indentifier that must match parent condition.

*Return:*

- param angle is the new angle the identified motor will position to.

---------------

### Function: `void moveServo(Servo &servo, int &currentPosition, int targetPosition, int stepDelay, int minPosition, int maxPosition, const char *servoName)`

```c
void moveServo(Servo &servo, int &currentPosition, int targetPosition, int stepDelay, int minPosition, int maxPosition, const char *servoName)
```
**Moves a servo to a specified target position with controlled delay and position constraints.**

*Parameters:*

- `servo` The servo motor object to be controlled.

- `currentPosition` A reference to the current position variable of the servo.

- `targetPosition` The desired target angle for the servo.

- `stepDelay` Delay in milliseconds between each step, used to control movement speed.

- `minPosition` The minimum allowed position for the servo, typically between 0 and 180.

- `maxPosition` The maximum allowed position for the servo, typically between 0 and 180.

- `servoName` A character string used for debugging output to identify which servo is being moved.

----

### Function: `void moveBase(int stepDelay, int vBase)`

```c
void moveBase(int stepDelay, int vBase)
```
**Moves the servo to a specified target position with controlled delay.**

*Parameters:*

- `stepDelay` Delay in milliseconds between each step, controlling the speed of movement.

- `vBase` The target position for the servo, constrained between 0 and 180 degrees.

----

### Function: `void moveShoulder(int stepDelay, int vShoulder)`

```c
void moveShoulder(int stepDelay, int vShoulder)
```
**Moves the servo to a specified target position with controlled delay.**

*Parameters:*

- `stepDelay` Delay in milliseconds between each step, controlling the speed of movement.

- `vShoulder` The target position for the servo, constrained between 15 and 165 degrees.

---

### Function: `void moveElbow(int stepDelay, int vElbow)`

```c
void moveElbow(int stepDelay, int vElbow)
```
**Moves the servo to a specified target position with controlled delay.**

*Parameters:*

- `stepDelay` Delay in milliseconds between each step, controlling the speed of movement.

- `vElbow` The target position for the servo, constrained between 0 and 180 degrees.

-----

### Function: `void moveWrist_Ver(int stepDelay, int vWrist_Ver)`

```c
void moveWrist_Ver(int stepDelay, int vWrist_Ver)
```
**Moves the servo to a specified target position with controlled delay.**

*Parameters:*

- `stepDelay` Delay in milliseconds between each step, controlling the speed of movement.

- `vWrist_Ver` The target position for the servo, constrained between 0 and 180 degrees.

-----

### Function: `void moveWrist_Rot(int stepDelay, int vWrist_rot)`

```c
void moveWrist_Rot(int stepDelay, int vWrist_rot)
```
**Moves the servo to a specified target position with controlled delay.**

*Parameters:*

- `stepDelay` Delay in milliseconds between each step, controlling the speed of movement.

- `vWrist_rot` The target position for the servo, constrained between 0 and 180 degrees.

----

### Function: `void moveGripper(int stepDelay, int vgripper)`

```c
void moveGripper(int stepDelay, int vgripper)
```
**Moves the servo to a specified target position with controlled delay.**

*Parameters:*

- `stepDelay` Delay in milliseconds between each step, controlling the speed of movement.

- `vgripper` The target position for the servo, constrained between 10 and 73 degrees.

