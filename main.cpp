#include "ASCIIDisplay.h"

// Sample main, prints lines of characters and then layers TEST in the middle.
int main(void) {
  ASCIIDisplay ad;

  for (int y = 0; y < ScreenHeight; y++) {
    for (int x = 0; x < ScreenWidth; x++) {
      ad.charSet('0' + x, x, y);
    }
  }

  ad.Print("|        TEST        |", 20, 11);
  ad.Print("|        TEST        |", 20, 13, true);

  ad.CreateDialogue(20, 5, 1, 1);

  ad.draw();
}
