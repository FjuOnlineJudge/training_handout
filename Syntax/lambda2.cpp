std::vector<int> someList;
int total = 0;
std::for_each(someList.begin(), someList.end(),[&total](int x) {
    total += x;
});
std::cout << total;