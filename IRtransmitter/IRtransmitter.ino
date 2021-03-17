#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

int RECV_PIN = 11; // define input pin on Arduino 
IRrecv irrecv(RECV_PIN); 
decode_results results; // decode_results class is defined in IRremote.h

void setup() { 
  Serial.begin(9600); 
  irrecv.enableIRIn(); // Start the receiver 
} 

void loop() { 
  if (irrecv.decode(&results)) {
    Serial.println(results.value); 
    if(results.value == 3772784863)
    Serial.println("Lmao");
    irrecv.resume(); // Receive the next value 
  }
  delay (100); // small delay to prevent reading errors
}
