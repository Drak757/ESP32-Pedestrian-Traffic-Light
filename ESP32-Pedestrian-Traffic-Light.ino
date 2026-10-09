const int redLed = 23;
const int yellowLed = 22;
const int greenLed = 21;
const int buttonPin = 18;

unsigned long previousTime = 0;

int trafficState = 0;

void setup()
{
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);

    pinMode(buttonPin, INPUT_PULLUP);

    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
}

void loop()
{
    unsigned long currentTime = millis();

    int buttonState = digitalRead(buttonPin);

    // STATE 0: Normal green light
    if (trafficState == 0)
    {
        if (buttonState == LOW)
        {
            previousTime = currentTime;
            trafficState = 1;
        }
    }

    // STATE 1: Wait 3 seconds before changing
    else if (trafficState == 1)
    {
        if (currentTime - previousTime >= 3000)
        {
            digitalWrite(greenLed, LOW);
            digitalWrite(yellowLed, HIGH);

            previousTime = currentTime;
            trafficState = 2;
        }
    }

    // STATE 2: Yellow for 1 second
    else if (trafficState == 2)
    {
        if (currentTime - previousTime >= 1000)
        {
            digitalWrite(yellowLed, LOW);
            digitalWrite(redLed, HIGH);

            previousTime = currentTime;
            trafficState = 3;
        }
    }

    // STATE 3: Red for 3 seconds
    else if (trafficState == 3)
    {
        if (currentTime - previousTime >= 3000)
        {
            digitalWrite(redLed, LOW);
            digitalWrite(greenLed, HIGH);

            trafficState = 0;
        }
    }
}