int main()
{
     int i;
     int num1,num2,num3,num4,num5,num6,onum3,onum4,onum5,onum6;
     int length1=0,length2=0,length3=0,length4=0,length5=0,length6=0;
     int memory1[10],memory2[10],memory3[10],memory4[10],memory5[10],memory6[10];
     int Acounter1=0,Bcounter1=0;
     int Acounter2=0,Bcounter2=0;
     int Acounter3=0,Bcounter3=0;
     int Acounter4=0,Bcounter4=0;
     int Acounter5=0,Bcounter5=0;
     scanf("%d%d", &num1,&num2);
     onum3=num1;
     onum4=num1;
     onum5=num1;
     onum6=num1;
     while(num1>=1)
     {
         memory1[length1=length1+1]= num1%10;
         num1/=10;
     }
     while(num2>=1)
     {
         memory2[length2=length2+1]= num2%10;
         num2/=10;
     }
     for(i=4;i>=0;i--)
     {
         if(memory1[i]==memory2[i])
         {
             Acounter1=Acounter1+1;
         }
     }
      if(memory1[1]==memory2[1] && memory1[2]==memory2[2] && memory1[3]==memory2[3] && memory1[4]==memory2[4])
      {
          printf("0");
      }
      else
      {


     if(memory1[4]==memory2[3] && memory1[4]!=memory2[4])
     {
         Bcounter1=Bcounter1+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory2[2] && memory1[4]!=memory2[4])
     {
         Bcounter1=Bcounter1+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory2[1] && memory1[4]!=memory2[4])
     {
         Bcounter1=Bcounter1+1;
         memory1[4]=10;
     }
     if(memory1[3]==memory2[4] && memory1[3]!=memory2[3])
     {
         Bcounter1=Bcounter1+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory2[2] && memory1[3]!=memory2[3])
     {
         Bcounter1=Bcounter1+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory2[1] && memory1[3]!=memory2[3])
     {
         Bcounter1=Bcounter1+1;
         memory1[3]=10;
     }
     if(memory1[2]==memory2[4] && memory1[2]!=memory2[2])
     {
         Bcounter1=Bcounter1+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory2[3] && memory1[2]!=memory2[2])
     {
         Bcounter1=Bcounter1+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory2[1] && memory1[2]!=memory2[2])
     {
         Bcounter1=Bcounter1+1;
         memory1[2]=10;
     }
     if(memory1[1]==memory2[4] && memory1[1]!=memory2[1])
     {
         Bcounter1=Bcounter1+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory2[3] && memory1[1]!=memory2[1])
     {
         Bcounter1=Bcounter1+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory2[2] && memory1[1]!=memory2[1])
     {
         Bcounter1=Bcounter1+1;
         memory1[1]=10;
     }
     printf("%dA",Acounter1);
     printf("%dB\n",Bcounter1);

      }


     length1=0;
      while(onum3>=1)
     {
         memory1[length1=length1+1]= onum3%10;
         onum3/=10;
     }
       scanf("%d", &num3);
     while(num3>=1)
     {
         memory3[length3=length3+1]= num3%10;
         num3/=10;
     }
     for(i=4;i>=0;i--)
     {
         if(memory1[i]==memory3[i])
         {
             Acounter2=Acounter2+1;
         }
     }
     if(memory1[1]==memory3[1] && memory1[2]==memory3[2] && memory1[3]==memory3[3] && memory1[4]==memory3[4])
      {
          printf("0");
      }
      else{
     if(memory1[4]==memory3[3] && memory1[4]!=memory3[4])
     {
         Bcounter2=Bcounter2+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory3[2] && memory1[4]!=memory3[4])
     {
         Bcounter2=Bcounter2+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory3[1] && memory1[4]!=memory3[4])
     {
         Bcounter2=Bcounter2+1;
         memory1[4]=10;
     }
     if(memory1[3]==memory3[4] && memory1[3]!=memory3[3])
     {
         Bcounter2=Bcounter2+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory3[2] && memory1[3]!=memory3[3])
     {
         Bcounter2=Bcounter2+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory3[1] && memory1[3]!=memory3[3])
     {
         Bcounter2=Bcounter2+1;
         memory1[3]=10;
     }
     if(memory1[2]==memory3[4] && memory1[2]!=memory3[2])
     {
         Bcounter2=Bcounter2+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory3[3] && memory1[2]!=memory3[2])
     {
         Bcounter2=Bcounter2+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory3[1] && memory1[2]!=memory3[2])
     {
         Bcounter2=Bcounter2+1;
         memory1[2]=10;
     }
     if(memory1[1]==memory3[4] && memory1[1]!=memory3[1])
     {
         Bcounter2=Bcounter2+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory3[3] && memory1[1]!=memory3[1])
     {
         Bcounter2=Bcounter2+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory3[2] && memory1[1]!=memory3[1])
     {
         Bcounter2=Bcounter2+1;
         memory1[1]=10;
     }
     printf("%dA",Acounter2);
     printf("%dB\n",Bcounter2);
      }


     length1=0;
      while(onum4>=1)
     {
         memory1[length1=length1+1]= onum4%10;
         onum4/=10;
     }
       scanf("%d", &num4);
     while(num4>=1)
     {
         memory4[length4=length4+1]= num4%10;
         num4/=10;
     }
     for(i=4;i>=0;i--)
     {
         if(memory1[i]==memory4[i])
         {
             Acounter3=Acounter3+1;
         }
     }
     if(memory1[1]==memory4[1] && memory1[2]==memory4[2] && memory1[3]==memory4[3] && memory1[4]==memory4[4])
      {
          printf("0");
      }
      else
      {


     if(memory1[4]==memory4[3] && memory1[4]!=memory4[4])
     {
         Bcounter3=Bcounter3+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory4[2] && memory1[4]!=memory4[4])
     {
         Bcounter3=Bcounter3+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory4[1] && memory1[4]!=memory4[4])
     {
         Bcounter3=Bcounter3+1;
         memory1[4]=10;
     }
     if(memory1[3]==memory4[4] && memory1[3]!=memory4[3])
     {
         Bcounter3=Bcounter3+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory4[2] && memory1[3]!=memory4[3])
     {
         Bcounter3=Bcounter3+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory4[1] && memory1[3]!=memory4[3])
     {
         Bcounter3=Bcounter3+1;
         memory1[3]=10;
     }
     if(memory1[2]==memory4[4] && memory1[2]!=memory4[2])
     {
         Bcounter3=Bcounter3+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory4[3] && memory1[2]!=memory4[2])
     {
         Bcounter3=Bcounter3+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory4[1] && memory1[2]!=memory4[2])
     {
         Bcounter3=Bcounter3+1;
         memory1[2]=10;
     }
     if(memory1[1]==memory4[4] && memory1[1]!=memory4[1])
     {
         Bcounter3=Bcounter3+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory4[3] && memory1[1]!=memory4[1])
     {
         Bcounter3=Bcounter3+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory4[2] && memory1[1]!=memory4[1])
     {
         Bcounter3=Bcounter3+1;
         memory1[1]=10;
     }
     printf("%dA",Acounter3);
     printf("%dB\n",Bcounter3);
      }



     length1=0;
      while(onum5>=1)
     {
         memory1[length1=length1+1]= onum5%10;
         onum5/=10;
     }
       scanf("%d", &num5);
     while(num5>=1)
     {
         memory5[length5=length5+1]= num5%10;
         num5/=10;
     }
     for(i=4;i>=0;i--)
     {
         if(memory1[i]==memory5[i])
         {
             Acounter4=Acounter4+1;
         }
     }
     if(memory1[1]==memory5[1] && memory1[2]==memory5[2] && memory1[3]==memory5[3] && memory1[4]==memory5[4])
      {
          printf("0");
      }
      else{
     if(memory1[4]==memory5[3] && memory1[4]!=memory5[4])
     {
         Bcounter4=Bcounter4+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory5[2] && memory1[4]!=memory5[4])
     {
         Bcounter4=Bcounter4+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory5[1] && memory1[4]!=memory5[4])
     {
         Bcounter4=Bcounter4+1;
         memory1[4]=10;
     }
     if(memory1[3]==memory5[4] && memory1[3]!=memory5[3])
     {
         Bcounter4=Bcounter4+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory5[2] && memory1[3]!=memory5[3])
     {
         Bcounter4=Bcounter4+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory5[1] && memory1[3]!=memory5[3])
     {
         Bcounter4=Bcounter4+1;
         memory1[3]=10;
     }
     if(memory1[2]==memory5[4] && memory1[2]!=memory5[2])
     {
         Bcounter4=Bcounter4+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory5[3] && memory1[2]!=memory5[2])
     {
         Bcounter4=Bcounter4+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory5[1] && memory1[2]!=memory5[2])
     {
         Bcounter4=Bcounter4+1;
         memory1[2]=10;
     }
     if(memory1[1]==memory5[4] && memory1[1]!=memory5[1])
     {
         Bcounter4=Bcounter4+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory5[3] && memory1[1]!=memory5[1])
     {
         Bcounter4=Bcounter4+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory5[2] && memory1[1]!=memory5[1])
     {
         Bcounter4=Bcounter4+1;
         memory1[1]=10;
     }
     printf("%dA",Acounter4);
     printf("%dB\n",Bcounter4);

      }



     length1=0;
      while(onum6>=1)
     {
         memory1[length1=length1+1]= onum6%10;
         onum6/=10;
     }
       scanf("%d", &num6);
     while(num6>=1)
     {
         memory6[length6=length6+1]= num6%10;
         num6/=10;
     }
     for(i=4;i>=0;i--)
     {
         if(memory1[i]==memory6[i])
         {
             Acounter5=Acounter5+1;
         }
     }
     if(memory1[1]==memory6[1] && memory1[2]==memory6[2] && memory1[3]==memory6[3] && memory1[4]==memory6[4])
      {
          printf("0");
      }
      else{
     if(memory1[4]==memory6[3] && memory1[4]!=memory6[4])
     {
         Bcounter5=Bcounter5+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory6[2] && memory1[4]!=memory6[4])
     {
         Bcounter5=Bcounter5+1;
         memory1[4]=10;
     }
     if(memory1[4]==memory6[1] && memory1[4]!=memory6[4])
     {
         Bcounter5=Bcounter5+1;
         memory1[4]=10;
     }
     if(memory1[3]==memory6[4] && memory1[3]!=memory6[3])
     {
         Bcounter5=Bcounter5+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory6[2] && memory1[3]!=memory6[3])
     {
         Bcounter5=Bcounter5+1;
         memory1[3]=10;
     }
     if(memory1[3]==memory6[1] && memory1[3]!=memory6[3])
     {
         Bcounter5=Bcounter5+1;
         memory1[3]=10;
     }
     if(memory1[2]==memory6[4] && memory1[2]!=memory6[2])
     {
         Bcounter5=Bcounter5+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory6[3] && memory1[2]!=memory6[2])
     {
         Bcounter5=Bcounter5+1;
         memory1[2]=10;
     }
     if(memory1[2]==memory6[1] && memory1[2]!=memory6[2])
     {
         Bcounter5=Bcounter5+1;
         memory1[2]=10;
     }
     if(memory1[1]==memory6[4] && memory1[1]!=memory6[1])
     {
         Bcounter5=Bcounter5+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory6[3] && memory1[1]!=memory6[1])
     {
         Bcounter5=Bcounter5+1;
         memory1[1]=10;
     }
     if(memory1[1]==memory6[2] && memory1[1]!=memory6[1])
     {
         Bcounter5=Bcounter5+1;
         memory1[1]=10;
     }
     printf("%dA",Acounter5);
     printf("%dB",Bcounter5);




      }








}

