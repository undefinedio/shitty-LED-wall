int pinMatrix[4][4] = {
  A1,  13,  0, 2,
  7, 5, 8, 10,
  A0,  12,  1, 3,
  6, 4, 9, 11
};

int squares2[][4][4] = {
  {
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , LOW ,
    LOW , HIGH , HIGH , LOW ,
    LOW , HIGH , HIGH , LOW ,
    //
  }, 
   {
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  }, 
   {
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  }, 
};

int lineSpin[][4][4] = {
  {
    LOW , HIGH , HIGH , HIGH ,
    HIGH , LOW , HIGH , HIGH ,
    HIGH , HIGH , LOW , HIGH ,
    HIGH , HIGH , HIGH , LOW ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , LOW , HIGH ,
    HIGH , LOW , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
};

int snake[][4][4] = {
  {
    LOW , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    LOW , LOW , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    LOW , LOW , LOW , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , LOW , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    HIGH , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , LOW , LOW , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    HIGH , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    HIGH , HIGH , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    HIGH , HIGH , HIGH , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
};


int lines2[][4][4] = {
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
};


int leftToRight[][4][4] = {
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
  },
  {
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
  },
  {
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , HIGH , HIGH ,
  },
  {
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , HIGH ,
  },
  {
    HIGH , LOW , LOW , LOW ,
    HIGH , LOW , LOW , LOW ,
    HIGH , LOW , LOW , LOW ,
    HIGH , LOW , LOW , LOW ,
  },
  {
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , LOW , LOW ,
  },
  {
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , LOW ,
  }
};

int equalizer1[][4][4] = {
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , HIGH ,
    //
  },
  {
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },

  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , HIGH ,
    //
  },
  {
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , LOW , HIGH ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , LOW , HIGH ,
    //
  },
  {
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , LOW ,
    //
  },
  {
    LOW , HIGH , HIGH , LOW ,
    LOW , HIGH , HIGH , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , HIGH , HIGH , LOW ,
    //
  },
  {
    HIGH , LOW , HIGH , LOW ,
    HIGH , LOW , HIGH , LOW ,
    LOW , LOW , LOW , LOW ,
    HIGH , LOW , HIGH , LOW ,
    //
  },
  {
    HIGH , LOW , HIGH , LOW ,
    HIGH , LOW , HIGH , LOW ,
    LOW , LOW , LOW , LOW ,
    HIGH , LOW , HIGH , LOW ,
    //
  },
  {
    HIGH , HIGH , HIGH , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    LOW , LOW , LOW , LOW ,
    //
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    //
  },
};

int outToMid[][4][4] = {
  {
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
  },
};

int inToMid[][4][4] = {
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
  },

  {
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    LOW , LOW , LOW , LOW ,
  },
  {
    LOW , LOW , LOW , LOW ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
  },

};

int rightToLeft[][4][4] = {
  {
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , LOW ,
    HIGH , HIGH , HIGH , LOW ,
  },
  {
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , LOW , LOW ,
    HIGH , HIGH , LOW , LOW ,
  },
  {
    HIGH , LOW , LOW , LOW ,
    HIGH , LOW , LOW , LOW ,
    HIGH , LOW , LOW , LOW ,
    HIGH , LOW , LOW , LOW ,
  },
  {
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , HIGH ,
    LOW , LOW , LOW , HIGH ,
  },
  {
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , HIGH , HIGH ,
    LOW , LOW , HIGH , HIGH ,
  },
  {
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
    LOW , HIGH , HIGH , HIGH ,
  },
  {
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
    HIGH , HIGH , HIGH , HIGH ,
  },
};

int arrowRightNotReally[][4][4] = {
  {
    LOW , HIGH , HIGH , LOW ,
    HIGH , LOW , HIGH , HIGH ,
    HIGH , HIGH , LOW , HIGH ,
    HIGH , LOW , HIGH , HIGH ,
  },
  {
    HIGH , LOW , HIGH , HIGH ,
    HIGH , HIGH , LOW , HIGH ,
    LOW , HIGH , HIGH , LOW ,
    HIGH , HIGH , LOW , HIGH ,
  },
  {
    HIGH , HIGH , LOW , HIGH ,
    LOW , HIGH , HIGH , LOW ,
    HIGH , LOW , HIGH , HIGH ,
    LOW , HIGH , HIGH , LOW ,
  }

};


