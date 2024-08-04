#include <Servo.h>

// إنشاء كائن servo
Servo myServo;

// تعريف رقم الـ pin المستخدم لمحرك السيرفو
int servoPin = 9;

// إعداد متغير للتحكم بزاوية الفم
int angle = 0;

void setup() {
  // ربط كائن السيرفو بالـ pin المحدد
  myServo.attach(servoPin);
}

void loop() {
  // فتح الفم بزاوية 0 إلى 90 درجة
  for (angle = 0; angle <= 90; angle += 1) {
    myServo.write(angle);
    delay(15); // الانتظار لفترة قصيرة للسماح للسيرفو بالتحرك
  }
  delay(1000); // الانتظار لمدة ثانية واحدة والفم مفتوح

  // إغلاق الفم بزاوية 90 إلى 0 درجة
  for (angle = 90; angle >= 0; angle -= 1) {
    myServo.write(angle);
    delay(15); // الانتظار لفترة قصيرة للسماح للسيرفو بالتحرك
  }
  delay(1000); // الانتظار لمدة ثانية واحدة والفم مغلق
}
