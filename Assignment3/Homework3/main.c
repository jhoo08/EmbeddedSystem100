int main()
{
  *((unsigned int*)0x40023830) = 0x01; //Enable clock to GPIOA
  *((unsigned int*)0x40020000) = 0xA8000400; // Set GPIA to output
  int counter = 0;
  while (1)
  {
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
    //the start of the letter J  (dot)
    
     *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter J (first dash)  
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter J (third dash)
   
   *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 6000000) //turn off
    {
      counter++;
    }
    //break between "J" and "A"
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter A (first dot) 
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 6000000) //turn off
    {
      counter++;
    }
   // letter A (first dash)
    
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 600000) //turn off
    {
      counter++;
    }
    //Break between "A" and "M"
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter M (first dash)
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 6000000) //turn off
    {
      counter++;
    }
   // letter M (second dash)
    
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 6000000) //turn off
    {
      counter++;
    }
    //break between "M" and "I"

    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter I (first dot)
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter I (Second dot)
    
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 6000000) //turn off
    {
      counter++;
    }
    //Break between "I" and "S"
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter S (First dot)
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter S (Second dot)
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter S (Third dot)

    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 6000000) //turn off
    {
      counter++;
    }
    //break between "S" and "O"
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter O (First  dash)

    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter O (Second dash)
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter O (Third dash)
    
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 6000000) //turn off
    {
      counter++;
    }
    //break between "O" to "N"
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 6000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter N (First dash)
    
    *((unsigned int*)0x40020014) = 0x20; //LEN ON
    counter = 0;
    while(counter < 2000000) //turn on
    {
      counter++;
    }
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 2000000) //turn off
    {
      counter++;
    }
   // letter N (second dot )
    
    *((unsigned int*)0x40020014) = 0x00; //LED OFF
    counter = 0;
    while (counter < 14000000) //turn off
    {
      counter++;
    }
    //add ending to encoding of my  name    
  }
  return 0;
}
