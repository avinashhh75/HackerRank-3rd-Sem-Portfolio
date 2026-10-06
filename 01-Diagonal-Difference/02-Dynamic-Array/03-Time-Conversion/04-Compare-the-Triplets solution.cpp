vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int x = 0, y = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) x++;
        else if (a[i] < b[i]) y++;
    }

    return {x, y};
}
