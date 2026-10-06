vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> result;

    for (string q : queries) {
        int count = 0;

        for (string s : stringList) {
            if (s == q)
                count++;
        }

        result.push_back(count);
    }

    return result;
}
