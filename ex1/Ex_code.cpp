bool isSacredLeapYear(int year) {
    int Y_i = year;
    if (Y_i % 4 == 0 && Y_i % 100 != 0) { //ปีอธิกสุรทิน (มี29วัน)
        return true;
    } else if (Y_i % 4 == 0 && Y_i % 100 == 0 && Y_i % 400 == 0) { //ปีอธิกสุรทิน (มี29วัน)
        return true;
    } else return false;
}
