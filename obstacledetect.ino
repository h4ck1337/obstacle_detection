int i,A=2,B=3,C=4,D=5,ir1=6,ir2=7,ir3=8;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);   
  pinMode(8,INPUT);
  
  }
void motor_forward(int dc)
{
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(dc);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(100-dc);
}
void motor_stop()
{
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
}
void turn(int dc)
{digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
delay(dc);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(100-dc);
  }
int f=0;
void motor_backward(int dc)
{if(digitalRead(ir3)==LOW)
{digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(dc);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
delay(100-dc);}
else
{for(i=0;i<10;i++)
{turn(50);}
}
}

void loop() 
{
if(digitalRead(ir1)==HIGH && digitalRead(ir2)==LOW)
{motor_forward(80);}
if(digitalRead(ir1)==LOW && digitalRead(ir2)==LOW && digitalRead(ir3)==LOW)
{motor_stop();
delay(1000);
for(i=0;i<10;i++)
{motor_backward(80);}
for(i=0;i<5;i++)
{turn(50);}
}  
if(digitalRead(ir1)==LOW && digitalRead(ir2)==HIGH && digitalRead(ir3)==LOW)
{motor_stop();
delay(1000);
for(i=0;i<10;i++)
{motor_backward(80);}
for(i=0;i<5;i++)
{turn(50);}
}  
if(digitalRead(ir1)==HIGH && digitalRead(ir2)==HIGH && digitalRead(ir3)==LOW)
{motor_stop();
delay(1000);
for(i=0;i<30;i++)
{motor_backward(80);}
for(i=0;i<5;i++)
{turn(50);}
}  
if(digitalRead(ir1)==HIGH && digitalRead(ir2)==HIGH && digitalRead(ir3)==LOW)
{motor_stop();
delay(1000);
for(i=0;i<30;i++)
{motor_backward(80);}
for(i=0;i<5;i++)
{turn(50);}
} 
if(digitalRead(ir1)==HIGH && digitalRead(ir2)==HIGH && digitalRead(ir3)==HIGH)
{motor_stop();  
}
if(digitalRead(ir1)==LOW && digitalRead(ir2)==LOW && digitalRead(ir3)==HIGH)
{motor_stop();  
}
if(digitalRead(ir1)==LOW && digitalRead(ir2)==HIGH && digitalRead(ir3)==HIGH)
{motor_stop();  
}

}
