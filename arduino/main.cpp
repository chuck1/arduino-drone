

Accel_Gyro ag;

Flight_Control fc;

void setup()
{
}

void loop()
{
  // read and store ag data
  ag.read();
  
  // user input
  ui.read();
  
  // calculate new motor speeds based on accelgyro and user input
  fc.calc(ag, ui);
  // and write to speed controllers
  fc.write();
  
  // camera
  cam.read_and_send();
}
