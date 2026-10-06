string timeConversion(string s) {
    int h = stoi(s.substr(0, 2));

    if (s[8] == 'A') {
        if (h == 12) h = 0;
    } else {
        if (h != 12) h += 12;
    }

    s[0] = '0' + h / 10;
    s[1] = '0' + h % 10;

    return s.substr(0, 8);
}
