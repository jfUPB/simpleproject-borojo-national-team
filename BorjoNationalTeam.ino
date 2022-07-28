void setup()
{
  Serial.begin(115200);
}

void loop()
{
    static uint32_t counter = 0;
    static uint32_t lasTime = 0;
    static const uint32_t INTERVAL = 1000;

    uint32_t currentTime = millis();

    if( (currentTime - lasTime) >= INTERVAL){
        lasTime = currentTime;
      Serial.println(counter++);
    }
}