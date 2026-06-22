# Reaction-Time-game
<br>
<br>
#Main features:
<br>
-LED Chaser
<br>
-Win, Lose sequence
<br>
-Speed/Difficultly control
<br>
-Sounds
<br>
-Randomised Target LEDs
<br>
<br>
This is a Reaction time game that utilises a led chaser to imporve the reaction time of the user in a fun manner. Along with helping begginers learn key arduino and coding concepts. I built this Project to improve my arduino skills and understanding of basic c++. I could have built any other project too but I specificly built this as it would help me improve my reaction time and therefore improve in my sport.  
<br>
<br>
This game utilises 8 LEDS (2 LEDS must be of the same color and another pair of LEDS can't be of the same color) , 8 220 OHM resistors, 2 Push buttons, 1 Potentiometer, 1 Piezo buzzer,  1 Arduino UNO and Some Jumper Wires. 
<br>
<br>
Once the the arduino is powered on the LEDs connected to PINS 0 and 1 will light up to show that there is power. After both of these LEDs turn of a random LED will turn on which the user will have to catch in the LED chaser. Once the user remembers the LED they must press the start button causing the chaser to start. The user the use the potentiometer to control the speed of the chaser. They user will have to use the catch button to catch the LED. Depending on the outcome either a losing or winning sequence will play. The user can continue playing on the same LED and also change the difficulty using the Potentiometer, but they can also change the LED by reseting the arduino UNO.
<br>
<br>
Making this project helped me learn how to use PORTD on an Arduino along with refining my skills in using the millis() function, varialbles and arrays
along with utilising multiple loops and conditions. I also learnt how to set states and conditions in order to perform certain actions. 
<br>
Some challenges I faced while making this project were that due to my over reliance on the the delay() function the code kept freezing which forced me to learnand 
adopt the millis() function. While I strugled control the code and efficiently control user input forcing me to learn how to use bits and arrays along with 
creating states and conditions to perform tasks and keep the game going without continouisly having to reset the arduino. I also struggeled to keep the game going 
on the same LED, without RESETING the arduino which helped me learn the importance of formating my code and understand how the position of each command matters.
<br>
