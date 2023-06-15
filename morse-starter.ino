/*
MTRNSoc Morse Code excercise starter code

*/

// Lets define a unit of time for a dot. Dashes and spaces are a multiple of this
int dotDelay = 200;

// Lets then define a string which we want to 
const char string[] = "sos";

// We also need the morse code patterns for each of the letters
char* letters[] = {
  ".-",   // a
  "-...", // b
  "-.-.", // c
  "-..",  // d
  ".",    // e
  "..-.", // f
  "--.",  // g
  "....", // h
  "..",   // i
  ".---", // j
  "-.-",  // k
  ".-..", // l
  "--",   // m
  "-.",   // n
  "---",  // o
  ".--.", // p
  "--.-", // q
  ".-.",  // r
  "...",  // s
  "-",    // t
  "..-",  // u
  "...-", // v
  ".--",  // w
  "-..-", // x
  "-.--", // y
  "--.."  // z
};

// This code is run once at the start of the program
void setup() {
  // The pinMode function Configures the specified pin to behave 
  // either as an input or an output.
  // Here we initialize digital pin LED_BUILTIN as an output.
  
}

// This code runs infinitely and is the body of our program
void loop() {
  // To display the string as morse code we need to iterate through it character by character
  // So first lets initialize a character:
  
  
  // And create a loop with a range from 0 to the length of the string:
  for () {
    // now set char to equal the character at the current index:
    
    // Now check if the character is within the range a to z. by adding two conditional statements in the brackets
    if (){
          // now we find the letter's morse code pattern by subtracting the ascii value of 'a' from that of the character
  
      } else if (ch == ' ') {
          // if the character is a space wait 4 units of time.
          
      }
  }
}

// The flashCharacter() function takes a pointer to a string of dots and dashes (a "pattern")
// It then loops through the pattern and flashes the light
void flashCharacter (char* pattern){
    // Use the function strlen() to calculate the length of the morse code pattern for the character
    // Loop through the string. for every dot or dash in the pattern call the flash funciton to flash the LED
    
    // After each character we have a 3 dot long break
    delay(dotDelay*3);
}

// The flash() function turns the LED on or off for a specified amount of time, depending on if it is passed a dot or a dash
void flash(char dotOrDash) {
    // We use the digitalWrite funciton to set the value of the specified pin
    // Turn the builtin LED on:
    

    // Use an if statement to decide how long the LED should stay on for:
    

    // Now turn the LED off:

    // Now wait one unit of time:
    delay(dotDelay);
}
