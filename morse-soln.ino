/*
MTRNSoc Morse Code excercise

Written by Aditya Muthukattu on 12/06/2023

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
  // The pinmode function Configures the specified pin to behave 
  // either as an input or an output.
  // Here we initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// This code runs infinitely and is the body of our program
void loop() {
  // To display the string as morse code we need to iterate through it character by character
  // So first lets initialize a character
  char ch;
  // And create a loop with a range from 0 to the length of the string
  for(int i = 0; i < strlen(string); i++ ) {
    // now we set char to equal the character at the current index
    char ch = string[i];
    // Now check if the character is within the range a to z.
    if (ch >= 'a' && ch <= 'z'){
          // now we find the letter's morse code pattern by subtracting the ascii value of the character from that of the letter 'a'
          flashCharacter(letters[ch - 'a']);
      } else if (ch == ' ') {
          // if the character is a space wait 4 units of time.
          delay(dotDelay * 4);
      }
  }
}

// The flashCharacter() function takes a pointer to a string of dots and dashes (a "pattern")
// It then loops through the pattern and flashes the light
void flashCharacter (char* pattern){
    // we use the function strlen to calculate the length of the morse code pattern for the character
    // For loops are similar to while loops, however we can see the start, end, and increment values all on one line
    for (int i = 0; i < strlen(pattern); i++) {
        // for every dot or dash in the pattern we call the flash funciton to flash the LED
        flash(pattern[i]);
    }
    // After each character we have a 3 dot long break
    delay(dotDelay*3);
}
// The flash() function turns the LED on or off for a specified amount of time, depending on if it is passed a dot or a dash
void flash(char dotOrDash) {
    // We use the digitalWrite funciton to set the value of the specified pin
    // Here we are turning the built in LED on
    digitalWrite(LED_BUILTIN, HIGH);

    // We then need to decide how long the LED should stay on for. To do this we use the delay funciton
    // the delay function will pause the program for a specified number of milliseconds
    if (dotOrDash == '.') {
      // If the character is a dot we must wait one unit of time (200ms as defined above)
        delay(dotDelay);
    } else if (dotOrDash == '-') {
        // If the character is a dash we must wait 3 units of time
        delay(dotDelay * 3);
    }

    // After waiting the appropriate amount of time, we turn the LED off, and wait one more unit of time before the next character
    digitalWrite(LED_BUILTIN, LOW); 
    delay(dotDelay);
}
