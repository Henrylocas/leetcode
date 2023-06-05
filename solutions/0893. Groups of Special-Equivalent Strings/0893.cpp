class Solution {
 public:
  int numSpecialEquivGroups(vector<string>& words) {
    unordered_set<string> set;

    for (const string& word : words) {
      string even;
      string odd;
      for (int i = 0; i < word.length(); ++i)
        if (i % 2 == 0)
          even += word[i];
        else
          odd += word[i];
      sort(begin(even), end(even));
      sort(begin(odd), end(odd));
      set.insert(even + odd);
    }

    return set.size();
  }
};
