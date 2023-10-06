bool isValidDate(int d, int m, int y)
{
    int c = 1;
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (d < 1 || d > 31) c = 0;
            break;

        case 4: case 6: case 9: case 11:
            if (d < 1 || d > 30) c = 0;
            break;

        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                if (d < 1 || d > 29) c = 0;
            } else {
                if (d < 1 || d > 28) c = 0;
            }
            break;
        default: c = 0; break;
    }
    if (y < 1) c = 0;
	return c;
}