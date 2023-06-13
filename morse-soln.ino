/*
MTRN Soc Morse Code excercise solution

Written by Aditya Muthukattu on 30/05/2023

*/

int dotDelay = 200;
const char string[] = "test";

// Array of all letters from a to z
char* letters[] = {
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",".---", "-.-", 
  ".-..", "--", "-.", "---", ".--.", "--.-", ".-.","...", "-", "..-", "...-",
  ".--", "-..-", "-.--", "--.."
};

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char ch;
  for(int i =0; i < strlen(string); i++ ) {
    char ch = string[i];
    if (ch >= 'a' && ch <= 'z'){
          flashSeq(letters[ch - 'a']);
      } else if (ch == ' ') {
          delay(dotDelay * 4);
      }
  }
}

// The flashSeq() function takes a pointer to a Morse code sequence as its input and flashes the LED according to that sequence.
void flashSeq (char* sequence){
    for (int i; i < 3; i++) {
        flash(sequence[i]);
    }
    delay(dotDelay*3);
}

// The flash() function turns the LED on or off for a specified amount of time, depending on the character that it is passed.
void flash(char dotDash) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (dotDash == '.') {
        delay(dotDelay);
    }
    else if (dotDash == '-')
    {
        delay(dotDelay * 3);
    }
    digitalWrite(LED_BUILTIN, LOW); 
    delay(dotDelay);
}
