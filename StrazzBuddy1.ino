//To be ran on Arduino IDE
#include <Wire.h>
//Make sure necessary packages are downloaded
#include <Adafruit_SSD1306.h>

//Make Sure Address is Correct
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(128, 64, &Wire, OLED_ADDRESS);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(28, 20);
  display.println("STRAZZ");
  display.setCursor(35, 40);
  display.println("TUNED");
  display.display();
  delay(2000);
  display.clearDisplay();
  sleep();
  wakeUp();
}

void loop() {

  int randomNum = random(5);

  if (randomNum == 1) {
    regEyes();
    randomNum = random(5);
  }
  if (randomNum == 2) {
    heart();
    randomNum = random(5);
  }
  if (randomNum == 3) {
    carrotEyes();
    randomNum = random(5);
  }
  if (randomNum == 4) {
    sideEye();
    randomNum = random(5);
  }
  if (randomNum == 5) {
    sideEye();
    randomNum = random(5);
  }
}

void sleep() {
  display.clearDisplay();
  //blink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  //small mouth
  display.fillRect(48, 45, 32, 8, WHITE);
  display.fillCircle(48, 48, 3, WHITE);
  display.fillCircle(80, 48, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();


  //yawn
  //blink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  display.fillCircle(64, 50, 8, WHITE);
  display.display();
  delay(2000);
  display.clearDisplay();
  //blink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  //small mouth
  display.fillRect(48, 45, 32, 8, WHITE);
  display.fillCircle(48, 48, 3, WHITE);
  display.fillCircle(80, 48, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();
  //yawn
  //blink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  display.fillCircle(64, 50, 8, WHITE);
  display.display();
  delay(2000);
}

void wakeUp() {
  display.clearDisplay();
  //blink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //left wink
  display.fillCircle(46, 32, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(2000);
  display.clearDisplay();

  //blink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();

  //right wink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillCircle(80, 32, 8, WHITE);


  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);
  display.display();
  delay(2000);
  display.clearDisplay();

  //blink
  display.fillRect(36, 28, 20, 8, WHITE);
  display.fillRect(76, 28, 20, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();

  // eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, WHITE);
  display.fillCircle(80, 32, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //blink
  display.fillRect(36, 28, 20, 4, WHITE);
  display.fillRect(76, 28, 20, 4, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(50);

// eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, WHITE);
  display.fillCircle(80, 32, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();


  //blink
  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(50);
}

void regEyes() {  //Regular eyes with Blinking
  // eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, WHITE);
  display.fillCircle(80, 32, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //blink
  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(100);

  //open
  display.clearDisplay();
  display.fillCircle(48, 32, 8, WHITE);
  display.fillCircle(80, 32, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  //blink
  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);
  display.display();
  delay(100);
}

void sideEye() {
  // eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, WHITE);
  display.fillCircle(80, 32, 8, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();
  //blink
  display.fillRect(32, 28, 10, 4, WHITE);
  display.fillRect(96, 28, 10, 4, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(100);
  display.clearDisplay();

  //side eye
  display.fillCircle(32, 32, 8, WHITE);
  display.fillCircle(96, 32, 8, WHITE);

  //mouth
  display.fillRect(32, 55, 64, 8, WHITE);
  display.fillCircle(32, 58, 3, WHITE);
  display.fillCircle(96, 58, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //blink
  display.fillRect(32, 28, 10, 4, WHITE);
  display.fillRect(96, 28, 10, 4, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(100);
  display.clearDisplay();

  //side eye
  display.fillCircle(32, 32, 8, WHITE);
  display.fillCircle(96, 32, 8, WHITE);

  //mouth
  display.fillRect(32, 55, 64, 8, WHITE);
  display.fillCircle(32, 58, 3, WHITE);
  display.fillCircle(96, 58, 3, WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //blink
  display.fillRect(32, 28, 10, 4, WHITE);
  display.fillRect(96, 28, 10, 4, WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, WHITE);
  display.fillCircle(48, 58, 3, WHITE);
  display.fillCircle(80, 58, 3, WHITE);

  display.display();
  delay(100);
  display.clearDisplay();
}

void heart() {
  display.clearDisplay();

  int x1 = 44;
  int y1 = 27;
  int radius1 = 10;

  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, WHITE);

  int x2 = 84;
  int y2 = 27;
  int radius2 = 10;

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, WHITE);

  //smile
  display.fillCircle(64, 50, 12, WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, BLACK);  // hide top half of smile

  display.display();
  delay(4000);

  //blink
  display.clearDisplay();

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);
  display.display();
  delay(100);
  display.clearDisplay();

  //smile
  display.fillCircle(64, 50, 12, WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, BLACK);  // hide top half of smile


  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, WHITE);

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, WHITE);

  display.display();
  delay(4000);

  //blink
  display.clearDisplay();
  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.display();
  delay(100);
  display.clearDisplay();

  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, WHITE);

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, WHITE);

  //smile
  display.fillCircle(64, 50, 12, WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, BLACK);  // hide top half of smile


  display.display();
  delay(4000);

  //blink
  display.clearDisplay();

  display.clearDisplay();
  display.fillRect(44, 28, 10, 4, WHITE);
  display.fillRect(76, 28, 10, 4, WHITE);

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.display();
  delay(100);
  display.clearDisplay();
}

void carrotEyes() {  // ^ shape eyes
  display.clearDisplay();

  int centerX = 42;
  int centerY = 32;
  int lineLength = 10;

  // Draw the left ^ symbol
  display.drawLine(centerX - lineLength, centerY + lineLength, centerX, centerY - lineLength, WHITE);

  display.drawLine(centerX, centerY - lineLength, centerX + lineLength, centerY + lineLength, WHITE);

  int centerXl = 90;
  int centerYl = 32;

  // Draw the right ^ symbol
  display.drawLine(centerXl - lineLength, centerYl + lineLength, centerXl, centerYl - lineLength, WHITE);

  display.drawLine(centerXl, centerYl - lineLength, centerXl + lineLength, centerYl + lineLength, WHITE);

  //smile
  display.fillCircle(64, 50, 12, WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, BLACK);  // hide top half of smile

  display.display();
  delay(4000);
  display.clearDisplay();

  //blink
  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.fillRect(38, 32, 10, 4, WHITE);
  display.fillRect(84, 32, 10, 4, WHITE);
  display.display();
  delay(50);

  display.clearDisplay();
  // Draw the left ^ symbol
  display.drawLine(centerX - lineLength, centerY + lineLength, centerX, centerY - lineLength, WHITE);

  display.drawLine(centerX, centerY - lineLength, centerX + lineLength, centerY + lineLength, WHITE);

  // Draw the right ^ symbol
  display.drawLine(centerXl - lineLength, centerYl + lineLength, centerXl, centerYl - lineLength, WHITE);

  display.drawLine(centerXl, centerYl - lineLength, centerXl + lineLength, centerYl + lineLength, WHITE);

  //smile
  display.fillCircle(64, 50, 12, WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, BLACK);  // hide top half of smile

  display.display();
  delay(5000);
  display.clearDisplay();

  //blink

  //smallest mouth
  display.fillRect(54, 54, 22, 4, WHITE);

  display.fillRect(38, 32, 10, 4, WHITE);
  display.fillRect(84, 32, 10, 4, WHITE);
  display.display();
  delay(100);
  display.clearDisplay();
}