int checkers[][4][4] = {
  {
    LOW , HIGH , LOW , HIGH ,
    HIGH , LOW , HIGH , LOW ,
    LOW , HIGH , LOW , HIGH ,
    HIGH , LOW , HIGH , LOW ,
  },
  {
    HIGH , LOW , HIGH , LOW ,
    LOW , HIGH , LOW , HIGH ,
    HIGH, LOW , HIGH , LOW ,
    LOW, HIGH , LOW , HIGH ,
  }
};

void onOff(int cols, int times, int speed)
{
  //this nested for loop will turn each LED on and off in sequence
  for (int t = 0; t < times; t++) { //times
    for (int i = 0; i < 4; i++) {

      for (int j = 0; j < cols; j++) {

        digitalWrite(pinMatrix[i][j], LOW);

        delay(speed);

        digitalWrite(pinMatrix[i][j], HIGH);

      }//close for i

    }//close for j
  }
}

void offOn(int cols, int times, int speed)
{
  //this nested for loop will turn each LED on and off in sequence
  for (int t = 0; t < times; t++) { //times
    for (int i = 0; i < 4; i++) {

      for (int j = 0; j < cols; j++) {

        digitalWrite(pinMatrix[i][j], HIGH);

        delay(speed);

        digitalWrite(pinMatrix[i][j], LOW);

      }//close for i

    }//close for j
  }
}

void doAnimation(int scene[][4][4], int size, int times, int speed)
{
  for (int t = 0; t < times; t++) { //times
    for (int i = 0; i < size; i++) { //scene
      for (int j = 0; j < 4; j++) { // row
        for (int k = 0; k < 4; k++) { // col
          digitalWrite(pinMatrix[j][k] , scene[i][j][k] );
        }
      }

      delay(speed);
    }
  }
}

void on(int cols, int times, int speed)
{
  //this nested for loop will turn each LED on and off in sequence
  for (int t = 0; t < times; t++) { //times
    for (int i = 0; i < 4; i++) {

      for (int j = 0; j < cols; j++) {
        digitalWrite(pinMatrix[i][j], LOW);

      }//close for i

      delay(speed);
    }//close for j
  }
}

void off(int cols, int times, int speed)
{
  //this nested for loop will turn each LED on and off in sequence
  for (int t = 0; t < times; t++) { //times
    for (int i = 0; i < 4; i++) {

      for (int j = 0; j < cols; j++) {
        digitalWrite(pinMatrix[i][j], HIGH);

      }//close for i

      delay(speed);
    }//close for j
  }
}

void setup()
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      pinMode(pinMatrix[i][j], OUTPUT);
    }//close for i
  }//close for j
}

void loop()
{
  doAnimation(snake, (sizeof(snake) / sizeof(int) / 4 / 4 ), 8, 100);

  delay(200);
  offOn(4, 8 , 100);

  delay(200);
  doAnimation(lines2, (sizeof(lines2) / sizeof(int) / 4 / 4 ), 8, 150);

  delay(200);
  doAnimation(lineSpin, (sizeof(lineSpin) / sizeof(int) / 4 / 4 ), 8, 100);

  delay(200);
  doAnimation(outToMid, (sizeof(outToMid) / sizeof(int) / 4 / 4 ), 8, 100);

  delay(200);
  doAnimation(arrowRightNotReally, (sizeof(arrowRightNotReally) / sizeof(int) / 4 / 4 ), 4, 300);

  delay(200);
  doAnimation(leftToRight, (sizeof(leftToRight) / sizeof(int) / 4 / 4 ), 4, 150);

  delay(200);
  doAnimation(checkers, (sizeof(checkers) / sizeof(int) / 4 / 4 ), 4, 200);

  delay(200);
  doAnimation(rightToLeft, (sizeof(rightToLeft) / sizeof(int) / 4 / 4 ), 4, 150);

  delay(200);
  doAnimation(outToMid, (sizeof(outToMid) / sizeof(int) / 4 / 4 ), 4, 200);
  
  delay(200);
  doAnimation(squares2, (sizeof(squares2) / sizeof(int) / 4 / 4 ), 4, 150);
  
  delay(200);
  doAnimation(inToMid, (sizeof(inToMid) / sizeof(int) / 4 / 4 ), 4, 200);

  delay(200);

  doAnimation(equalizer1, (sizeof(equalizer1) / sizeof(int) / 4 / 4 ), 8, 150);

  delay(200);

  onOff(4, 8 , 80);

  delay(200);
  on(4, 8 , 100);

  delay(200);
  off(4, 8 , 300);
}
