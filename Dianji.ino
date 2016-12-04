int pinI1=8;//定义I1接口
int pinI2=9;//定义I2接口
int speedpin=11;//定义EA(PWM调速)接口
void setup()
{
  pinMode(pinI1,OUTPUT);//定义该接口为输出接口
  pinMode(pinI2,OUTPUT);
  pinMode(speedpin,OUTPUT);
}
void loop()
{ 
  analogWrite(speedpin,100);//输入模拟值进行设定速度
  delay(2000);
  digitalWrite(pinI1,LOW);//使直流电机顺时针转
  digitalWrite(pinI2,HIGH);
  analogWrite(speedpin,100);
  delay(2000);
  digitalWrite(pinI1,HIGH);//使直流电机逆时针转
  digitalWrite(pinI2,LOW);
  analogWrite(speedpin,100);
  delay(2000);
  digitalWrite(pinI1,HIGH);//使直流电机停止
  digitalWrite(pinI2,HIGH);
  delay(2000);
}
