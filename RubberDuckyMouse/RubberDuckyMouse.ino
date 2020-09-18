// Jacek Fedorynski <jfedor@jfedor.org>
// http://www.jfedor.org/

#include "TrinketHidComboAbsoluteMouse.h"

const PROGMEM uint16_t trollface[] = {
  124, 1076, 224, 901, 224, 901, 378, 762, 378, 762, 669, 287, 669, 287, 833, 163, 833, 163, 938,
  150, 938, 150, 2168, 172, 2168, 172, 2452, 223, 2452, 223, 2672, 274, 2672, 274, 2937, 437, 2937,
  437, 2991, 509, 2991, 509, 3021, 663, 3021, 663, 3051, 723, 3051, 723, 3196, 852, 3196, 852, 3235,
  954, 3235, 954, 3235, 1157, 3235, 1157, 3106, 1444, 3106, 1444, 3111, 2271, 3111, 2271, 3115, 2387,
  3115, 2387, 2984, 2553, 2984, 2553, 2807, 2645, 2807, 2645, 2298, 2654, 2298, 2654, 1751, 2536,
  1751, 2536, 940, 2162, 940, 2162, 688, 1976, 688, 1976, 547, 1856, 547, 1856, 397, 1583, 397, 1583,
  143, 1264, 143, 1264, 124, 1076, 449, 1324, 387, 1155, 387, 1155, 414, 1027, 414, 1027, 498, 937,
  498, 937, 575, 907, 575, 907, 750, 916, 750, 916, 1015, 1016, 1015, 1016, 1165, 1018, 1165, 1018,
  1252, 978, 1252, 978, 1321, 905, 1013, 807, 1128, 715, 1128, 715, 1451, 659, 1451, 659, 1629, 717,
  1629, 717, 1749, 813, 1749, 813, 1746, 858, 1746, 858, 1672, 907, 1672, 907, 1481, 824, 1481, 824,
  1161, 815, 1161, 815, 1041, 839, 1041, 839, 1013, 807, 1190, 730, 1197, 783, 1197, 783, 1415, 785,
  1415, 785, 1430, 706, 1430, 706, 1190, 730, 2044, 849, 2146, 866, 2146, 866, 2294, 755, 2294, 755,
  2559, 734, 2559, 734, 2612, 794, 2612, 794, 2332, 832, 2332, 832, 2165, 888, 2165, 888, 2168, 1061,
  2168, 1061, 2272, 1144, 2272, 1144, 2392, 1232, 2392, 1232, 2296, 1245, 2296, 1245, 2163, 1397,
  2163, 1397, 2080, 1392, 2080, 1392, 2054, 1367, 1622, 1339, 1582, 1271, 1582, 1271, 1584, 1204,
  1584, 1204, 1618, 1168, 1618, 1168, 1714, 1149, 1736, 1301, 1736, 1279, 1736, 1279, 1759, 1268,
  1759, 1268, 1896, 1277, 2499, 1031, 2552, 1080, 2552, 1080, 2659, 1080, 2659, 1080, 2747, 995, 2747,
  995, 2901, 988, 2901, 988, 2948, 1020, 515, 1202, 637, 1159, 637, 1159, 690, 1029, 690, 1029, 679,
  1097, 679, 1097, 1299, 1352, 1299, 1352, 1772, 1476, 1772, 1476, 2200, 1519, 2200, 1519, 2531, 1484,
  2531, 1484, 2691, 1399, 2691, 1399, 2768, 1322, 2768, 1322, 2798, 1144, 2798, 1144, 2822, 1221,
  2822, 1221, 2884, 1354, 2884, 1354, 2867, 1769, 2867, 1769, 2813, 1944, 2813, 1944, 2687, 2032,
  2687, 2032, 2324, 2085, 2324, 2085, 1917, 2096, 1917, 2096, 1597, 2053, 1597, 2053, 1374, 1970,
  1374, 1970, 996, 1730, 996, 1730, 733, 1388, 733, 1388, 643, 1194, 643, 1194, 515, 1202, 765, 1341,
  1000, 1463, 1000, 1463, 1481, 1611, 1481, 1611, 1716, 1685, 1716, 1685, 1928, 1700, 1928, 1700,
  2206, 1681, 2206, 1681, 2535, 1662, 2535, 1662, 2672, 1649, 2672, 1649, 2815, 1559, 2815, 1559,
  2884, 1354, 1013, 1262, 1060, 1512, 1060, 1512, 1028, 1700, 1526, 1446, 1451, 1679, 1451, 1679,
  1441, 1784, 1441, 1784, 1374, 1970, 1902, 1534, 1928, 1700, 788, 1416, 1060, 1512, 1060, 1512, 1460,
  1722, 1460, 1722, 1843, 1812, 1843, 1812, 2193, 1856, 2193, 1856, 2424, 1869, 2424, 1869, 2649,
  1822, 2649, 1822, 2749, 1799, 2749, 1799, 2869, 1692, 1843, 1812, 1834, 2072, 2193, 1856, 2133,
  2085, 2424, 1869, 2324, 2085, 2621, 1831, 2533, 2053, 2749, 1799, 2687, 2032, 2200, 1519, 2210,
  1673, 2531, 1484, 2533, 1655, 2691, 1399, 2672, 1649, 2768, 1322, 2830, 1476
};

void keystroke(uint8_t modifiers, uint8_t keycode) {
  TrinketHidCombo.pressKey(modifiers, keycode);
  TrinketHidCombo.pressKey(0, 0);
}

void my_delay(int msec) {
  long t0 = millis();
  while (millis() < t0 + msec) {
    TrinketHidCombo.poll();
  }
}

void setup() {
  TrinketHidCombo.begin();

  // increase this delay for a better chance of success
  // windows likes to spend considerable time "setting up" a device the first time it's connected
  my_delay(1000);

  //  // wait for caps lock to be on
  //  while ((TrinketHidCombo.getLEDstate() & 0x02) == 0) {
  //    TrinketHidCombo.poll();
  //  }
  //
  //  my_delay(100);

  // launch paint
  keystroke(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  my_delay(500);
  keystroke(0, KEYCODE_M);
  keystroke(0, KEYCODE_S);
  keystroke(0, KEYCODE_P);
  keystroke(0, KEYCODE_A);
  keystroke(0, KEYCODE_I);
  keystroke(0, KEYCODE_N);
  keystroke(0, KEYCODE_T);
  keystroke(0, KEYCODE_ENTER);
  my_delay(500);
  // maximize window
  keystroke(KEYCODE_MOD_LEFT_ALT, KEYCODE_SPACE);
  keystroke(0, KEYCODE_ARROW_DOWN);
  keystroke(0, KEYCODE_ARROW_DOWN);
  keystroke(0, KEYCODE_ARROW_DOWN);
  keystroke(0, KEYCODE_ARROW_DOWN);
  keystroke(0, KEYCODE_ENTER);
  my_delay(100);
  // zoom in so that the default image size covers the entire screen
  keystroke(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_PAGE_UP);
  // might want to do it twice if you target 4K screens
  // keystroke(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_PAGE_UP);
  // increase brush size
  keystroke(KEYCODE_MOD_LEFT_CONTROL, 87);
  keystroke(KEYCODE_MOD_LEFT_CONTROL, 87);
  keystroke(KEYCODE_MOD_LEFT_CONTROL, 87);
  keystroke(KEYCODE_MOD_LEFT_CONTROL, 87);
  keystroke(KEYCODE_MOD_LEFT_CONTROL, 87);
  my_delay(100);

  // draw trollface
  for (int i = 0; i < sizeof(trollface) / 2 / 4; i++) {
    int x1 = 16384 + 4 * pgm_read_word_near(trollface + i * 4) - 8192;
    int y1 = 16384 + 1.7 * 4 * pgm_read_word_near(trollface + i * 4 + 1) - 8192;
    int x2 = 16384 + 4 * pgm_read_word_near(trollface + i * 4 + 2) - 8192;
    int y2 = 16384 + 1.7 * 4 * pgm_read_word_near(trollface + i * 4 + 3) - 8192;
    TrinketHidCombo.mouseMove(x1, y1, 0);
    TrinketHidCombo.mouseMove(x1, y1, 1);
    TrinketHidCombo.mouseMove(x2, y2, 0);
  }
}

void loop() {
  TrinketHidCombo.poll();
}
